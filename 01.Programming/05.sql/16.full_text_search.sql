DROP TABLE IF EXISTS mushroom_notes;

CREATE VIRTUAL TABLE mushroom_notes USING fts5(name, description);

INSERT INTO mushroom_notes (name, description) VALUES
('ナメコ', 'ぬめりが特徴的で、味噌汁に最適な食用キノコ'),
('ベニテングダケ', '赤い傘に白い斑点があり、毒性が強い'),
('シイタケ', '乾燥させると旨味が増す、和食に欠かせない');

SELECT * FROM mushroom_notes WHERE mushroom_notes MATCH '毒 OR ぬめり';

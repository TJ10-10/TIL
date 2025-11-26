CREATE INDEX idx_mushroom_name ON mushrooms(name);

SELECT * FROM mushrooms WHERE name = 'シイタケ';

PRAGMA index_list('mushrooms');

DROP TABLE IF EXISTS mushroom_taxonomy;

CREATE TABLE mushroom_taxonomy (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  parent_id INTEGER
);

INSERT INTO mushroom_taxonomy (id, name, parent_id) VALUES
(1, '菌界', NULL),
(2, '担子菌門', 1),
(3, '真正担子菌網', 2),
(4, 'ハラタケ目', 3),
(5, 'ヌメリガサ科', 4),
(6, 'ナメコ属', 5),
(7, 'ナメコ', 6);

WITH RECURSIVE taxonomy_path AS (
  SELECT id, name, parent_id, 0 AS depth
  FROM mushroom_taxonomy
  WHERE parent_id IS NULL
  UNION ALL
  SELECT t.id, t.name, t.parent_id, tp.depth + 1
  FROM mushroom_taxonomy t
  JOIN taxonomy_path tp ON t.parent_id = tp.id
)
SELECT * FROM taxonomy_path ORDER BY depth;

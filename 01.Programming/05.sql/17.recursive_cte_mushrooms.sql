CREATE TABLE folders (
  id INTEGER PRIMARY KEY,
  name TEXT,
  parent_id INTEGER
);

INSERT INTO folders (id, name, parent_id) VALUES
(1, 'root', NULL),
(2, 'home', 1),
(3, 'user', 2),
(4, 'document', 3),
(5, 'photos', 3),
(6, 'work', 4);

WITH RECURSIVE folder_tree AS (
  SELECT id, name, parent_id, 0 AS depth
  FROM folders
  WHERE parent_id IS NULL
  UNION ALL
  SELECT f.id, f.name, f.parent_id, ft.depth + 1
  FROM folders f
  JOIN folder_tree ft ON f.parent_id = ft.id
)
SELECT * FROM　folder_tree ORDER BY depth;

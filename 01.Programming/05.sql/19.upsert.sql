CREATE TABLE IF NOT EXISTS mushrooms (
  id INTERGER PRIMARY KEY,
  name TEXT NOT NULL UNIQUE,
  edibility TEXT
  );

  INSERT INTO mushrooms (id, name, edibility)
  VALUES (1, 'nameko', 'edible');

  INSERT INTO mushrooms (id, name, edibility)
  VALUES (1, 'nameko', 'delicious')
  ON CONFLICT(id) DO UPDATE SET edibility = excluded.edibility;

  SELECT * FROM mushrooms;

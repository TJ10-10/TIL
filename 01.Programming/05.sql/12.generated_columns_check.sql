DROP TABLE IF EXISTS mushrooms_safety;

CREATE TABLE mushrooms_safety (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  edible BOOLEAN NOT NULL,
  warning TEXT GENERATED ALWAYS AS (
    CASE
      WHEN edible THEN '安全です'
      ELSE '注意: 毒性の可能性あり'
      END
    ) STORED,
    CHECK (name != '')
  );

INSERT INTO mushrooms_safety (id, name, edible) VALUES
(1, 'ナメコ', TRUE),
(2, 'ベニテングダケ', FALSE),
(3, 'シイタケ', TRUE);

SELECT id, name, edible, warning FROM mushrooms_safety;

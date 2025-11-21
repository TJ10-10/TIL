-- 19.upsert.sql

CREATE TABLE IF NOT EXISTS mushrooms (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL UNIQUE,
  edibility TEXT
);

-- 最初の挿入
INSERT INTO mushrooms (id, name, edibility)
VALUES (1, 'nameko', 'edible');

-- 同じIDで挿入しようとするとエラーになるが、ON CONFLICTで回避
INSERT INTO mushrooms (id, name, edibility)
VALUES (1, 'nameko', 'delicious')
ON CONFLICT(id) DO UPDATE SET edibility = excluded.edibility;

-- 結果確認
SELECT * FROM mushrooms;


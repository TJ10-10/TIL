CREATE TABLE mushrooms (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  habitat TEXT,
  edible BOOLEAN
);

INSERT INTO mushrooms (id, name, habitat, edible) VALUES
(1, 'ナメコ', '湿った倒木の上', TRUE),
(2, 'ベニテングダケ', '針葉樹林', FALSE),
(3, 'シイタケ', '広葉樹の幹', TRUE);

-- データの取得
SELECT * FROM mushrooms;

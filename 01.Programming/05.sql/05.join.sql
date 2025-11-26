DROP TABLE IF EXISTS regions;

CREATE TABLE regions (
id INTEGER PRIMARY KEY,
habitat TEXT NOT NULL,
region_name TEXT NOT NULL
);

INSERT INTO regions (id, habitat, region_name) VALUES
(1, '湿った倒木の上', '山間部'),
(2, '針葉樹林', '北の森'),
(3, '広葉樹の幹', '里山');

SELECT
  m.name AS mushroom_name,
  r.region_name
FROM
  mushrooms m
JOIN
  regions r
ON
  m.habitat = r.habitat;

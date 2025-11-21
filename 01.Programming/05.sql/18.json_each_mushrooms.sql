WITH raw_json(data) AS (
VALUES (
  '[
  {"name": "ナメコ", "habitat": "湿った倒木", "edible": true},
  {"name": "ベニテングダケ", "habitat": "針葉樹林", "edible": false},
  {"name": "マツタケ", "habitat": "アカマツ林", "edible": true}
  ]'
)
)

SELECT
  json_extract(value, '$.name') AS name,
  json_extract(value, '$.habitat') AS habitat,
  json_extract(value, '$.edible') AS edible
FROM raw_json, json_each(raw_json.data);

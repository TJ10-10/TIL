WITH edibility_count AS (
  SELECT
  edible,
  COUNT(*) AS count
  FROM mushrooms
  GROUP BY edible
)

SELECT
  CASE
    WHEN edible THEN '食用'
    ELSE '毒キノコ'
  END AS 種類,
  count AS 個数
FROM edibility_count;

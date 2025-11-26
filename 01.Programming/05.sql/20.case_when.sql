SELECT
  name,
  edibility,
  CASE
    WHEN edibility = 'edible' THEN '食べられる'
    WHEN edibility = "poisonous' THEN '危険!'
    ELSE '不明'
  END AS status
FROM mushrooms;

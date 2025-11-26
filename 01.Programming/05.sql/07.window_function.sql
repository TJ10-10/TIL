SELECT
  id,
  name,
  habitat,
  edible,
  COUNT(*) OVER (PARTITION BY edible ORDER BY id) AS edible_rank
  FROM mushrooms;

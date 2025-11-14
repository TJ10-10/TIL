SELECT
  habitat,
  COUNT(*) AS edible_count
FROM
  mushrooms
WHERE
  edible = TRUE
GROUP BY
  habitat
HAVING
  edible_count >= 1;

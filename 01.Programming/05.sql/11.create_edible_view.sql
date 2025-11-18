CREATE VIEW edible_mushrooms AS
SELECT
  id,
  name,
  habitat
FROM
  mushrooms
WHERE
  edible = TRUE;

SELECT * FROM edible_mushrooms;

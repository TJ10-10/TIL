DROP VIEW IF EXISTS recommended_mushrooms;

CREATE VIEW recommended_mushrooms AS
SELECT id, name, habitat, edible
FROM mushrooms
WHERE habitat LIKE '%湿った%'
  AND edible = TRUE;


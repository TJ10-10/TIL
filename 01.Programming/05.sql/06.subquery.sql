SELECT name, habitat
FROM mushrooms
WHERE habitat = (
  SELECT habitat
  FROM mushrooms
  WHERE edible = TRUE
  ORDER BY LENGTH(habitat) ASC
  LIMIT 1
);

CREATE OR REPLACE FUNCTION recommend_mushroom(habitat_preference TEXT, edible_only BOOLEAN DEFAULT TRUE)
RETURNS TABLE(id INTEGER, name TEXT, habitat TEXT, edible BOOLEAN) AS $$
BEGIN
  RETURN QUERY
  SELECT id, name, habitat, edible
  FROM mushrooms
  WHERE habitat LIKE '%' || habitat_preference || '%'
    AND (edible = TRUE OR edible_only = FALSE);
END;
$$ LANGUAGE plpgsql;



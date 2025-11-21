-- 21.common_patterns.sql

-- 1. WHERE IN
SELECT name FROM mushrooms
WHERE edibility IN ('edible', 'delicious');

-- 2. EXISTS
SELECT name FROM mushrooms m
WHERE EXISTS (
  SELECT 1 FROM mushrooms WHERE edibility = 'poisonous' AND m.id = id
);

-- 3. LIKE（部分一致）
SELECT name FROM mushrooms
WHERE name LIKE '%take';  -- shiitake など


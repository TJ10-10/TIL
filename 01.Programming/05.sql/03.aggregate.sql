-- 数える
SELECT COUNT(*) AS edible_count
FROM mushrooms
WHERE edible = TRUE;

-- 集計
SELECT habitat, COUNT(*) AS count
FROM mushrooms
GROUP BY habitat;

-- 平均
SELECT AVG(LENGTH(name)) AS avg_name_length
FROM mushrooms;

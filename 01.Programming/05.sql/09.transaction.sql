BEGIN TRANSACTION;

UPDATE mushrooms
SET edible = FALSE
WHERE name = 'シイタケ';

COMMIT;

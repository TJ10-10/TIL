DROP VIEW IF EXISTS edible_change_view;
DROP TRIGGER IF EXISTS log_edible_change;
DROP TABLE IF EXISTS mushroom_log;

CREATE TABLE mushroom_log (
  log_id INTEGER PRIMARY KEY AUTOINCREMENT,
  mushroom_id INTEGER,
  action TEXT,
  timestamp DATETIME DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER log_edible_change
AFTER UPDATE OF edible ON mushrooms
FOR EACH ROW
WHEN OLD.edible != NEW.edible
BEGIN
  INSERT INTO mushroom_log (mushroom_id, action)
  VALUES (NEW.id, 'edible changed');
END;

CREATE VIEW edible_change_view AS
SELECT
  l.log_id,
  m.name,
  l.action,
  l.timestamp
FROM
  mushroom_log l
JOIN
  mushrooms m ON l.mushroom_id = m.id;

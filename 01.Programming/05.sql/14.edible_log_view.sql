CREATE TABLE edible_log (
  log_id INTEGER PRIMARY KEY AUTOINCREMENT,
  mushroom_id INTEGER,
  name TEXT,
  logged_at DATETIME DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER log_edible_insert
AFTER INSERT ON mushrooms
WHEN NEW. edible = TRUE
BEGIN
  INSERT INTO edible_log (mushroom_id, name)
  VALUES (NEW.id, NEW.name);
END;

CREATE VIEW recent_edible_log AS
SELECT
  name,
  logged_at
FROM
  edible_log
ORDER BY
  logged_at DESC
LIMIT 10;

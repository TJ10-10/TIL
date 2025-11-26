CREATE TABLE mushroom_log (
  log_id INTEGER PRIMARY KEY AUTOINCREMENT,
  mushroom_id INTEGER,
  action TEXT,
  timestamp DATETIME DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER log_mushroom_insert
AFTER INSERT ON mushrooms
BEGIN
  INSERT INTO mushroom_log (mushroom_id, action)
  VALUES (NEW.id, 'INSERT');
END;

CREATE TRIGGER log_mushroom_update
AFTER UPDATE ON mushrooms
BEGIN
  INSERT INTO mushroom_log (mushroom_id, action)
  VALUES (NEW.id, 'UPDATE');
END;

CREATE TRIGGER log_mushroom_delete
AFTER DELETE ON mushrooms
BEGIN
  INSERT INTO mushroom_log (mushroom_id, action)
  VALUES (OLD.id, 'DELETE');
END;

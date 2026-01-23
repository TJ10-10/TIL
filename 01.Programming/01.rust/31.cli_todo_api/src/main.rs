use serde::{Deserialize, Serialize};
use std::fs::{File, OpenOptions};
use std::io::{self, BufReader, Write};

#[derive(Serialize, Deserialize, Debug)]
struct TodoItem {
    id: u32,
    task: String,
    completed: bool,
}

fn main() -> io::Result<()> {
    let file_path = "todos.json";
    let mut todos = load_todos(file_path).unwrap_or_else(|_| Vec::new());

    println!("--- Rust CLI ToDo ---");
    println!("1: 一覧表示, 2: タスク追加, 3: 終了");

    loop {
        print!("\n選択してください > ");
        io::stdout().flush()?;

        let mut choice = String::new();
        io::stdin().read_line(&mut choice)?;

        match choice.trim() {
            "1" => {
                println!("\n [現在のタスク] ");
                for item in &todos {
                    let status = if item.completed { "[x]" } else { "[ ]" };
                    println!("{} {}: {}", status, item.id, item.task);
                }
            }
            "2" => {
                print!("タスク名を入力: ");
                io::stdout().flush()?;
                let mut task = String::new();
                io::stdin().read_line(&mut task)?;

                let new_id = (todos.len() as u32) + 1;
                todos.push(TodoItem {
                    id: new_id,
                    task: task.trim().to_string(),
                    completed: false,
                });
                save_todos(file_path, &todos)?;
                println!("保存しました!");
            }
            "3" => break,
            _ => println!("無効な入力です"),
        }
    }
    Ok(())
}

fn load_todos(path: &str) -> io::Result<Vec<TodoItem>> {
    let file = File::open(path)?;
    let reader = BufReader::new(file);
    let u = serde_json::from_reader(reader)?;
    Ok(u)
}

fn save_todos(path: &str, todos: &Vec<TodoItem>) -> io::Result<()> {
    let file = OpenOptions::new()
        .write(true)
        .create(true)
        .truncate(true)
        .open(path)?;
    serde_json::to_writer_pretty(file, todos)?;
    Ok(())
}

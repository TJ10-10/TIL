import { useState } from 'react';

function App() {
  const [tasks, setTasks] = useState([]);
  const [input, setInput] = useState('');

  const addTask = () => {
    if (input.trim()) {
      setTasks([...tasks, input]);
      setInput('');
    }
  };

  const removeTask = (index) => {
    setTasks(tasks.filter((_, i) => i !== index));
  };

  return (
    <div>
    <h1>ToDo List</h1>
    <input
    value={input}
    onChange={(e) => setInput(e.target.value)}
    placeholder="やることを入力"
    />
    <button onClick={addTask}>追加</button>
    <ul>
    {tasks.map((task, i) => (
      <li key={i}>
      {task} <button onClick={() => removeTask(i)}>削除</button>
      </li>
    ))}
    </ul>
    </div>
    );
}

export default App;

import { useState, ChangeEvent } from 'react';

function App() {
  const [tasks, setTasks] = useState<string[]>([]);
  const [input, setInput] = useState<string>('');

  const addTask = () => {
    if (input.trim()) {
      setTasks([...tasks, input]);
      setInput('');
    }
  };

  const removeTask = (index: number) => {
    setTasks(tasks.filter((_, i) => i !== index));
  };

  const handleChange = (e: ChangeEvent<HTMLInputElement>) => {
    setInput(e.target.value);
  };

  return (
    <div style={{ padding: '2rem', fontFamily: 'sans-serif' }}>
    <h1>ToDo List</h1>
    <input
    value={input}
    onChange={handleChange}
    placeHolder="やることを入力"
    style={{ padding: '0.5rem', marginRight: '0.5rem' }}
    />
    <button onClick={addTask}>追加</button>
    <ul style={{ marginTop: '1rem' }}>
    {tasks.map((task, i) => (
      <li key={i} style={{ marginBottom: '0.5rem' }}>
      {task}{' '}
      <button onClick={() => removeTask(i)} style={{ marginLeft: '1rem' }}>
      削除
      </button>
      </li>
    ))}
    </ul>
    </div>
  );
}

export default App;

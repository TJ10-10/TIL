import React, { useState } from 'react';

export default function Counter() {
  const [count, setCount] = useState(0);

  return (
    <div style={{ textAlign: 'center' }}>
    <h2>カウンター</h2>
    <p>現在のカウント: {count}</p>
    <button onClick={() => setCount(count + 1)}>+1</button>
    <button onClick={() => setCount(count - 1)}>-1</button>
    <button onClick={() => setCount(0)}>リセット</button>
    </div>
  );
}

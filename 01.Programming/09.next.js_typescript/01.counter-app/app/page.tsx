'use client';

import { useState } from 'react';

export default function Home() {
  const [count, setCount] = useState(0);

  return (
    <main className="flex flex-col items-center justify-center min-h-screen bg-gray-100 text-gray-800">
    <h1 className="text-2xl font-bold mb-4">React カウンター</h1>
    <p className="text-lg mb-2">現在のカウント: {count}</p>
    <div className="space-x-2">
    <button
    onClick={() => setCount(count + 1)}
    className="px-4 py-2 bg-blue-500 text-white rounded hover:bg-blue-600"
    >

    +1
    </button>
    <button
    onClick={() => setCount(count - 1)}
    className="px-4 py-2 bg-red-500 text-white rounded hover:bg-red-600"
    >
    
    -1
    </button>
    <button
    onClick={() => setCount(0)}
    className="px-4 py-2 bg-gray-500 text-white rounded hover:bg-gray-600"
    >

    リセット
    </button>
    </div>
    </main>
  );
}

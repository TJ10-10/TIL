'use client';

import { useState } from 'react';

type CatImage = {
  url: string;
};

export default function Home() {
  const [catUrl, setCatUrl] = useState<string | null>(null);
  const [loading, setLoading] = useState(false);

  const fetchCat = async () => {
    setLoading(true);
    try {
      const res = await fetch('https://api.thecatapi.com/v1/images/search');
      const data: CatImage[] = await res.json();
      setCatUrl(data[0].url);
    } catch (error) {
      console.error('猫の取得に失敗しました', error);
    } finally {
      setLoading(false);
    }
  };

  return (
    <div style={{ textAlign: 'center', padding: '2rem' }}>
    <h1>ランダム猫画像ジュネレーター</h1>
    <button onClick={fetchCat} disabled={loading}>
    {loading ? '読み込み中...' : '猫を表示!'}
    </button>
    {catUrl && (
      <div style={{ marginTop: '2rem' }}>
      <img src={catUrl} alt="A cute cat" style={{ maxWidth: '100%', borderRadius: '8px' }}/>
      </div>
    )}
    </div>
  );
}


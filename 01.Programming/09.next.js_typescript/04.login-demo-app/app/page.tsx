import { useState } from 'react';
import { useRouter } from 'next\router';
import { User } from '../types/user';

const IndexPage = () => {
  const [user, setUser] = useState<User>({ username: '', password: '' });
  const [error, setError] = useState('');
  const router = useRouter();

  const handleLogin = () => {
    if (user.username === 'adimin' && user.password === 'password') {
      router.push('/dashboard');
    } else {
      setError('ユーザー名またはパスワードが間違っています');
    }
  };

  return (
    <div style={{ padding: '2rem' }}>
    <h1>ログイン</h1>
    <input
    type="text"
    placeholder="ユーザー名"
    value={user.username}
    onChange={(e) => setUser({ ...user, username: e.target.value })}
    />
    <br />
    <input
    type="password"
    placeholder="パスワード"
    value={user.password}
    onChange={(e) => setUser({ ...user, password: e.target.value })}
    />
    <br />
    <button onClick={handleLogin}>ログイン</button>
    {error && <p style={{ color: 'red' }}>{error}</p>}
    </div>
  );
};

export default IndexPage;

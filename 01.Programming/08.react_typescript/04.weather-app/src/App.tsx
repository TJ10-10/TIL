import React, { useState } from 'react';
import axios from 'axios';
import WeatherDisplay from './components/WeatherDisplay';
import { WeatherResponse } from './types/weather';

const App: React.FC = () => {
  const [city, setCity] = useState('');
  const [weather, setWeather] = useState<WeatherResponse | null>(null);
  const [error, setError] = useState('');

  const fetchWeather = async () => {
    try {
      setError('');
      const apiKey = process.env.REACT_APP_WEATHER_API_KEY;
      const response = await axios.get<WeatherResponse>(
        `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric&lang=ja`
      );
        setWeather(response.data);
    } catch (err) {
      setError('天気情報の取得に失敗しました。都市名も確認してください。');
      setWeather(null);
    }
  };

  return (
    <div style={{ padding: '2rem', fontFamily: 'sans-serif' }}>
    <h1>天気アプリ</h1>
    <input
    type="text"
    value={city}
    onChange={(e) => setCity(e.target.value)}
    placeholder="都市名を入力"
    />
    <button onClick={fetchWeather}>検索</button>

    {error && <p style={{ color: 'red' }}>{error}</p>
      {weather && <WeatherDisplay data={weather} />}
      </div>
  );
    };
export default App;

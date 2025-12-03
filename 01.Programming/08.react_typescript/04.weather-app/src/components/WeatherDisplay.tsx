import React from 'react';
import { WeatherResponse } from '../types/weather';

interface Props {
  data: WeatherResponse;
}

const WeatherDisplay: React.FC<Props> = ({ data }) => {
  return (
    <div>
    <h2>{data.name} の天気</h2>
    <p>{data.weather[0].description}</p>
    <img
    src={`https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png`}
    alt="weather icon"
    />
    <p>気温: {data.main.temp}℃ </p>
    <p>湿度: {data.main.humidity}%</p>
    </div>
  );
};

export default WeatherDisplay;

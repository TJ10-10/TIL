import { GetServerSideProps } from 'next';
import { fetchZennArticles } from '../lib/fetchZenn';
import { Article } from '../types/article';

export default async function Home() {
  const articles = await fetchZennArticles();

  return (
    <div>
    <h1>Zenn記事一覧</h1>
    <ul>
    {articles.map((article, idx) => (
      <li key={idx}>
      <a href={article.link} target="_black" rel="noopener noreferrer">
      {article.title} ({article.pubDate})
      </a>
      </li>
    ))}
    </ul>
    </div>
  );
}


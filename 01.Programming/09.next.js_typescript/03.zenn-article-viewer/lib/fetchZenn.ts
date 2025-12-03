import Parser from 'rss-parser';
import { Article } from '../types/article';

const parser = new Parser();

export async function fetchZennarticles(): Promise<Article[]> {
  const feed = await parser.parseURL('https://zenn.dev/<ユーザー名>/feed');
  return feed.items.map(item => ({
    title: item.title || '',
    link: item.link || '',
    pubDate: item.pubDate || '',
  }));
}

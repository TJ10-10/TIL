import { FigmaDocument } from '../types/figma';

export async function fetchFigmaDocument(): Promise<FigmaDocument> {
  const fileKey = process.env.FIGMA_FILE_KEY;
  const token = process.env.FIGMA_ACCESS_TOKEN;

  const res = await fetch(`https://api.figma.com/v1/files/${fileKey}`, {
    headers: {
    'X-Figma-Token': token || '',
  },
  });

  if (!res.ok) {
    throw new Error('Figma API fetch failed');
  }

  return res.json();
}

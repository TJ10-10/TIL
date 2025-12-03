import { useEffect, useState } from 'react';
import { fetchFigmaDocument } from '../lib/fetchFigma';
import { FigmaNode } from '../types/figma';

const renderNode = (node: FigmaNode, depth = 0): JSX.Element => (
  <div key={node.id} style={{ marginLeft: depth * 16 }}>
  <strong>{node.name}</strong> ({node.type})
  {node.children?.map(child => renderNode(child, depth + 1))}
  </div>
);

export default function Home() {
  const [nodes, setNodes] = useState<FigmaNode[]>([]);

  useEffect(() => {
    fetchFigmaDocument()
    .then(data => setNodes(data.document.children))
    .catch(err => console.error(err));
  }, []);

  return (
    <div>
    <h1>Figmaファイル構造ビューア</h1>
    {nodes.map(node => renderNode(node))}
    </div>
  );
}

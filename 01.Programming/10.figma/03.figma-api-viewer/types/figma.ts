export type FigmaNode = {
  id: string;
  name: string;
  type: string;
  children?: FigmaNode[];
};

export type FigmaDocument = {
  document: {
    children: FigmaNode[];
  };
};

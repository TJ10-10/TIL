interface Book {
  title: string;
  author: string;
  pages: number;
  isAvailable: boolean;
}

class LibraryBook implements Book {
  constructor(
    public title: string,
    public author: string,
    public pages: number,
    public isAvailable: boolean
  ) {}

  printInfo(): void {
    console.log(` Title: ${this.title}`);
    console.log(` Author: ${this.author}`);
    console.log(` Pages: ${this.pages}`);
    console.log(` Available: ${this.isAvailable}`);
  }
}

const book1 = new LibraryBook("The Rusty Forest", "Erin Nameko", 128, true);
book1.printInfo();

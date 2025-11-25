var LibraryBook = /** @class */ (function () {
    function LibraryBook(title, author, pages, isAvailable) {
        this.title = title;
        this.author = author;
        this.pages = pages;
        this.isAvailable = isAvailable;
    }
    LibraryBook.prototype.printInfo = function () {
        console.log(" Title: ".concat(this.title));
        console.log(" Author: ".concat(this.author));
        console.log(" Pages: ".concat(this.pages));
        console.log(" Available: ".concat(this.isAvailable));
    };
    return LibraryBook;
}());
var book1 = new LibraryBook("The Rusty Forest", "Erin Nameko", 128, true);
book1.printInfo();

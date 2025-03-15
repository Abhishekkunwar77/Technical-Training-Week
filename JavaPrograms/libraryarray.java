import java.util.ArrayList;

class Book {
    String name;
    String author;

    Book(String name, String author) {
        this.name = name;
        this.author = author;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getName() {
        return name;
    }

    public String getAuthor() {
        return author;
    }
}

class Libary {
    ArrayList<Book> books = new ArrayList<>();

    public void addBook(Book book) {
        this.books.add(book);
    }

    public void removeBook(Book book) {
        this.books.remove(book);
    }
}

public class libraryarray {
    public static void main(String[] args) {
        Libary lib = new Libary();
        lib.addBook(new Book("Java Programming", "Author Abhishek"));
        lib.addBook(new Book("The day I stop drinking milk", "Author Abhishek"));
        lib.addBook(new Book("Nepalese History", "Author Abhishek"));
        lib.addBook(new Book("Rich Dad Poor Dad", "Author Abhishek"));
        System.out.println(lib.books);
        lib.removeBook(new Book("IIT colleges", "Author Abhishek"));
        System.out.println(lib.books);
        lib.addBook(new Book("Facets of Indian Culture", "Author Abhishek"));
    }
}
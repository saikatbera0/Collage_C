import java.util.ArrayList;
import java.util.List;

// Abstract Product class
abstract class Product {
    private String id;
    private String title;
    private double price;

    public Product(String id, String title, double price) {
        this.id = id;
        this.title = title;
        this.price = price;
    }
    public String getId() {
        return id;
    }

    public String getTitle() {
        return title;
    }

    public double getPrice() {
        return price;
    }

    public abstract void displayInfo();
}

// Electronics class
class Electronics extends Product {
    private String brand;
    private String model;

    public Electronics(String id, String title, double price, String brand, String model) {
        super(id, title, price);
        this.brand = brand;
        this.model = model;
    }

    @Override
    public void displayInfo() {
        System.out.println("Electronics:");
        System.out.println("ID: " + getId());
        System.out.println("Title: " + getTitle());
        System.out.println("Price: " + getPrice());
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
    }
}

// Book class
class Book extends Product {
    private String author;
    private String isbn;

    public Book(String id, String title, double price, String author, String isbn) {
        super(id, title, price);
        this.author = author;
        this.isbn = isbn;
    }

    @Override
    public void displayInfo() {
        System.out.println("Book:");
        System.out.println("ID: " + getId());
        System.out.println("Title: " + getTitle());
        System.out.println("Price: " + getPrice());
        System.out.println("Author: " + author);
        System.out.println("ISBN: " + isbn);
    }
}

// ShoppingCart class
class ShoppingCart {
    private List<Product> products;

    public ShoppingCart() {
        products = new ArrayList<>();
    }

    public void addProduct(Product product) {
        products.add(product);
    }

    public void displayCart() {
        for (Product product : products) {
            product.displayInfo();
            System.out.println();
        }
    }

    public double calculateTotalPrice() {
        double total = 0;
        for (Product product : products) {
            total += product.getPrice();
        }
        return total;
    }
}

// Main class
public class OnlineRetailSystem {
    public static void main(String[] args) {
        // Creating products
        Electronics laptop = new Electronics("E001", "Laptop", 999.99, "Dell", "XPS 13");
        Book book = new Book("B001", "Java Programming", 59.99, "James Gosling", "1234567890");

        // Creating shopping cart
        ShoppingCart cart = new ShoppingCart();
        cart.addProduct(laptop);
        cart.addProduct(book);

        // Displaying cart items
        cart.displayCart();

        // Calculating total price
        System.out.println("Total Price: $" + cart.calculateTotalPrice());
    }
}
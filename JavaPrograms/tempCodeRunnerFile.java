class Car {
    private String name;
    private int no_of_seats;
    private String color;
    private String model;

    public void setDetails(String name, int no_of_seats, String color, String model) {
        this.name = name;
        this.no_of_seats = no_of_seats;
        this.color = color;
        this.model = model;
    }

    public void getDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("No of seats: " + this.no_of_seats);
        System.out.println("Color: " + this.color);
        System.out.println("Model: " + this.model);
    }
}

public class Main {
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.setDetails("BMW", 2, "Red", "M3");
        car1.getDetails();
    }
}
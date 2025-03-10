// program car class and implement cars property like no.of seats, car type 
class Car {  
    int numberOfSeats;  
    String carType; 
    String color;  
    public Car(int numberOfSeats, String carType,String color){
    this.numberOfSeats=numberOfSeats;
   this.carType = carType;  
this.color = color;  
}
    public int getNumberOfSeats() {
        return numberOfSeats;
    }
    public static void main(String[] args) {
        Car audi= new Car(4,"VIP","green");
        System.out.println("Number of seats: " + audi.getNumberOfSeats());
        System.out.println(audi);
    }
}
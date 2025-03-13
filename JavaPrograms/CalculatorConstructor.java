public class CalculatorConstructor {

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        System.out.println("Add two integers: " + calculator.add(55, 66));
        System.out.println("Add three integers: " + calculator.add(23, 23, 14));
        System.out.println("Add two double values: " + calculator.add(5.5, 6.5));
        System.out.println("Add three double values: " + calculator.add(5.5, 10.5, 15.5));
        System.out.println("Add an integer and a double value: " + calculator.add(5, 10.5));
    }
}

class Calculator {
    public int add(int a, int b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b + c;
    }

    public double add(double a, double b) {
        return a + b;
    }

    public double add(double a, double b, double c) {
        return a + b + c;
    }

    public double add(int a, double b) {
        return a + b;
    }
}

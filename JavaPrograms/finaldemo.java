// Final class example (Prevents inheritance)

final class Constants {

    // Final variable (Value can't be changed)
    final double PI = 3.14159;

    // Final method (Can't be overridden)
    final void displayPiValue() {
        System.out.println("Value of PI: " + PI);
    }
}

// Attempting to inherit from a final class will cause an error
// class MathConstants extends Constants {}  // ❌ Error: Cannot inherit from final class
public class finaldemo {

    public static void main(String[] args) {
        // Creating object
        Constants obj = new Constants();

        // Accessing final variable
        obj.displayPiValue();

        // Attempting to modify the final variable will cause an error
        // obj.PI = 3.14; // ❌ Error: Cannot assign a value to final variable 'PI'
    }
}

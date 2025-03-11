public class Class {
    class Base {
        public Base() {
            System.out.println("Base");
        }
    }

    class Intermediate extends Base {
        public Intermediate() {
            System.out.println("Intermediate");
        }
    }

    class Derived extends Intermediate {
        public Derived() {
            System.out.println("Derived");
        }
    }

    public static void main(String[] args) {
        Class outer = new Class();
        Derived derived = outer.new Derived();
        System.out.println(derived);
    }
}

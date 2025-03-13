abstract class Animal{
    abstract void sound();
}
class Dog extends Animal{
    @Override
    void sound(){
        System.out.println("Bow Bow");
    }
}

public class Abstraction {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        myDog.sound();
    }
}
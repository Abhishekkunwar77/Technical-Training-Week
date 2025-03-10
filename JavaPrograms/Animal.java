class Animal {  
    public void makeSound() {  
        System.out.println("Animal  make sound");  
    }  
}  
class Dog extends Animal {  
    @Override  
    public void makeSound() {  
        System.out.println("Dog barks");  
    }  
}  
class Cat extends Animal {  
    @Override  
    public void makeSound() {  
        System.out.println("Cat meows");  
    }  
}  

class Cow extends Animal {  
    @Override  
    public void makeSound() {  
        System.out.println("Cow moos");  
    }  
}  

class Main {  
    public static void main(String[] args) {  
        Animal animal = new Animal();  
        Dog dg = new Dog();  
        Cat ct = new Cat();  
        Cow cw = new Cow();  

        animal.makeSound();  
        dg.makeSound();  
        ct.makeSound();  
        cw.makeSound();  
    }  
}  
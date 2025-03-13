class Person {
    void greet() {
        System.out.println("Hello!");
    }
}

class Student extends Person {
    @Override
    void greet() {
        System.out.println("Hello, I am a student!");
    }
}

class Teacher extends Person {
    @Override
    void greet() {
        System.out.println("Hello, I am a teacher!");
    }
}

public class Polymorphism {
    public static void main(String[] args) {
        Person person = new Person();
        Person student = new Student();
        Person teacher = new Teacher();

        person.greet();
        student.greet();
        teacher.greet();
    }
}
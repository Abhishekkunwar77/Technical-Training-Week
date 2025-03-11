class Child{
    public int a=10;
    public int b=20;
    public void display(){
        System.out.println("child Class");

    }
}

class AccessModifier{
    public static void main(String[] args) {
        Child child=new Child();
        System.out.println(child.a);
        child.display();
    }
}
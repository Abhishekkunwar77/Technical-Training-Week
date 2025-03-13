public class Constructor {
  class Sample{
    Sample(){
        System.out.println("Constructor Created");
    }
  }
  
  public static void main(String[] args) {
    Main.greet();
  }
  
  public class Main{
    static void greet(){
        Sample sample = new Constructor().new Sample();
        System.out.println(sample);
    }
  }
}

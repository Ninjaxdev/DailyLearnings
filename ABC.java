interface Test{
    int a=10;
    void display();
    default void defaultMethiod(){
        privateMethod();
        System.out.println("default");
    }
    static void staticMethod(){
        System.out.println("static");
    }
    private void privateMethod()
    {
        System.out.println("private");
    }
}
public class ABC implements Test{
  public void display()
  {
    System.out.println("test implemented by abc class");
  }
  public static void main(String[] args) {
      ABC obj=new ABC();
      Test.staticMethod();
      obj.display();
  }
}
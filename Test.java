public class Test{
    public static void main(String[] args) {
        Shape obj1=new Circle("red",4.2f);
        Shape obj2=new Rectangle("yellow",6,9);
        System.out.println(obj1.toString());
        System.out.println(obj2.toString());
    }
}
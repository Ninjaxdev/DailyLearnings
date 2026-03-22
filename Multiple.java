interface add{
int plus(int a,int b);
}
interface sub{
 int minus(int a,int b);
}
class Multiple implements add,sub{
  public int plus(int a,int b){
    return a+b;
  }
  public int minus(int a,int b){
    return a-b;
  }

  public static void main(String[] args) {
      Multiple obj=new Multiple();
      System.out.println("addition "+obj.plus(58, 93));
      System.out.println("subtraction "+obj.minus(158, 93));
  }
}
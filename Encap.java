class Encap{
    private int num1;
    //private int num2;
    private String name;

    public void SetData(int num1,String name){
        
        this.num1=num1;
        this.name=name;
        // this.num2=50;
    }
    public String getData(){
        return name;
    }
    public int getAge(){
        return num1;
    }

    public static void main(String[] args){
        Encap obj=new Encap();
        obj.SetData(20,"ram");
        System.out.println("name : "+obj.getData());
        System.out.println("age : "+obj.getAge());
    }
}
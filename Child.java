class Child extends Parent{
    
    // @Override public void m1(){
    //     System.out.println("childs m1 method");
    // }
    private void m3()
    {
        System.out.println("private method of child class");
    }
   @Override public void m2()
    {
        m3();
        System.out.println("childs public m2 method");
    }
}
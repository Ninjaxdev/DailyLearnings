class Rectangle extends Shape{
    int length;
    int breadth;
    public Rectangle(String color,int length,int breadth){
        super(color);
        this.length=length;
        this.breadth=breadth;
    }
    @Override double area(){
        return length*breadth;
    }
    @Override public String toString(){
        return "Circle color is "+super.getColor()+" and area is "+area();
    }
}
package interfejsy_projektowanie.cw_factory;

public class Rectangle {
    protected int a;
    protected int b;

    public Rectangle(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public Rectangle clone() {
        return new Rectangle(this.a, this.b);
    }

}

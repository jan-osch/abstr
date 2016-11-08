package interfejsy_projektowanie.cw_factory;

public class Square extends Rectangle {
    public Square(int a) {
        super(a, a);
    }

    @Override
    public Square clone() {
        return new Square(this.a);
    }
}

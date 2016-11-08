package generyki.cw_3_1;

public class ThreeTuple<A, B, C> {
    private C third;
    private TwoTuple<A, B> previous;

    public ThreeTuple(A first, B second, C third) {
        this.previous = new TwoTuple<>(first, second);
        this.third = third;
    }

    A getFirst() {
        return previous.getFirst();
    }

    B getSecond() {
        return previous.getSecond();
    }

    C getThird() {
        return third;
    }
}

package generyki.cw_3_1;

public class FourTuple<A, B, C, D> {
    private D fourth;
    private ThreeTuple<A, B, C> previous;

    public FourTuple(A first, B second, C third, D fourth) {
        this.previous = new ThreeTuple<>(first, second, third);
        this.fourth = fourth;
    }

    A getFirst() {
        return previous.getFirst();
    }

    B getSecond() {
        return previous.getSecond();
    }

    C getThird() {
        return previous.getThird();
    }

    D getFourth() {
        return fourth;
    }
}

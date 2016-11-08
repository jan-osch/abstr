package generyki.cw_3_1;

public class TwoTuple<A, B> {
    private A first;
    private B second;

    public TwoTuple(A first, B second) {
        this.first = first;
        this.second = second;
    }

    A getFirst() {
        return first;
    }

    B getSecond() {
        return second;
    }
}


package generyki.cw_3_4;

public interface Operator<A> {
    A add(A first, A second);

    A multiply(A first, A second);

    boolean isZero(A a);
}

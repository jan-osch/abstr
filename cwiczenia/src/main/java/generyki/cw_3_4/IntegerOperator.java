package generyki.cw_3_4;

public class IntegerOperator implements Operator<Integer> {
    @Override
    public Integer add(Integer first, Integer second) {
        return first + second;
    }

    @Override
    public Integer multiply(Integer first, Integer second) {
        return first * second;
    }

    @Override
    public boolean isZero(Integer integer) {
        return integer == 0;
    }
}

package generyki.cw_3_4;

public class DoubleOperator implements Operator<Double> {
    @Override
    public Double add(Double first, Double second) {
        return first + second;
    }

    @Override
    public Double multiply(Double first, Double second) {
        return first * second;
    }

    @Override
    public boolean isZero(Double aDouble) {
        return Double.compare(aDouble, 0.0) == 0;
    }
}

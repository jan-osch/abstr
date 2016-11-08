package generyki.cw_3_4;

public class FloatOperator implements Operator<Float> {
    @Override
    public Float add(Float first, Float second) {
        return first + second;
    }

    @Override
    public Float multiply(Float first, Float second) {
        return first * second;
    }

    @Override
    public boolean isZero(Float aFloat) {
        return Float.compare(aFloat, 0f) == 0;
    }
}

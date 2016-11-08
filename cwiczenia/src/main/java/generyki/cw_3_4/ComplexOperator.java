package generyki.cw_3_4;

public class ComplexOperator implements Operator<Complex> {
    @Override
    public Complex add(Complex first, Complex second) {
        return new Complex(first.getReal() + second.getReal(), first.getImaginary() + second.getImaginary());
    }

    @Override
    public Complex multiply(Complex first, Complex second) {
        double real = first.getReal() * second.getReal();
        real -= first.getImaginary() * second.getImaginary();

        double imaginary = first.getImaginary() * second.getReal();
        imaginary += first.getReal() * second.getImaginary();

        return new Complex(real, imaginary);
    }

    @Override
    public boolean isZero(Complex complex) {
        return Double.compare(complex.getReal(), 0) == 0 &&
                Double.compare(complex.getImaginary(), 0) == 0;
    }
}

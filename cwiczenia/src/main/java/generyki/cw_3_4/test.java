package generyki.cw_3_4;

public class test {
    public static void main(String[] args) {
        IntegerOperator operator = new IntegerOperator();

        Matrix<Integer> first = new Matrix<Integer>(operator, 3, 3);
        first.set(0, 0, 1);
        first.set(0, 1, 2);
        first.set(0, 2, 3);

        first.set(1, 0, 1);
        first.set(1, 1, 2);
        first.set(1, 2, 3);

        first.set(2, 0, 1);
        first.set(2, 1, 2);
        first.set(2, 2, 3);
        System.out.println(first.toString());

        Matrix<Integer> second = new Matrix<>(operator, 3, 3);
        second.set(0, 0, 5);
        second.set(0, 1, 6);
        second.set(0, 2, 7);

        second.set(1, 0, 5);
        second.set(1, 1, 6);
        second.set(1, 2, 7);

        second.set(2, 0, 5);
        second.set(2, 1, 6);
        second.set(2, 2, 7);
        System.out.println(second.toString());

        Matrix<Integer> third = first.add(second);
        System.out.println(third);

        test.assertTrue(third.get(0, 0) == 6);
        test.assertTrue(third.get(0, 1) == 8);
        test.assertTrue(third.get(0, 2) == 10);

        test.assertTrue(third.get(1, 0) == 6);
        test.assertTrue(third.get(1, 1) == 8);
        test.assertTrue(third.get(1, 2) == 10);

        test.assertTrue(third.get(2, 0) == 6);
        test.assertTrue(third.get(2, 1) == 8);
        test.assertTrue(third.get(2, 2) == 10);

        Matrix<Integer> fourth = new Matrix<>(operator, 2, 3);

        fourth.set(0, 0, 1);
        fourth.set(0, 1, 0);
        fourth.set(0, 2, 2);

        fourth.set(1, 0, -1);
        fourth.set(1, 1, 3);
        fourth.set(1, 2, 1);
        System.out.println(fourth);

        Matrix<Integer> fifth = new Matrix<>(operator, 3, 2);
        fifth.set(0, 0, 3);
        fifth.set(0, 1, 1);

        fifth.set(1, 0, 2);
        fifth.set(1, 1, 1);

        fifth.set(2, 0, 1);
        fifth.set(2, 1, 0);
        System.out.println(fifth);


        Matrix<Integer> sixth = fourth.multiply(fifth);

        test.assertTrue(sixth.get(0, 0) == 5);
        test.assertTrue(sixth.get(0, 1) == 1);
        test.assertTrue(sixth.get(1, 0) == 4);
        test.assertTrue(sixth.get(1, 1) == 2);

        SquareMatrix<Integer> square = new SquareMatrix<>(operator, 2);

        square.set(0, 0, 1);
        square.set(0, 1, 0);
        square.set(1, 0, 0);
        square.set(1, 1, 1);

        assertTrue(square.isDiagonal());

        SquareMatrix<Integer> anotherSquare = new SquareMatrix<>(operator, 2);

        anotherSquare.set(0, 0, 1);
        anotherSquare.set(0, 1, 0);
        anotherSquare.set(1, 0, 2);
        anotherSquare.set(1, 1, 1);

        assertTrue(!anotherSquare.isDiagonal());

        ComplexOperator complexOperator = new ComplexOperator();
        Complex result = complexOperator.multiply(new Complex(1, -3), new Complex(2, 5));

        assertTrue(Double.compare(result.getReal(), 17) == 0);
        assertTrue(Double.compare(result.getImaginary(), -1) == 0);
    }

    static void assertTrue(boolean predicate) {
        if (!predicate) throw new RuntimeException("Assertion failure");
    }
}

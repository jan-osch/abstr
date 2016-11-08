package generyki.cw_3_4;

public class SquareMatrix<A> extends Matrix<A> {

    public SquareMatrix(Operator<A> operator, int numberOfRows) {
        super(operator, numberOfRows, numberOfRows);
    }

    public boolean isDiagonal() {
        for (int i = 0; i < this.getNumberOfColumns(); i++) {
            for (int j = 0; j < this.getNumberOfRows(); j++) {

                boolean isNotOnDiagonal = i != j;
                if (isNotOnDiagonal && !this.operator.isZero(this.get(i, j))) {
                    return false;
                }
            }
        }

        return true;
    }
}

package generyki.cw_3_4;

import java.util.ArrayList;

public class Matrix<A> {
    private ArrayList<ArrayList<A>> rows;
    protected Operator<A> operator;

    private int numberOfColumns;
    private int numberOfRows;

    public Matrix(Operator<A> operator, int numberOfRows, int numberOfColumns) {
        this.operator = operator;
        this.numberOfColumns = numberOfColumns;
        this.numberOfRows = numberOfRows;

        this.rows = this.buildArrays(this.numberOfRows, this.numberOfColumns);
    }

    private ArrayList<ArrayList<A>> buildArrays(int numberOfRows, int numberOfColumns) {
        ArrayList<ArrayList<A>> rows = new ArrayList<>();

        for (int i = 0; i < numberOfRows; i++) {
            rows.add(new ArrayList<A>(numberOfColumns));
        }

        return rows;
    }


    public void set(int row, int column, A element) {
        this.rows.get(row).add(column, element);
    }


    public A get(int row, int column) {
        return this.rows.get(row).get(column);
    }


    public Matrix<A> add(Matrix<A> other) {
        this.validateCanAdd(other);

        Matrix<A> result = new Matrix<A>(this.operator, this.numberOfRows, this.numberOfColumns);

        for (int i = 0; i < this.numberOfRows; i++) {
            for (int j = 0; j < this.numberOfColumns; j++) {
                result.set(i, j, this.operator.add(this.get(i, j), ((other.get(i, j)))));
            }
        }

        return result;
    }

    public Matrix<A> multiply(Matrix<A> other) {
        this.validateCanMultiply(other);

        Matrix<A> result = new Matrix<A>(this.operator, this.numberOfRows, other.getNumberOfColumns());

        for (int resultRow = 0; resultRow < result.numberOfRows; resultRow++) {
            for (int resultColumn = 0; resultColumn < result.numberOfColumns; resultColumn++) {
                result.set(resultRow, resultColumn, multiplyCell(other, resultRow, resultColumn));
            }
        }

        return result;
    }

    private A multiplyCell(Matrix<A> other, int resultRow, int resultColumn) {
        A partial = this.operator.multiply(this.get(resultRow, 0), other.get(0, resultColumn));

        for (int common = 1; common < this.numberOfColumns; common++) {
            A currentValue = this.operator.multiply(this.get(resultRow, common), other.get(common, resultColumn));

            partial = this.operator.add(partial, currentValue);
        }

        return partial;
    }

    private void validateCanMultiply(Matrix<A> other) {
        if (this.numberOfRows != other.getNumberOfColumns()) throw new RuntimeException("Invalid matrix size");
        if (this.numberOfColumns != other.getNumberOfRows()) throw new RuntimeException("Invalid matrix size");
    }

    private void validateCanAdd(Matrix<A> other) {
        if (this.numberOfColumns != other.getNumberOfColumns()) throw new RuntimeException("Invalid matrix size");
        if (this.numberOfRows != other.getNumberOfRows()) throw new RuntimeException("Invalid matrix size");
    }


    public int getNumberOfColumns() {
        return numberOfColumns;
    }

    public int getNumberOfRows() {
        return numberOfRows;
    }

    @Override
    public String toString() {
        StringBuilder builder = new StringBuilder();

        this.rows.forEach((row) -> {
            builder.append(row.toString());
            builder.append("\n");
        });

        return builder.toString();
    }
}

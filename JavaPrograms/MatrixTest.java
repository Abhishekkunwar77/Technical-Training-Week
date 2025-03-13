import java.util.Arrays;

class Matrix {
    private int rows;
    private int cols;
    private int[][] data;

    // Constructor
    public Matrix(int rows, int cols) {
        this.rows = rows;
        this.cols = cols;
        this.data = new int[rows][cols];
    }

    // Constructor to initialize a matrix with values
    public Matrix(int[][] data) {
        this.rows = data.length;
        this.cols = data[0].length;
        this.data = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            this.data[i] = Arrays.copyOf(data[i], cols);
        }
    }

    // Method to add two matrices
    public static Matrix add(Matrix m1, Matrix m2) {
        if (m1.rows != m2.rows || m1.cols != m2.cols) {
            throw new IllegalArgumentException("Matrices must have the same dimensions for addition.");
        }
        int[][] result = new int[m1.rows][m1.cols];
        for (int i = 0; i < m1.rows; i++) {
            for (int j = 0; j < m1.cols; j++) {
                result[i][j] = m1.data[i][j] + m2.data[i][j];
            }
        }
        return new Matrix(result);
    }

    // Method to multiply two matrices
    public static Matrix multiply(Matrix m1, Matrix m2) {
        if (m1.cols != m2.rows) {
            throw new IllegalArgumentException("Number of columns in first matrix must be equal to number of rows in second matrix.");
        }
        int[][] result = new int[m1.rows][m2.cols];
        for (int i = 0; i < m1.rows; i++) {
            for (int j = 0; j < m2.cols; j++) {
                for (int k = 0; k < m1.cols; k++) {
                    result[i][j] += m1.data[i][k] * m2.data[k][j];
                }
            }
        }
        return new Matrix(result);
    }

    // Method to add a scalar to a matrix
    public static Matrix add(Matrix m, int scalar) {
        int[][] result = new int[m.rows][m.cols];
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result[i][j] = m.data[i][j] + scalar;
            }
        }
        return new Matrix(result);
    }

    // Method to multiply a matrix by a scalar
    public static Matrix multiply(Matrix m, int scalar) {
        int[][] result = new int[m.rows][m.cols];
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result[i][j] = m.data[i][j] * scalar;
            }
        }
        return new Matrix(result);
    }

    // Method to transpose a matrix
    public static Matrix transpose(Matrix m) {
        int[][] result = new int[m.cols][m.rows];
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result[j][i] = m.data[i][j];
            }
        }
        return new Matrix(result);
    }

    // Method to print the matrix
    public void printMatrix() {
        for (int[] row : data) {
            System.out.println(Arrays.toString(row));
        }
        System.out.println();
    }
}

// Main class to test the Matrix operations
public class MatrixTest {
    public static void main(String[] args) {
        int[][] data1 = {{1, 2}, {3, 4}};
        int[][] data2 = {{5, 6}, {7, 8}};

        Matrix matrix1 = new Matrix(data1);
        Matrix matrix2 = new Matrix(data2);

        System.out.println("Matrix 1:");
        matrix1.printMatrix();

        System.out.println("Matrix 2:");
        matrix2.printMatrix();

        // Test addition
        Matrix sum = Matrix.add(matrix1, matrix2);
        System.out.println("Matrix Addition:");
        sum.printMatrix();

        // Test multiplication
        Matrix product = Matrix.multiply(matrix1, matrix2);
        System.out.println("Matrix Multiplication:");
        product.printMatrix();

        // Test scalar addition
        Matrix scalarSum = Matrix.add(matrix1, 2);
        System.out.println("Matrix + Scalar (2):");
        scalarSum.printMatrix();

        // Test scalar multiplication
        Matrix scalarProduct = Matrix.multiply(matrix1, 3);
        System.out.println("Matrix * Scalar (3):");
        scalarProduct.printMatrix();

        // Test transpose
        Matrix transposed = Matrix.transpose(matrix1);
        System.out.println("Transposed Matrix:");
        transposed.printMatrix();
    }
}
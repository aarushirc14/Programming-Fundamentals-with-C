//ENSF 337-Lab 9
//Filename: Matrix.cpp
//Completed by: Aarushi Roy Choudhury
#include "Matrix.h"

Matrix::Matrix(int r, int c) : rowsM(r), colsM(c) {

    matrixM = new double *[rowsM];

    assert(matrixM != nullptr);

    for (int i = 0; i < rowsM; i++) {
        matrixM[i] = new double[colsM];
        assert(matrixM[i] != nullptr);
    }
    sum_rowsM = new double[rowsM];
    assert(sum_rowsM != nullptr);

    sum_colsM = new double[colsM];
    assert(sum_colsM != nullptr);

}


Matrix::~Matrix() {
    destroy();
}

Matrix::Matrix(const Matrix &source) {

    copy(source);

}

Matrix &Matrix::operator=(const Matrix &rhs) {

    if (&rhs != this) {

        destroy();

        copy(rhs);

    }

    return *this;

}

double Matrix::get_sum_col(int i) const {
    assert(i >= 0 && i < colsM);
    return sum_colsM[i];

}

double Matrix::get_sum_row(int i) const {
    assert(i >= 0 && i < rowsM);
    return sum_rowsM[i];
}


void Matrix::sum_of_rows() const {

    for (int i = 0; i < rowsM; ++i) {
        double rowSum = 0.0;
        for (int j = 0; j < colsM; ++j) {
            // adding along the rows
            rowSum += matrixM[i][j];
        }
        sum_rowsM[i] = rowSum;
    }

}

void Matrix::sum_of_cols() const {
    
    for (int i = 0; i < colsM; ++i) {
        double colSum = 0.0;
        for (int j = 0; j < rowsM; ++j) {
            colSum += matrixM[j][i];
        }
        sum_colsM[i] = colSum;
    }
}

void Matrix::copy(const Matrix &source) {

    if (source.matrixM == nullptr) {

        matrixM = nullptr;
        sum_rowsM = nullptr;
        sum_colsM = nullptr;
        rowsM = 0;
        colsM = 0;
        return;
    }

    rowsM = source.rowsM;
    colsM = source.colsM;

    sum_rowsM = new double[rowsM];

    assert(sum_rowsM != nullptr);

    sum_colsM = new double[colsM];

    assert(sum_colsM != nullptr);

    matrixM = new double *[rowsM];

    assert(matrixM != nullptr);

    for (int i = 0; i < rowsM; i++) {

        matrixM[i] = new double[colsM];
        assert(matrixM[i] != nullptr);
        for (int j = 0; j < colsM; ++j) {
            matrixM[i][j] = source.matrixM[i][j];
        }

    }

    for (int i = 0; i < rowsM; ++i) {
        sum_rowsM[i] = source.sum_rowsM[i];
    }

    for (int i = 0; i < colsM; ++i) {
        sum_colsM[i] = source.sum_colsM[i];
    }



}

void Matrix::destroy() {

    delete[] sum_colsM;
    delete[] sum_rowsM;

    for (int i = 0; i < rowsM; i += 1) {
        delete[] matrixM[i];
    }
    delete[] matrixM;


}
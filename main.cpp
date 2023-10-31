#include "func.h"

int main() {
    
    int size = 3;

    int** intMatrix = new int* [size];
    for (int i = 0; i < size; ++i) {
        intMatrix[i] = new int[size];
    }

    double** doubleMatrix = new double* [size];
    for (int i = 0; i < size; ++i) {
        doubleMatrix[i] = new double[size];
    }

    char** charMatrix = new char* [size];
    for (int i = 0; i < size; ++i) {
        charMatrix[i] = new char[size];
    }

    
    initializeMatrix(intMatrix, size);
    initializeMatrix(doubleMatrix, size);
    initializeMatrix(charMatrix, size);

    
    cout << "Integer Matrix:" << endl;
    printMatrix(intMatrix, size);

    cout << "Double Matrix:" << endl;
    printMatrix(doubleMatrix, size);

    cout << "Char Matrix:" << endl;
    printMatrix(charMatrix, size);

    
    int intMin, intMax;
    double doubleMin, doubleMax;
    char charMin, charMax;

    findDiagonalMinMax(intMatrix, size, intMin, intMax);
    findDiagonalMinMax(doubleMatrix, size, doubleMin, doubleMax);
    findDiagonalMinMax(charMatrix, size, charMin, charMax);

    
    sortRows(intMatrix, size);
    sortRows(doubleMatrix, size);
    sortRows(charMatrix, size);

    
    for (int i = 0; i < size; ++i) {
        delete[] intMatrix[i];
        delete[] doubleMatrix[i];
        delete[] charMatrix[i];
    }
    delete[] intMatrix;
    delete[] doubleMatrix;
    delete[] charMatrix;

    return 0;
}
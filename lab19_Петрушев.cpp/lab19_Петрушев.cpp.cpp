// lab19_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

template <typename T, size_t rows, size_t cols>
void swapFirstAndLastColumns(T(&matrix)[rows][cols]) {
    for (size_t i = 0; i < rows; ++i) {
        T temp = matrix[i][0];
        matrix[i][0] = matrix[i][cols - 1];
        matrix[i][cols - 1] = temp;
    }
}

template <typename T, size_t rows, size_t cols>
void printMatrix(const T(&matrix)[rows][cols]) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const size_t rows = 3;
    const size_t cols = 4;
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    std::cout << "Оригінальна матриця:" << std::endl;
    printMatrix(matrix);

    swapFirstAndLastColumns(matrix);

    std::cout << "Матриця після зміни першого та останнього стовпця:" << std::endl;
    printMatrix(matrix);

    return 0;
}

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include "editor.h"


int main()
{
    int N, K, i, j, I;
    editor::matrix_editor matrix[10];
    std::cout << "input N (0 < N <= 10): ";
    std::cin >> N;
    std::cout << "input K (0 < K <= 10): ";
    std::cin >> K;
    std::cout << "\n";
    std::cout << "input quantity of iterations : ";
    std::cin >> I;
    for (i = 0; i < N; i++) {
        matrix[i].input(K);
        matrix[i].move(K,I);
    }



    for (i = 0; i < N; i++) {
        matrix[i].print(K);
    }
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
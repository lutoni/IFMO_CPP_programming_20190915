//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>

using namespace std;

int t01_quad() {
    int n = 0;
    cin >> n;
    int i = 1;
    int sqr_i = 1;
    while (sqr_i <= n)
    {
        cout << sqr_i;
        i++;
        sqr_i = i * i;
        cout << sqr_i << ' ';
    }


};
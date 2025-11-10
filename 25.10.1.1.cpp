#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    //задание 1
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
    //задание 2

    int num, n = 0;
    cout << "Введите число до котоого будут выведино простые числа: "; cin >> num;

    for (int i = 2; i < num; i++) {
        n = 0;
        for (int j = 2; j < i + 1; j++) {
            if (i % j == 0) {
                n++;
            }
        }
        if (n == 1) {
            cout << "просто число : " << i << endl;
        }

    }

    //задание 3


    const int rage = 4;
    const int cost = 3;
    int volk = 1;
    int print_number;

    for (int i = 0; i < rage; i++) {
        for (int j = 0; j < cost; j++) {
            print_number = ((rage * cost) - (cost * volk)) + 1;
            cout << print_number + j << " ";
        }
        cout << endl;
        volk++;
    }

    //задания 4

    const int zachemto = 4;
    int array[zachemto];
    for (int i = 0; i < zachemto; i++) {
        array[i] = i + 1;
    }

    for (int i = 0; i <= zachemto; i++) {
        int b = 0;
        b = array[i];
        array[i] = array[i + 1];
        array[i + 1] = b;
        for (int j = 0; j < i; j++) {
            b = array[j];
            array[j] = array[j + 1];
            array[j + 1] = b;
        }
        if (i == 0) {
            for (int el = 0; el < zachemto; el++) {
                cout << array[el] << " ";
            }
        }
        cout << endl;

    }
}
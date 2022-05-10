#include <iostream>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int check_switch() {//Проверка для ввода числа из 1 задания
    int k;
    cin >> k;
    while (cin.fail() || k < 1 || k >= 6) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "\nНеккоректное число, повторите ввод(Ввести число нужно от 1 до 5): ";
        cin >> k;
    }
    return k;
}

int check_figura() {//Проверка для ввода числа из 1 задания
    int k;
    cin >> k;
    while (cin.fail() ){
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "\nНеккоректное число, повторите ввод(Ввести нужно число больше 2): ";
        cin >> k;
    }
    return k;
}

int check_fib() {//Проверка для ввода числа из 1 задания
    int k;
    cin >> k;
    while (cin.fail() || k < 2) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "\nНеккоректное число, повторите ввод(Ввести нужно число больше 2): ";
        cin >> k;  
    }
    return k;
}

int check_pif() {//Проверка для ввода числа из 2 задания
    int k;
    cin >> k;
    while (cin.fail() || k < 2 ) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "\nНеккоректное число, повторите ввод(Ввести нужно число больше 2): ";
        cin >> k;
    }
    if (k < 6) {
        cout << "Пифагоровых троек нет :c" << endl;
    }
    return k;
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int pifagor(int pif,int m, int n) {
    if (m * m < pif) {
        if (m * m + n * n < pif) {
            int x = m * m - n * n;
            int y = 2 * n * m;
            int z = m * m + n * n;
            cout << x << " " << y << " " << z << endl;
        }
    }
    else {
        return 0;
    }
    return pifagor(pif, m+1, n+1);
}

int piramidka(int tr) {
    for (int i = 0; i < tr;i++) {
        cout << "*";
    }
    if (tr == 0) {
        return 0;
    }
    cout << endl;
    return piramidka(tr - 1);
}

void out_line(unsigned int count, unsigned int max_count){
        cout<< setw(max_count - count) << setfill(' ') << "";
        for (unsigned int i = 0; i < count; ++i)
            cout << "* ";
        cout << endl;
 }

void out_stars(unsigned int count, unsigned int max_count){
        out_line(count, max_count);
        if (count != max_count){
            out_stars(count + 1, max_count);
            out_line(count, max_count);
        }
}

void out_stars_s(unsigned int max_stars){
    if (max_stars != 0)
        out_stars(0, max_stars);
}

int main() {
    setlocale(LC_ALL, "RUS");
    while (1) {
        cout << "Введите:"<<endl<<"1-Число Фибоначчи;"<<endl<<"2-Пифигоровы тройки;"<<endl<<"3-Нарисовать треугольник;"<<endl<<"4-Нарисовать ромб;"<<endl<<"5-Выход;" << endl;
        int d = check_switch();
        switch (d) {
        case(1):
        {
            cout << "Введите число, чтобы найти значение Фибоначчи: " << endl;
            int num = check_fib();
            int f = fib(num);
            cout << "Число Фибаначи: " << f << endl;
            break;
        }
        case(2):
        {
            int m = 2;
            int n = 1;
            cout << "Введите максимальное число Пифагоровых троек: " << endl;
            int pif = check_pif();
            pifagor(pif, m, n);
            break;
        }
        case(3):
        {
            cout << "Введите размер треугольника: " << endl;
            int tr = check_figura();
            piramidka(tr);
            break;
        }
        case(4):
        {
            cout << "Введите размер ромба: " << endl;
            int romb = check_figura();
            out_stars_s(romb);
            break;
        }
        case(5):
        {
            return 0;
        }
        } 
    } 
}

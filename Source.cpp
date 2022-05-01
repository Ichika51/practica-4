#include <iostream>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

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
    while (cin.fail() || k <= 2) {
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
    return k;
}

int fib(int n) {//1 задание
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int pifagor(int pif){

    int a2 = pif;
        
    for (int x = 1; x < a2; x++){
        for (int y = 1; y <a2; y++){
            for (int z = 1; z < a2; z++){
                if (x * x + y * y == z * z) {
                    return pifagor(pif - 1);
                    cout << "{ " << x << ";" << y << ";" << z << "}" << std::endl;
                }
            }
        }
    }
}

int pifagor_test(int pif) {

    int a2 = pif;



    for (int x = 1; x < a2; x++) {
        for (int y = 1; y < a2; y++) {
            for (int z = 1; z < a2; z++) {
                if (x * x + y * y == z * z) {
                    return pifagor(pif - 1);
                    cout << "{ " << x << ";" << y << ";" << z << "}" << std::endl;
                }
            }
        }
    }
}

//int pifagor_recursiya(int pif) {
//    clock_t t0 = clock();
//    int i = 0;
//    for (int z = 1;z<pif ; ++z)
//        for (int x = 1; x <= z; ++x)
//            for (int y = x; y <= z; ++y)
//                if (x * x + y * y == z * z) {
//                    printf("(%i,%i,%i)\n", x, y, z);
//                    if (++i == 100)
//                        break;
//                        goto done;
//                }
//done:
//
//    clock_t t1 = clock();
//    printf("%ims\n", (int)(t1 - t0) * 1000 / CLOCKS_PER_SEC);
//    return 0;
//}

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

void out_stars(unsigned int max_stars){
    if (max_stars != 0)
        out_stars(0, max_stars);
}

int main() {
    setlocale(LC_ALL, "RUS");
    
    /*2 ЗАДАНИЕ*/
    cout << "Введите максимальное число Пифагоровых троек: " << endl;
    int pif = check_pif();
    //pifagor_recursiya(pif);
    pifagor(pif);

    /*1 ЗАДАНИЕ*/
    //cout << "Введите число для задания 1: " << endl;
    //int n=check_fib();
    //int f = fib(n);
    //cout << "Число Фибаначи для задания 1: " << f << endl;

    /*3 ЗАДАНИЕ*/
    //cout << "Введите размер треугольника: " << endl;
    //int tr = check_figura();
    //piramidka(tr);
    //cout << "Введите размер ромба: " << endl;
    //int romb = check_figura();
    //out_stars(romb);
    return 0;
}

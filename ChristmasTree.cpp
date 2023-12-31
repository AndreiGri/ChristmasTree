﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 02");

    cout << endl;

    int a;                                                              // Переменная для записи высоты ёлочки
    int b = 1;                                                          // Переменная определяющая макушку ёлочки

    stop:                                                               // Метка goto

    cout << " Введите высоту ёлочки: ";                                 // Запрос высоты ёлочки
    cin >> a;                                                           // Запись в переменную высоты ёлочки

    if (a < 2) {                                                        // Если введено меньше 2 
        cout << endl;
        cout << " Для того что бы получилась хотя бы\n"                 // Выводим сообщение о недопустимо маленькой ёлочке
            " минимальная ёлочка нужно ввести не менее двух!" << endl;
        cout << endl;
        goto stop;                                                      // и оператором goto возвращаем выполнению програмы к метке goto
    }

    for (int row = 0; row < a; row++, b += 2) {                         // Цикл for действует на протяжении всей высоты ёлочки
        cout << " ";
        for (int col = a * 2 - 1; col > 0; col--) {                     // Цикл for выводит символы в колонках a * 2 -1 раз  
            if (col > a - 1 - b / 2 && col < a + 1 + b / 2) {           // если столбец больше a - 1 - b / 2 и a + 1 + b / 2 
                cout << '#';                                            // выводит '#'
            }
            else {                                                      // иначе
                cout << " ";                                            // выводит пробел
            }
        }
        cout << endl;                                                   // После вложенного цикла переходим на новую строку
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}
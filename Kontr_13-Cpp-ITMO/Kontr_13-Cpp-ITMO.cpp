// Kontr_13-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
# include <windows.h>
#pragma once /* Защита от двойного подключения заголовочного файла */
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;


int main() {
    // вектор оценок и добавление произвольныч оценкок
    setlocale(LC_CTYPE, "rus");

    vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    bool b = true;


    human* human1;
    // Конкреьный студент - объект класса student
    student stud("Петров", "Иван", "Алексеевич", scores);
    human1 = &stud;
    cout << human1->get_full_name() << endl;


    unsigned int teacher_work_time = 40;

    teacher tch("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    human1 = &tch;
    cout << human1->get_full_name() << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


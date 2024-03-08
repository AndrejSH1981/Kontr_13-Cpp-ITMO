#pragma once
#include "human.h"
#include <string>
# include <windows.h>

// teacher.h
//  Класс teacher производный от класса human
using namespace std;

class teacher : public human {
    // Конструктор класса teacher
public:

    teacher(string last_name, 
        string name, 
        string second_name, 
        unsigned int work_time
    )
        : human(last_name, name, second_name, get_work_time(work_time)) {
       // this->work_time = work_time;
    }

    // Получение количества учебных часов
    string get_work_time(unsigned int work_time) {
        this->work_time = work_time;
        string str = "\nколичество часов = " + to_string(this->work_time) + ";";
        return str;
    }

private:
    // Учебные часы
    unsigned int work_time;
};

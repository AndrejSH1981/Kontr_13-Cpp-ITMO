#pragma once
#include "human.h"
#include <string>

// teacher.h
//  Класс teacher производный от класса human
using namespace std;

class teacher : public human {
    // Конструктор класса teacher
public:
    teacher(
        string last_name,
        string name,
        string second_name,

        // Количество учебных часов за семестр у преподавателя
        unsigned int work_time
    )
        : human(last_name, name, second_name) {
        this->work_time = work_time;
    }

    // Получение количества учебных часов
    virtual unsigned int get_work_time() {
        return this->work_time;
    }
private:
    // Учебные часы
    unsigned int work_time;
};
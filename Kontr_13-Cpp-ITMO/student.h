#pragma once
#include "human.h"
#include <string>
#include <vector>
# include <windows.h>

using namespace std;

// student.h
// Новый класс student, который наследник класса human.
class student : public human {


public:
    //string aaa = get_average_score();
    // Конструктор класса Student
    student(
        string last_name,
        string name,
        string second_name,
        vector<int> scores
    )
        : human(last_name, name, second_name, get_average_score(scores)) {
       //this->scores = scores;
       
    }

    // Получение среднего балла студента
    string get_average_score(vector<int> scores) {
        this->scores = scores;
        // Общее количество оценок
        unsigned int count_scores = this->scores.size();
        // Сумма всех оценок студента
        unsigned int sum_scores = 0;
        // Средний балл
        float average_score;

        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }
        average_score = (float)sum_scores / (float)count_scores;
        string str = "\ncредний балл = " + to_string(average_score) + ";";
        return str;
    }

private:
    // Оценки студента
    vector<int> scores;
};

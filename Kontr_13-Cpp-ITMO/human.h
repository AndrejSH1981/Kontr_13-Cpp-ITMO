#pragma once
#include <string>
#include <sstream>
#pragma once /* Защита от двойного подключения заголовочного файла */
// файл human.h.

using namespace std;

class human {
public:
    // Конструктор класса human
    human(string last_name, string name, string second_name, string a) {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
        this->a2 = a;
    }

    // Получение ФИО человека
    virtual string get_full_name() {
        ostringstream full_name;
        full_name << this->last_name << " " << this->name << " "
            << this->second_name << ", " << this -> a2;
        return full_name.str();
    }

private:
    string name;  // имя
    string last_name;  // фамилия
    string second_name; // отчество
    string a2; // переменная для возврата значения
 
};

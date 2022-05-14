#include "Menu.h"
class Authorization {
    string loginEmployee = "Сотрудник", passwordEmployee = "Сотрудник";
    string loginStudent = "Студент", passwordStudent = "Студент";
public:
    void Authorizate(string log, string password)
    {
        if (loginEmployee == log && passwordEmployee == password)
        {
            cout << "Вход-сотрудник." << endl;
            system("pause");
            EmployeeMenu(new University<Student>());
        }
        else if (loginStudent == log && passwordStudent == password)
        {
            cout << "Вход-студент." << endl;
            system("pause");
            StudentMenu(new University<Student>());
        }
        else
        {
            cout << "Ошибка входа в систему." << endl;
        }
    }
};
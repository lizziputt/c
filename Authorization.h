#include "Menu.h"
class Authorization {
    string loginEmployee = "���������", passwordEmployee = "���������";
    string loginStudent = "�������", passwordStudent = "�������";
public:
    void Authorizate(string log, string password)
    {
        if (loginEmployee == log && passwordEmployee == password)
        {
            cout << "����-���������." << endl;
            system("pause");
            EmployeeMenu(new University<Student>());
        }
        else if (loginStudent == log && passwordStudent == password)
        {
            cout << "����-�������." << endl;
            system("pause");
            StudentMenu(new University<Student>());
        }
        else
        {
            cout << "������ ����� � �������." << endl;
        }
    }
};
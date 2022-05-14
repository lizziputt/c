#include "University.h"
void StudentMenu(University<Student>* Stud)
{
    while (true)
    {
        system("cls");
        cout << "1 - ����� ��������\n" << "2 - ����������� ���������� � ���������\n" << "3 - ���������� �� �������� �����\n" << "4 - ���������� �� ������ ������\n" << "5 - �����\n";
        int action;
        cin >> action;
        if (action == 1)
        {
            string surname;
            cout << "�������:";
            cin >> surname;
            Stud->findStudent(surname);
            system("pause");
        }

        else if (action == 2)
        {
            Stud->showStudents();
            system("pause");
        }
        else if (action == 3)
        {
            Stud->sortByBall();
            system("pause");
        }
        else if (action == 4)
        {
            int from, to;
            cout << "��:";
            cin >> from;
            cout << "��:";
            cin >> to;
            Stud->groupFilter(from, to);
            system("pause");
        }
        else if (action == 5)
        {
            exit(0);
        }
    }
}

void EmployeeMenu(University<Student>* Stud)
{
    while (true)
    {
        system("cls");
        cout << "1 - �������� ��������\n" << "2 - ������������� ���������� � ��������\n" << "3 - ������� ��������\n" << "4 - ����� ��������\n" << "5 - �����������  ���������� � ���������\n" <<
            "6 - ����������� �� �������� �����\n" << "7 - ����������� �� ������ ������\n" << "8 - �����\n";
        int action;
        cin >> action;
        system("cls");
        if (action == 1)
            Stud->createStudent();
        else if (action == 2)
        {
            string surname;
            cout << "������� ��� ��������������:";
            cin >> surname;
            Stud->editStudent(surname);
        }
        else if (action == 3)
        {
            cout << "������� ��� ��������: ";
            string surname;
            cin >> surname;
            Stud->deleteStudent(surname);
        }
        else if (action == 4)
        {
            string surname;
            cout << "������� ��� ������:";
            cin >> surname;
            Stud->findStudent(surname);
            system("pause");
        }

        else if (action == 5)
        {
            Stud->showStudents();
            system("pause");
        }
        else if (action == 6)
        {
            Stud->sortByBall();
            system("pause");
        }
        else if (action == 7)
        {
            int from, to;
            cout << "��:";
            cin >> from;
            cout << "��:";
            cin >> to;
            Stud->groupFilter(from, to);
            system("pause");
        }
        else if (action == 8)
        {
            exit(0);
        }
    }
}
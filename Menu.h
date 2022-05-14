#include "University.h"
void StudentMenu(University<Student>* Stud)
{
    while (true)
    {
        system("cls");
        cout << "1 - Поиск студента\n" << "2 - Просмотреть информацию о студентах\n" << "3 - Сортировка по среднему баллу\n" << "4 - Фильтрация по номеру группы\n" << "5 - Выйти\n";
        int action;
        cin >> action;
        if (action == 1)
        {
            string surname;
            cout << "Фамилия:";
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
            cout << "От:";
            cin >> from;
            cout << "До:";
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
        cout << "1 - Добавить студента\n" << "2 - Редактировать информацию о студенте\n" << "3 - Удалить студента\n" << "4 - Найти студента\n" << "5 - Просмотреть  информацию о студентах\n" <<
            "6 - Сортировать по среднему баллу\n" << "7 - Фильтровать по номеру группы\n" << "8 - Выйти\n";
        int action;
        cin >> action;
        system("cls");
        if (action == 1)
            Stud->createStudent();
        else if (action == 2)
        {
            string surname;
            cout << "Фамилия для редактирования:";
            cin >> surname;
            Stud->editStudent(surname);
        }
        else if (action == 3)
        {
            cout << "Фамилия для удаления: ";
            string surname;
            cin >> surname;
            Stud->deleteStudent(surname);
        }
        else if (action == 4)
        {
            string surname;
            cout << "Фамилия для поиска:";
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
            cout << "От:";
            cin >> from;
            cout << "До:";
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
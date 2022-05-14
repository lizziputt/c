#include "Student.h"

template<class T> class University
{
    vector<T*> students;
    const char* studentsFileName = "students.txt";

    void saveStudents()
    {
        ofstream os;
        os.open(studentsFileName, ios::trunc);
        os << students.size() << "\n";
        for (auto student : students)
            student->saveData(os);
    }

    void readStudents()
    {
        ifstream is;
        is.open(studentsFileName);
        if (!is.is_open())
        {
            is.close();
            ofstream os;
            os.open(studentsFileName, ios::trunc);
            os << 0 << "\n";
            os.close();
            return;
        }
        int n;
        is >> n;
        students.clear();
        for (int i = 0; i < n; i++)
        {
            students.push_back(new T());
            students[i]->readData(is);
        }
    }

public:
    University()
    {
        readStudents();
    }
    void createStudent()
    {
        T* Stu = new T();
        Stu->inputData();
        students.push_back(Stu);
        saveStudents();
    }

    void deleteStudent(string surname)
    {
        T* studDelete = nullptr;
        for (auto student : students)
            if (student->getSurname() == surname)
            {
                studDelete = student;
                break;
            }
        try
        {
            if (!studDelete)
                throw 1;
        }
        catch (int x)
        {
            cout << "Ошибка!!!\n";
            system("pause");
            return;
        }
        students.erase(find(students.begin(), students.end(), studDelete));
        saveStudents();
    }

    void findStudent(string surname)
    {
        outputItem();
        for (auto student : students)
            if (student->getSurname() == surname)
                student->outputData();
    }
    void editStudent(string surname)
    {
        findStudent(surname);
        cout << " 1 - Изменить фамилию\n" << " 2 - Изменить имя\n" << " 3 - Изменить отчество\n" << " 4 - Изменить год рождения \n"
            << " 5 - Изменить балл \n" << " 6 - Изменить номер группы\n" << " 7 - Изменить стипендию \n";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setSurname();
                    saveStudents();
                }
        }
        else if (choice == 2)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setName();
                    saveStudents();
                }
        }
        else if (choice == 3)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setPatronymic();
                    saveStudents();
                }
        }
        else if (choice == 4)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setYear();
                    saveStudents();
                }
        }
        else if (choice == 5)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setBall();
                    saveStudents();
                }
        }
        else if (choice == 6)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setGroup();
                    saveStudents();
                }
        }
        else if (choice == 7)
        {
            for (auto student : students)
                if (student->getSurname() == surname)
                {
                    student->setGrant();
                    saveStudents();
                }
        }


    }
    void groupFilter(int from, int to)
    {
        outputItem();
        for (auto student : students)
            if (student->getGroup() >= from && student->getGroup() <= to)
                student->outputData();
    }
    void showStudents()
    {
        outputItem();
        for (auto student : students)
            student->outputData();
    }

    void sortByBall()
    {
        readStudents();
        sort(students.begin(), students.end(), compare);
        showStudents();
    }

    static bool compare(T* left, T* right)
    {
        return *left < *right;
    }
    void outputItem()
    {
        cout << setw(17) << "Фамилия|" << setw(17) << "Имя|" << setw(17) << "Отчество|" << setw(10) << "Год рождения|" << setw(10) << "Номер группы|" << setw(10) << "Средний балл|" << setw(10) << "Стипендия|\n";
        cout << "----------------------------------------------------------------------------------------------------\n";
    }
};

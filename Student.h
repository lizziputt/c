#include "Man.h"
class Student : public Man
{
protected:
    double ball;
    double grant;
    double group;
    int mingrant = 98;
public:

    Student() :Man() {}


    Student(string _surname, string _name, string _patronymic, int _year, int _group, double _ball, double _grant) : Man(_surname, _name, _patronymic, _year)
    {
        group = _group;
        ball = _ball;
        grant = _grant;
    }

    virtual void setBall() override
    {
        do {
            cout << "Средний балл: ";
            cin >> ball;
        } while (ball < 0 | ball>10);
    }

    virtual double getBall() override
    {
        return ball;
    }

    virtual void setGroup() override
    {
        do {
            cout << "Номер группы: ";
            cin >> group;
        } while (group <= 0);

    }

    virtual int getGroup() override
    {
        return group;
    }

    virtual void setGrant()override
    {
        if (ball < 5.0) {
            grant = 0;
        }
        else if (ball >= 5.0 && ball < 6.0) {
            grant = mingrant;
        }
        else if (ball >= 6.0 && ball < 8.0) {
            grant = mingrant * 1.2;
        }
        else if (ball >= 8.0 && ball < 9.0) {
            grant = mingrant * 1.4;
        }
        else if (ball >= 9.0) {
            grant = mingrant * 1.6;
        }
    }

    virtual double getGrant() override
    {
        return grant;
    }

    void saveData(ostream& os)
    {
        os << surname << "\n";
        os << name << "\n";
        os << patronymic << "\n";
        os << year << "\n";
        os << group << "\n";
        os << ball << "\n";
        os << grant << "\n";
    }

    void readData(istream& is)
    {
        is >> surname;
        is >> name;
        is >> patronymic;
        is >> year;
        is >> group;
        is >> ball;
        is >> grant;

    }

    void inputData()
    {
        setSurname();
        setName();
        setPatronymic();
        setYear();
        setGroup();
        setBall();
        setGrant();
    }

    void outputData()
    {
        cout << setw(16) << surname << "|" << setw(16) << name << "|" << setw(16) << patronymic << "|" << setw(12) << year << "|" << setw(12) << group << "|" << setw(12) << ball << "|" << setw(9) << grant << "|\n";
        cout << "----------------------------------------------------------------------------------------------------\n";
    }
};

bool operator < (Student& left, Student& right)
{
    return left.getBall() < right.getBall();
}




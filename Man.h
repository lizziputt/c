#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

class Man
{
protected:
    string surname;
    string name;
    string patronymic;
    int year;
public:
    Man()
    {}
    Man(string _surname, string _name, string _patronymic, int _year)
    {
        surname = _surname;
        name = _name;
        patronymic = _patronymic;
        year = _year;
    }

    void setSurname()
    {
        cout << "Фамилия: ";
        cin >> surname;
    }

    string getSurname() const
    {
        return surname;
    }

    void setName()
    {
        cout << "Имя: ";
        cin >> name;
    }

    string getName()
    {
        return name;
    }

    void setPatronymic()
    {
        cout << "Укажите отчество: ";
        cin >> patronymic;
    }

    string getPatronymic()
    {
        return patronymic;
    }

    void setYear()
    {
        while (year <= 0 | year > 2022) {
            cout << "Год рождения: ";
            cin >> year;
        }
    }

    int getYear()
    {
        return year;
    }
    virtual void setBall() = 0;
    virtual double getBall() = 0;
    virtual void setGrant() = 0;
    virtual double getGrant() = 0;
    virtual void setGroup() = 0;
    virtual int getGroup() = 0;


};


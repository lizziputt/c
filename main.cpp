#include <iostream>
#include <windows.h>
#include "Authorization.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string log;
    char pass[100] = { 0 };
    cout << "Логин: ";
    cin >> log;
    cout << "Пароль: ";
    int i = 0;
    while (i < 99)
    {
        char c = _getch();
        if (c == 13)
            break;
        pass[i++] = c;
        cout << "*";
    }
    cout << endl;
    Authorization user;
    user.Authorizate(log, pass);
    return 0;
};

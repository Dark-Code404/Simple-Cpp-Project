#include <bits/stdc++.h>
#include "Banking.cpp"
using namespace std;

int main()
{

    bank obj;

    char c;

    int choice;
    cout << endl;
    do
    {

        cout << " ______________________________________________________________________________________________________" << endl;
        cout << "|                                                                                                      |" << endl;
        cout << "|                                                                                                      |" << endl;
        cout << "|                              Banking Management System.                                              |" << endl;
        cout << "|                                                                                                      |" << endl;
        cout << "|______________________________________________________________________________________________________|" << endl;
        cout <<endl;
        cout << "                       1. Open account" << endl;
        cout << "                       2. Deposite balance" << endl;
        cout << "                       3. Withdraw balance" << endl;
        cout << "                       4. Account details" << endl;

        cout << endl;
        cout << "Enter the choice" << endl;
        cin >> choice;

        cout << endl;
        system("cls");

        switch (choice)
        {
        case 1:
            cout << " ______________________________________________________________________________________________" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|                                      Account opening.                                        |" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|______________________________________________________________________________________________|" << endl;

            obj.open();

            

            break;

        case 2:

            cout << " ______________________________________________________________________________________________" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|                                  Cash Deposite.                                              |" << endl;
            cout << "|                                                                                              |" << endl;
            cout << "|______________________________________________________________________________________________|" << endl;

            obj.deposite();

            break;

        case 3:
            cout << " _______________________________________________________________________________________________" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|                                   Cash Withdraw.                                              |" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|_______________________________________________________________________________________________|" << endl;

            obj.withdraw();

            break;

        case 4:
            cout << " _______________________________________________________________________________________________" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|                                 Account details.                                              |" << endl;
            cout << "|                                                                                               |" << endl;
            cout << "|_______________________________________________________________________________________________|" << endl;

            obj.show();

            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }

        cout << "Do you want to continue y/n" << endl;
        cin >> c;

    } while (c == 'y' || c == 'Y');
}
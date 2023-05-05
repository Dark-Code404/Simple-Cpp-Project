
#include <cstdlib>
#include <ctime>
#include "banking.h"
using namespace std;

void bank::open()
{

    cout << "How many account to open ? " << endl

         << "-> ";

    cin >> ch;

    if (total == 0)

    {

        total = ch + total;

        for (int i = 0; i < ch; i++)

        {
            cout << "\n                                    ==> Enter the Data of student " << i + 1 << endl
                 << endl;

            cout << "Enter your full name " << endl;

            getline(cin >> ws, name[i]);
            cout << endl;

            cout << "Enter your contact number " << endl;

            getline(cin >> ws, cont[i]);
            cout << endl;
            cout << "Enter your address " << endl;

            getline(cin >> ws, add[i]);
            cout << endl;
            cout << "Enter your email address " << endl;

            getline(cin >> ws, email[i]);
            cout << endl;

            cout<<"                                     Account has been created"<<endl;
            cout <<endl;
            cout <<endl;
        }
    }

    else

    {
       

        for (int i = total; i < ch + total; i++)

        {

            cout << "\n                                ==> Enter the Account " << i + 1 << endl
                 << endl;
            cout << "Enter your full name " << endl;

            getline(cin >> ws, name[i]);
            cout << endl;

            cout << "Enter your contact number " << endl;

            getline(cin >> ws, cont[i]);
            cout << endl;
            cout << "Enter your address " << endl;

            getline(cin >> ws, add[i]);
            cout << endl;
            cout << "Enter your email address " << endl;

            getline(cin >> ws, email[i]);
            cout << endl;
               cout<<"                                 Account has been created"<<endl;
            cout <<endl;
            cout <<endl;
        }
        total = ch + total;
    }
}

void bank::show()
{
    if (total == 0)

    {

        cout << "No data is entered to show. " << endl;
    }
    else
    {

        for (int i = 0; i < total; i++)

        {

            cout << "\n                                     ==> Data of Account " << i + 1 << endl
                 << endl;

            cout << "Your name is : " << name[i] << endl;
            cout << endl;

            cout << "Your address is :  " << add[i] << endl;
            cout << endl;

            cout << "Enter your email address : " << email[i] << endl;
            cout << endl;

            cout << "Your total balance is Rs : " << amt[i] << endl;

            cout << endl;
            cout << endl;
        }
    }
}

void bank::deposite()
{
    if (total == 0)

    {

        cout << "No data is entered to show. " << endl;
    }
    else
    {
      

        for (int i = 0; i < total; i++)
        {
           
            
                cout << "\n                                     ==> Deposite for account " << i + 1 << endl
                     << endl;

                cout << "Enter the amount to deposite " << endl
                     << "Rs ";
                cin >> depo[i];
                amt[i] = amt[i] + depo[i];
                cout << "Your deposited amount is Rs : " << depo[i];
                cout << endl;
                cout << endl;
            
        }
    }
}

void bank::withdraw()
{

    double with[50];

    if (total == 0)

    {
        cout << "No data is entered to show. " << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\n                                     ==> Withdraw for account " << i + 1 << endl
                 << endl;

            cout << "Enter the amount to withdraw " << endl
                 << "Rs ";
            cin >> with[i];

            if (amt[i] >= with[i])
            {

                amt[i] = amt[i] - with[i];
                cout << "Your withdraw amount is Rs :" << with[i];
            }
            else
            {
                cout << "Not enough balance " << endl;
            }
            cout << endl;
            cout << endl;
        }
    }
}

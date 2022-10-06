#include <iostream>
#include "electronics.h"
#include<string>
using namespace std;


int main()
{
    Electronics calculator("C8000", 111);
    Monitor Samsung("Samsung", 222);
    PC PK("Ryzen", 333);
    Notebook Acer("Acer", 444);
    calculator.Show();
    Samsung.Show();
    PK.Show();
    Acer.Show();

    Electronics shop[4]{};
    shop[0] = calculator;
    shop[1] = Samsung;
    shop[2] = PK;
    shop[3] = Acer;




    bool open = true;
    while (open)
    {
        cout << "1 - Electronics , 2 - Monitor, 3 - PK, 4 - Notebook, 0 for Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            shop[0].Show();
            break;

        case 2:
            Samsung.Show();
            break;

        case 3:
           PK.Show();
            break;

        case 4:
            Acer.Show();
            break;
        case 0:
            open = false;
            break;

        default:
            break;




            return 0;
        }
    }
}

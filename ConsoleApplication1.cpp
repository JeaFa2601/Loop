// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int b;
    cout << " Nhap so can loop" << "\n";
    cin >> b;
    for (int i = 0; i <= b; i++) {
        for (int z = 0; z <= i; z++) {
            cout << "*";
        }
        cout << "\n";

    }
    for (int i = 0; i <= b; i++) {
        for (int z = b; z >= i; z--) {
            cout << "*";
        }
        cout << "\n";

    }

}
  
        


// hw3_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int num;
    cout << "Enter a strictly positive integer: ";
    cin >>  num;
    unsigned int x = num;
    if (x == 0) {
        cout << "This number is not STRICTLY positive." << endl;
        return 0;
    }

    int power = 0;
    while (pow(2, power) <= num) {
        power++;
    }
    power--;
    int bNum;
    string str;
    while (power >= 0) {
        int pNum = pow(2, power);
        bNum = num / pNum; 
        if (bNum == 1) {
            str.insert(str.length(), 1, '1');

        }
        else if (bNum ==  0) {
            str.insert(str.length(), 1, '0');

        }
       
        num = num%pNum;
        power--;
    }
    cout << "The binary representation of " << x << " is given by " << str << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

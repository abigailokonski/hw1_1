// hw2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    
    cout << "Give me a quadratic equation in the form" << endl
        << " [number]*x^2+[number]*x+[number]=0 " << endl
        << "and I'll try to help solve it for you. " << endl << endl;
    string s; cin >> s;
    int i = s.find("*x^2");
    double a = stod(s.substr(0, i));
    int j = s.rfind("*x");
    double b = stod(s.substr(i + 4, j-i-4));
    int p = s.find("=0");
    double c = stod(s.substr(j + 2, p - j - 2));
    double answer1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double answer2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    cout <<"-b plus square root of the discriminant) / 2a is " << answer1 << endl;
    cout << "-b minus square root of the discriminant) / 2a is " << answer2 << endl;

   
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

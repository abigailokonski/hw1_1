// hw1_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Abigail Okonski

#include <iostream>
using namespace std;

int main()
{
	int end, start;
	cout << "Please enter first time: ";
	cin >> start;
	cout << "Please enter second time: ";
	cin >> end;

	int x = bool(end<start); //is end next day? 1= true
	int difference = end - start + x*2400; //if end next day add 24 hours

	int hrs = difference / 100;
	int y = bool(difference % 100 > 60); 
	int min = difference % 100 - y*40; // only 60 min possible
	cout << hrs << " hours "<<min<< " minutes"<< endl;
	
	//int mintest = (start / 100) * 60 + start % 100;
	//cout << mintest;

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

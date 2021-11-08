// hw1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Abigail Okonski

#include <iostream>
using namespace std;

int main()
{

	unsigned int weight;
	cout << "How much will you lift (lbs): ";
	cin >> weight;
	weight -= 45; //without bar
	double extraweightvar = weight / 2.0; //if any half weights needed
	weight = weight / 2;//weight of one side


	int numof45 = weight / 45;
	weight -= numof45*45;
	cout <<"# of 45 ib plates: "<< numof45 * 2 << endl;

	int numof25 = weight / 25;
	weight -= numof25 * 25;
	cout <<"# of 25 ib plates: "<< numof25 * 2 << endl;

	int numof10 = weight / 10;
	weight -= numof10 * 10;
	cout <<"# of 10 ib plates: "<< numof10 * 2 << endl;

	int numof5 = weight / 5;
	weight -= numof5 * 5;
	cout << "# of 5 ib plates: "<< numof5 * 2 << endl;

	int numof1 = weight / 1;
	weight -= numof1;
	cout <<"# of 1 ib plates: "<< numof1 * 2 << endl;

	extraweightvar -= (numof45 * 45 + numof25 * 25 + numof10 * 10 + numof5 * 5 + numof1);


	int numofhalf = extraweightvar*2;
	cout << "# of .5 ib plates: "<< numofhalf * 2 << endl;


	

	


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

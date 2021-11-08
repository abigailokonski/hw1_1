// hw3_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "How many terms shall I compute? " << endl;
	int N; cin >> N;
	cout << "The first " << N << " Fibonacci numbers are: " << endl;
	if (N == 0) {}
	else {
		int fibNum_nm1 = 0;
		int fibNum_n = 1;
		int fibNum = 1;
		cout << fibNum << ' ';
		for (int i = 1; i < N; i++) {
			fibNum = fibNum_nm1 + fibNum_n;
			cout << fibNum << ' ';
			fibNum_nm1 = fibNum_n;
			fibNum_n = fibNum;

		}
	}
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

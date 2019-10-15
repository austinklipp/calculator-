#include <iostream > 
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

int main()
{
	char input = 'x';
	double first_val, second_val;
	char operato;
	
	
	double total = 0.0;

	do {


		cin >> first_val >> operato >> second_val;

		switch (operato)
		{
		case '+':
		{

			total = first_val + second_val;
			cout << total << endl;

		}break;

		case '-':
		{

			total = first_val - second_val;
			cout << total << endl;
		}break;

		case '*':
		{

			total = first_val * second_val;
			cout << total << endl;

		}break;
		case '/':
		{

			total = first_val / second_val;
			cout << total << endl;
		}


		}
} while (operato != 'x') ;



		return 0;


	}
#include <iostream>

using namespace std;	

int main()
{
	double bmi, weight, height;
	char status;

	cout << "Welcome to BMI CALCULATOR\n";

	int exit = 0;

	while (exit == 0)
	{
		cout << "Enter your weight in kgs's: ";
		cin >> weight;
		cin.get();
		cout << "Enter your height in meters: ";
		cin >> height;
		cin.get();

		bmi = weight / (height * height);
		cout << "Your BMI is " << bmi << endl;

		cout << "Press q to quit, any other key to redo:" << endl;
		cin >> status;

		if(status == 'q' || status == 'Q')
		{ 
			exit = 1;
		}
	}

	return 0;
}

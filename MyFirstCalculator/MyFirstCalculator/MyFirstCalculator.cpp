#include <iostream>

using namespace std;

int main()
{
	int first_number, second_number, action;
	cout << "Hello! I'm calculator! Enter numbers:" << endl;
	cin >> first_number >> second_number;

	cout << "Enter a action:" << "\n\t1 - '+'" << "\n\t2 - '-'" << "\n\t3 - '*'" << "\n\t4 - '/'\n";
	cin >> action;

	switch (action)
	{
	case 1:
		cout << "Result: " << first_number + second_number << endl;
		break;
	case 2:
		cout << "Result: " << first_number - second_number << endl;
		break;
	case 3:
		cout << "Result: " << first_number * second_number << endl;
		break;
	case 4:
		cout << "Result: " << first_number / second_number << endl;
		break;
	default:
		cout << "Enter a valid number!" << endl;
		break;
	}
}
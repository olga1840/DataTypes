//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << true << endl;
	cout << false << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << 0 << "..." << UINT_MAX << endl;
	//float
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;

	//double
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	
	double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость чашки кофе: ";cin >> price_of_coffee;
	cout << "ВВедите количество чашек: ";cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "С Вас: " << total_price <<" $\n";
	//cout << price_of_coffee << endl;
}
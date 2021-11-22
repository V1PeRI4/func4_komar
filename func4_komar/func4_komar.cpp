#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int age;
	cout << "Введите свой возраст: ";
	cin >> age;
	age *= 12;
	cout << "Ваш возраст в месяцах: " << age << endl;
}


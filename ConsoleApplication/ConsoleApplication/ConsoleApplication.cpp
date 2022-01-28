
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int menu( )
{;
    
	cout<< "\n"
		<< "Выберите вариант\n" << endl;
	cout <<" 1 Задание\n"
		<< " 2 Задание\n"
		<< " 3 Задание\n"
		<< " 4 Задание\n"
		<< " 5 Задание\n"
		<< " 6 Задание\n"
		<< " 7 Задание\n" 
		<< " 8 Задание\n"
		<< " 9 Задание\n"
		<< " 10 Выход\n"

		<< endl;
	cout << ">>> ";
	
	return 0;
}
void pervoe()
{
	float a, b;
	cout << "Задание: Написать программу, вычисляющую произведение и деление числа." << endl;
	cout << "Введите числа" << endl;
	cin >> a >> b;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b << "\n" << endl;
	

}
void vtoroe()
{
	string a, b, c;
	cout << "Задание: Написать программу сложения 3 букв алфавита." << endl;
	cout << "Введите буквы" << endl;
	cin >> a >> b >> c;
	cout << "\n" << a + b + c << endl;
}
void tretye()
{
	int a, b;
	cout << "Задание: Найти целую часть и остаток при делении введенных с клавиатуры чисел." << endl;
	cout << "Введите числа" << endl;
	cin >> a >> b;
	cout << "Целые числа" << "\n" <<a/b<< endl;
	cout << "Остаток" << "\n" << a % b << endl;
}
void chetvertoe()
{
	int a, b, c;
	cout << "Задание: Написать программу, меняющую 2 числа местами." << endl;
	cout << "Введите числа" << endl;
	cin >> a >> b;
	cout << "a=" << a << " b=" << b << endl;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << " b=" << b << endl;

}
void pyatoe()
{
	int a, b, c;
	cout <<"Задание: Найдите максимум среди 3 чисел\n"
		<< "Введите 3 числа" << endl;
	cin >> a >> b >> c;
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) { 
		max = c;
	}

	cout << "Максимальное число : " << max << endl;
}
void shestoe()
{
	int a;
	cout << "Задание: Написать программу, вычисляющую корень от введенного числа." << endl;
	cout << "Введите число" << endl;
	cin >> a;
	cout << "Корень числа  " << a <<" равен " << sqrt(a) << endl;
}
void sedmoe()
{
	int a, b, c;
	cout << "Задание: Найдите минимум среди 3 чисел\n"
		<< "Введите 3 числа" << endl;
	cin >> a >> b >> c;
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}

	cout << "Минимальное число : " << min << endl;
}
void vosmoe() {
	cout << "Задание: Написать программу, вводящую слово, и меняющую у нее буквы местами (т.е. палиндром)" << "\n" << "Введите слово" << endl;
	char a,b;
	string str;
	cin >> str;
	 b= str[0];
	int len = str.length();
	for (int i = 0; i < len / 2; ++i) {
		
		a = str[i];
		str[i] = str[len - i];
		str[len - i] = a;
	}

	cout << str <<b<< endl;
	
}
void devatoe()
{
	int a, b, c,d, mesto;
	cout << "Задание: Написать программу, меняющую 4 числа местами." << endl;
	cout << "Введите числа" << endl;
	cin >> a >> b>>c>>d;
	cout << "a=" << a << " b=" << b << "c=" << c << " d=" << d << endl;
	mesto = a;
	a = b;
	b = mesto;
	mesto = c;
	c = d;
	d = mesto;
	cout << "a=" << a << " b=" << b << "c=" << c << " d=" << d << endl;
}
int main()

{
	setlocale(LC_ALL, "Russian");
	menu();
	int variant;
	bool While = true;
	while (While) {
		cin >> variant;
		switch (variant) {
		case 1:
			pervoe();
			menu();
			break;
		case 2:
			vtoroe();
			menu();
			break;
		case 3:
			tretye();
			menu();
			break;
		case 4:
			chetvertoe();
			menu();
			break;
		case 5:
			pyatoe();
			menu();
			break;
		case 6:
			shestoe();
			menu();
			break;
		case 7:
			sedmoe();
			menu();
			break;
		case 8:
			vosmoe();
			menu();
			break;
		case 9:
			devatoe();
			menu();
			break;
		case 10:
			exit(EXIT_SUCCESS);
			break;
		default:
			cout << "error\n";
			While = false;
			break;
		}
	}
	return 0;
}


//Лабараторная работа номер 3 по программированию.Вариант 21 задание 2.
//Запрашиваем вещественные переменные x, y, z.
//Считаем все возможные расстояния между этими точками xzzx, xyyx, zyyz.
// Находим из всех переменных наибольшую и присваиваем ее naib.
// Выводим расстояние между минимальным и максимальным значением.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//Вещественные числа
	double x;
	double y;
	double z;
	//Запрос вещественного числа х
	cout << "x = "; cin >> x;
	//Запрос вещественного числа y
	cout << "y = "; cin >> y;
	//Запрос вещественного числа z
	cout << "z = "; cin >> z;
	//Нахождение возможных расстояний между точками
	double xzzx = abs(x - z);
	double xyyx = abs(x - y);
	double zyyz = abs(z - y);
	//Максимальная длина
	double naib;
	//Нахождение максимальной длины
	if ((xzzx > xyyx)&&(xzzx > zyyz)){
		naib = xzzx;
	}
	else if ((zyyz > xyyx) && (zyyz > xzzx)) {
		naib = zyyz;
	}
	else if ((xyyx > xzzx) && (xyyx > zyyz)) {
		naib = xyyx;
	}
	cout << "Расстояние между минимальным и максимальным значением " << naib;
}

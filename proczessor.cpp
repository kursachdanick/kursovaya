#include "Video.h"
#include "sborka.h"
#include "proczessor.h"
#include "MP.h"
#include "box.h"
#include "HDD.h"
#include "RAM.h"
#include "Sound.h"
#include "Privod.h"
#include <iostream>
#include <fstream>
using namespace std;

proczsessor::proczsessor() {
	cout << "Введите производителя:\n";
	cin >> proizvoditel;
	cout << "Введите модель:\n";
	cin >> model;
	cout << "Введите количество ядер:\n";
	cin >> core;
	cout << "Частота:\n";
	cin >> frequency;
	cout << "Интерфейс:\n";
	cin >> interface;
}

void proczsessor::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Колличество ядер - " << core << endl;
	cout << "Частота - " << frequency << endl;
	cout << "Интерфейс - " << interface << endl;
	cout << "Информация записана в файл: proczsessor.txt"<< endl << endl;
}

void proczsessor::Vivod_in_fail() {
	ofstream file1("proczsessor.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Количество ядер - " << core << endl;
	file1 << "Частота - " << frequency << endl;
	file1 << "Интерфейс - " << interface << endl;
	file1.close();
}

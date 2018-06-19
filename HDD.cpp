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

void ZD::ZD() {
	cout << "Введите производителя\n";
	cin >> proizvoditel;
	cout << "Введите модель\n";
	cin >> model;
	cout << "Введите объём\n";
	cin >> volume_memory;
	cout << "Введите цвет:\n";
	cin >> calor;
	cout << "Введите тип памяти\n";
	cin >> type_memory;
}

void ZD::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Объём - " << volume_memory << endl;
	cout << "Цвет - " << calor << endl;
	cout << "Тип памяти - " << type_memory << endl;
	cout << "Информация записана в файл: HDD.txt"<< endl << endl;
}

void ZD::Vivod_in_fail() {
	ofstream file1("HDD.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Объём - " << volume_memory << endl;
	file1 << "Наличие Blue ray - " << calor << endl;
	file1 << "Тип памяти - " << type_memory << endl;
	file1.close();
}

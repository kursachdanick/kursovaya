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

privod::privod() {
	cout << "Введите производителя\n";
	cin >> proizvoditel;
	cout << "Введите модель\n";
	cin >> model;
	cout << "Введите тип подключения\n";
	cin >> type_actuators;
}

void privod::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Тип подключения - " << type_actuators << endl;
	cout << "Информация записана в файл: privod.txt"<< endl << endl;
}

void privod::Vivod_in_fail() {
	ofstream file1("privod.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Тип подключения - " << type_actuators << endl;
	file1.close();
}

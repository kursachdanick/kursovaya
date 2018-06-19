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

void box::box()
	cout << "Введите производителя:\n";
	cin >> proizvoditel;
	cout << "Введите модель:\n";
	cin >> model;
	cout << "Введите цвет:\n";
	cin >> calor;
	cout << "Введите тип охлаждения:\n";
	cin >> type_of_cooling;
	cout << "Введите lighting:\n";
	cin >> lighting;
}

void box::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Цвет - " << calor << endl;
	cout << "Тип охлаждения - " << type_of_cooling << endl;
	cout << "lighting - " << lighting << endl;
	cout << "Информация записана в файл: box.txt"<< endl << endl;
}

void box::Vivod_in_fail() {
	ofstream file1("box.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Объём - " << calor << endl;
	file1 << "Тип охлаждения - " << type_of_cooling << endl;
	file1 << "lighting - " << lighting << endl;
	file1.close();
}

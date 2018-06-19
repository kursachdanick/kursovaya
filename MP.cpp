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

MP::MP() {
	cout << "Введите производителя\n";
	cin >> proizvoditel;
	cout << "Введите модель\n";
	cin >> model;
	cout << "Введите чипсет\n";
	cin >> chipset;
}

void MP::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Чипсет - " << chipset << endl;
	cout << "Информация записана в файл: MP.txt"<< endl << endl;
}

void MP::Vivod_in_fail() {
	ofstream file1("MP.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Чипсет - " << chipset << endl;
	file1.close();
}

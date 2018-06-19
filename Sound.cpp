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

sound::sound() {
	cout << "Введите производителя\n";
	cin >> proizvoditel;
	cout << "Введите модель\n";
	cin >> model;
	cout << "Введите шумы\n";
	cin >> signal_noise;
	cout << "Наличие Blue ray\n";
	cin >> Blue_ray;
	cout << "Введите тип звуковой карты\n";
	cin >> type_sound_card;
}

void sound::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Шумы - " << signal_noise << endl;
	cout << "Наличие Blue ray - " << Blue_ray << endl;
	cout << "Тип звуковой карты - " << type_sound_card << endl;
	cout << "Информация записана в файл: sound.txt"<< endl << endl;
}

void sound::Vivod_in_fail() {
	ofstream file1("sound.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Шумы - " << signal_noise << endl;
	file1 << "Наличие Blue ray - " << Blue_ray << endl;
	file1 << "Тип звуковой карты - " << type_sound_card << endl;
	file1.close();
}

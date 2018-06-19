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

video::video() {
	cout << "Введите производителя\n";
	cin >> proizvoditel;
	cout << "Введите модель\n";
	cin >> model;
	cout << "Введите объём\n";
	cin >> volume_video;
	cout << "Наличие Blue ray\n";
	cin >> Blue_ray;
	cout << "Введите коннектор\n";
	cin >> video_conector;
}

void video::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Объём - " << volume_video << endl;
	cout << "Наличие Blue ray - " << Blue_ray << endl;
	cout << "Коннектор - " << video_conector << endl;
	cout << "Информация записана в файл: video.txt"<< endl << endl;
}

void video::Vivod_in_fail() {
	ofstream file1("video.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Объём - " << volume_video << endl;
	file1 << "Наличие Blue ray - " << Blue_ray << endl;
	file1 << "Коннектор - " << video_conector << endl;
	file1.close();
}

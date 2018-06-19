#include "sborka.h"
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    Sborka s;
    int button = 1;
	while (button) {
		cout << "Выберите действие:\n";
		cout << "|1| - Выбрать запчасть:\n";
		cout << "|0| - Выход:\n";
		cin >> button;
		switch (button) {
		case 1: s.Create_Sborka(); break;
		case 0: break;
		}
	}
cin.get();
return 0;
}

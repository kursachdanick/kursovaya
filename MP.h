#ifndef MP_H
#define MP_H

class MP: public Sborka
{
    char proizvoditel[20];
    char model[20];
    char chipset[20];
public:
    MP();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif MP_H


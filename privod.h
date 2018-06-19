#ifndef privod_H
#define privod_H

class privod: public Sborka
{
    char proizvoditel[20];
    char model[20];
    char type_actuators[20];
public:
    privod();
	void Vivod_in_not_fail();
	void Vivod_in_fail();;
};
#endif privod_H

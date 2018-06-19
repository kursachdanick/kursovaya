#ifndef HDD_H
#define HDD_H

class ZD: public Sborka
{
    char proizvoditel[20];
    char model[20];
    char type_memory[20];
    char calor[20];
    float volume_memory;
public:
    ZD();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif HDD_H

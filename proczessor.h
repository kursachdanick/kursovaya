#ifndef proczsessor_H
#define proczsessor_H

class proczsessor: public Sborka
{
    char proizvoditel[20];
    char model[20];
    int core;
    float frequency;
    char interface[20];
public:
    proczsessor();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif proczsessor_H

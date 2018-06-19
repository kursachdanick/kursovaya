#ifndef box_H
#define box_H

class box: public Sborka
{
    char proizvoditel[20];
    char model[20];
    char type_of_cooling[20];
    char calor[20];
    char lighting[20];
public:
    box();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif box_H

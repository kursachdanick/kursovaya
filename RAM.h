#ifndef RAM_H
#define RAM_H


class OP: public Sborka
{
    char proizvoditel[20];
    char model[20];
    float volume_memory;
    int cache;
    char type_memory[20];
public:
    OP();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif RAM_H

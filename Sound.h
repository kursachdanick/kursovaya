#ifndef sound_H
#define sound_H

class sound: public Sborka
{
    char proizvoditel[20];
    char model[20];
    float signal_noise;
    char Blue_ray[20];
    char type_sound_card[20];
public:
    sound();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif sound_H

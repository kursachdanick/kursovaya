#ifndef video_H
#define video_H


class video: public Sborka
{
    char proizvoditel[20];
    char model[20];
    int volume_video;
    char Blue_ray[20];
    char video_conector[20];
public:
    video();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
};
#endif video_H

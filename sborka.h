#ifndef sborka_H
#define sborka_H

class Sborka
{
private:
	int comp = 1;
public:
    Sborka();
	void Create_Sborka();
	Sborka(const Sborka&) = delete;
	Sborka & operator=(const Sborka&) = delete;
	void* operator new(size_t) = delete;
	void* operator new[](size_t) = delete;
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;
    ~Sborka();
};
#endif sborka_H

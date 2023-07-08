#pragma once
#include "Objeto.h"

class Libro : public Objeto {
private:
	int costo;
	Objeto** vec;
	int can;
	int tam;

public:
	Libro() {
		can = 0;
		tam = 20;
		vec = new Objeto*[tam];
		for (int i = 0; i < tam; i++)
			vec[i] = NULL;
	}

	virtual ~Libro() {
		for (int i = 0; i < can; i++)
			delete vec[i];
			delete[] vec;
	}

	int getCosto() {
		return costo;
	}

	void agregarObjeto(Objeto* obj) {
		if (can < tam) {
			costo = costo + obj->getCosto();
			vec[can++] = obj;
		}
	}
};

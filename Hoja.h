#pragma once
#include "Objeto.h"

class Hoja : public Objeto {
private:
	int costo;
public:
	Hoja(int _costo):costo(_costo){
	}

	virtual ~Hoja() {

	}

	int getCosto() {
		return costo;
	}
};

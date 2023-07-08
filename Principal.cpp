#include "Hoja.h"
#include "Objeto.h"
#include "Libro.h"


int main() {
	cout << "Crear un libro..librito.." << endl;
	Libro librito; //objeto automatico
	Libro librote;

	cout << "Crear algunas hojas.." << endl;
	Objeto* h1 = new Hoja(10);
	Objeto* h2 = new Hoja(20);
	Objeto* h3 = new Hoja(30);
	Objeto* h4 = new Hoja(40);

	Objeto* h5 = new Hoja(50);
	Objeto* h6 = new Hoja(60);

	cout << "Agregar hojas a librito.." << endl;
	librito.agregarObjeto(h1);
	librito.agregarObjeto(h2);
	librito.agregarObjeto(h3);
	librito.agregarObjeto(h4);

	//cout << "El valor de librito es.." << librito.getCosto() << endl;

	cout << "Ahora se creara un librote = 2 hojas + librito.." << endl;
	librote.agregarObjeto(h5);
	librote.agregarObjeto(h6);
	librote.agregarObjeto(&librito);
	//Sobrecarga el operador de "" asignacion

	cout << "El valor de librote es.." << librote.getCosto() << endl;

	system("pause");
	return 0;
}
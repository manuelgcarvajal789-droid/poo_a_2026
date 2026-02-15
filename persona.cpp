#include <iostream>
using namespace std;


class Persona{
//atributos
 string nombre,apellidos,dirreccion,fecha_nacimiento;
 int telefono;
 
//contructores
	persona(){
	}
	persona(string nom,string ape, string dir, int tel, string fn){
		nombre = nom;
		apellidos = ape;
		dirreccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}

//metodos (crud) 
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
	


	
};





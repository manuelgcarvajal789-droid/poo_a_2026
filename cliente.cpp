//comentario para github
#include "persona.cpp"
#include <iostream >

using namespace std;
class cliente : Persona{
	//atributos 
	private :
		string nit:
		
	//contructores
		public: 
	cliente(){
		
	}	
	
	cliente(string nom, string ape, string dir, int tel, string fn, string n) : persona(nom,ape,tel,fn){
		nit = n;
		
	}
	//metodos 
	void leer()
		cout<<"nit"<<nit<<endl;
		cout<<"nombres"<<nombres<<endl;
		cout<<"apellidos"<<apellidos<<endl;
		cout<<"dirreccion"<<dirreccion<<endl;
		cout<<"telefono"<<telefono<<endl;
		cout<<"fecha de nacimiento"<<fecha_nacimiento<<endl;	
	
	
	
};

#include <iostream>
using namespace std;
string NuevoNombre(string Nombre);

int main () {	
	string Nombre12;
	
	cout << "Ingrese un nombre: " << endl;
	getline(cin,Nombre12);
	
	cout <<NuevoNombre(Nombre12)<< endl;

	return 0;
}

string NuevoNombre(string Nombre) {
	
	string NombreJaponizado;
	string Inicio="Konnichi Wa, ";
	string Fin="-san";
 	
	for (int i = 0; i <= Nombre.size(); i++) {
		NombreJaponizado +=Nombre[i];
		
		if (Nombre[i]!=' '&&Nombre[i+1]!='a'&& Nombre[i+1]!='A'&& Nombre[i+1]!='e'&& Nombre[i+1]!='E'&& Nombre[i+1]!='i'&& Nombre[i+1]!='I'&& Nombre[i+1]!='o'&& Nombre[i+1]!='O'&& Nombre[i+1]!='u'&& Nombre[i+1]!='U'&& Nombre[i+1]!='n'&& Nombre[i+1]!='N'){
			if (Nombre[i]!='a'&& Nombre[i]!='A'&& Nombre[i]!='e'&& Nombre[i]!='E'&& Nombre[i]!='i'&& Nombre[i]!='I'&& Nombre[i]!='o'&& Nombre[i]!='O'&& Nombre[i]!='u'&& Nombre[i]!='U'&& Nombre[i]!='n'&& Nombre[i]!='N'&&Nombre[i]!=' '){
		NombreJaponizado += 'u';
			}
					
		}
	}
	
	
	string NombreFinal = Inicio + NombreJaponizado + Fin;
	
	return NombreFinal;
}

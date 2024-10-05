#include <iostream>
using namespace std;
int main() {
	cout<<"Ingrese un digito el 1 al 7 para seleccionar un dia de al semana:" << endl;
	cout<<"1. LUNES" << endl;
	cout<<"2. MARTES" << endl;
	cout<<"3. MIERCOLES" << endl;
	cout<<"4. JUEVES" << endl;
	cout<<"5. VIERNES" <<endl;
	cout<<"6. SABADO" <<endl;
	cout<<"7. DOMINGO" <<endl;
	cin >> opcion;
	switch (opcion) {
		case 1:
			cout << "Haz seleccionado Lunes." << endl;
			break;
		case 2:
			cout << "Haz seleccionado Martes." << endl;
			break;
		case 3
			cout << "Haz seleccionado Miercoes." << endl;
			break;
		case 4	
			cout << "Haz seleccionado jueves." << endl;
			break;
		case 5
			cout <<"Haz seleccionado Viernes" << endl;
			break;
		case 6
			cout <<"Haz seleccionado Sabado." << endl;
			break;
		case 7
			cout << "Haz seleccionado Domingo." << endl;
			break; 	
					}
	return 0;
}


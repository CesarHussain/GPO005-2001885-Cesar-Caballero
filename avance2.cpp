#include <iostream>
#include <string>

using namespace std;

struct ListaVentas
{
	string nombre, procedimiento, hora, Nprocedimiento;
	float costopro = 0, costo = 0, costototal = 0;
	int CP = 0;
};
int main() {

	ListaVentas citas[5];
	bool menu = true, paciente = true;
	float costopro = 0, costo = 0, costototal = 0;
	string nombre, procedimiento , hora, Nprocedimiento;   
	int eleccion = 0, CP = 0, num = 0, i, cita, elec2;
	cout << "\t\t\t\t\tBienvenido a su clinica terapeutica" << endl;
	while (menu) {

		cout << "Ingrese 1 Agendar una cita\n \t2 Modificar una cita\n \t3 Eliminar una cita\n \t4 revisar la lista de cita " << endl;
		cout << "\t5 limpiar la pantalla\n \t0 salir" << endl;
		cin >> eleccion;

		switch (eleccion)
		{

		case 0:
			exit(0);
			break;
		case 1:

			while (paciente) {
				for (i = 0; i < 5; i++)
				{
					cout << i + 1 << "\tNombre de paciente :";
					cin.ignore();
					getline(cin, citas[i].nombre);
					cout << i + 1 << "\tHora del procedimiento:";
					getline(cin, citas[i].hora);
					cout << i + 1 << "\tNombre del procedimiento:";
					getline(cin, citas[i].Nprocedimiento);
					cout << i + 1 << "\tDescripcion del procedimiento:";
					getline(cin, citas[i].procedimiento);
					cout << i + 1 << "\tCosto unitario del procedimiento:";
					cin >> citas[i].costopro;
					cout << i + 1 << "\tCantidad del procedimiento:";
					cin >> citas[i].CP;
					cout << i + 1 << "\tCosto unitario:";
					cin >> citas[i].costo;
					cout << i + 1 << "\t" << "Total(Pesos mexicanos):";
					citas[i].costototal = citas[i].costo + citas[i].costopro;
					cout << citas[i].costototal << endl;
					cout << "para agregar otra cita ingrese un numero, para regresar al menu ingrese 6" << endl;
					cin >> num;

					if (num == 6)
					{
						i = 5;
						paciente = false;
					}
				}
				break;
			}
			break;
		case 2:
			cout << "Ingrese el numero de la cita que desee modificar" << endl;
			cin >> cita;
			cita = cita - 1;
			for (i = cita; i == cita; i++)
			{
			printf("Que es lo que quiere modificar? \n 1.Nombre \n 2.Hora \n 3.Nombre del procedimiento \n 4.Descripcion del procedimiento \n 5. costo unitario del procedimiento \n 6.Cantidad del procedimiento \n 7.Costo unitario \n");
			cin >> elec2;
			switch (elec2) {
			case 1:
				cout << "Nombre de paciente: " << citas[i].nombre << endl;
				cout << "Ingrese el nuevo valor:";
				cin.ignore();
				getline(cin, citas[i].nombre);
				break;
			case 2:
				cout << "Hora del procedimiento:" << citas[i].hora << endl;
				cout << "Ingrese el nuevo valor:";
				cin.ignore();
				getline(cin, citas[i].hora);
				break;
			case 3:
				cout << "Nombre del procedimiento:" << citas[i].Nprocedimiento << endl;
				cout << "Ingrese el nuevo valor:";
				cin.ignore();
				getline(cin, citas[i].Nprocedimiento);
				break;
			case 4:
				cout << "Descripcion del procedimiento:" << citas[i].procedimiento << endl;
				cout << "Ingrese el nuevo valor:";
				cin.ignore();
				getline(cin, citas[i].procedimiento);
				break;
			case 5:
				cout << "Costo unitario del procedimiento:" << citas[i].costopro << endl;
				cout << "Ingrese el nuevo valor:";
				cin >> citas[i].costopro;
				break;
			case 6:
				cout << "Cantidad del procedimiento:" << citas[i].CP << endl;
				cout << "Ingrese el nuevo valor:";
				cin >> citas[i].CP;
				break;
			case 7:
				cout << "Costo unitario:" << citas[i].costo << endl;
				cout << "Ingrese el nuevo valor:";
				cin >> citas[i].costo;
				break;
			}
				cout << "Total(Pesos mexicanos):" << endl;
				citas[i].costototal = citas[i].costo + citas[i].costopro;
				cout << citas[i].costototal << endl;
				system("cls");
				cout << "Nombre de paciente: " << citas[i].nombre << endl;
				cout << "Hora del procedimiento:" << citas[i].hora << endl;
				cout << "Nombre del procedimiento:" << citas[i].Nprocedimiento << endl;
				cout << "Descripcion del procedimiento:" << citas[i].procedimiento << endl;
				cout << "Costo unitario del procedimiento:" << citas[i].costopro << endl;
				cout << "Cantidad del procedimiento:" << citas[i].CP << endl;
				cout << "Costo unitario:" << citas[i].costo << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << citas[i].costototal << endl;
				cout << "La cita a sido modificada exitosamente";
				system("pause");
				system("cls");
			}
			break;

		case 3:
			cout << "Ingrese el numero de la cita que desee eliminar" << endl;
			cin >> cita;
			cita = cita - 1;
			for (i = cita; i == cita; i++)
			{
				citas[i].nombre = "";
				citas[i].hora = "";
				citas[i].Nprocedimiento = "";
				citas[i].procedimiento = "";
				citas[i].costopro = 0;
				citas[i].CP = 0;
				citas[i].costo = 0;
				citas[i].costototal= 0;
			}
			cout << "La cita se borro exitosamente" << endl;
			system("pause");
			system("cls");
			break;

		case 4:
			//Muestra los valores actualizados
			for (i = 0; i < 5; i++)
			{
				cout << "La cita que fue ingresada en la posicion" << i + 1 << endl;
				cout << "Nombre de paciente: " << citas[i].nombre << endl;
				cout << "Hora del procedimiento:" << citas[i].hora << endl;
				cout << "Nombre del procedimiento:" << citas[i].Nprocedimiento << endl;
				cout << "Descripcion del procedimiento:" << citas[i].procedimiento << endl;
				cout << "Costo unitario del procedimiento:" << citas[i].costopro << endl;
				cout << "Cantidad del procedimiento:" << citas[i].CP << endl;
				cout << "Costo unitario:" << citas[i].costo << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << citas[i].costototal << endl;
				system("pause");
				system("cls"); // limpiar pantalla
			}
			break;

		case 5:
			system("cls");
			break;
		default:
			cout << "No se ingreso una opcion correcta" << endl;
			system("pause");
			break;
		}
	}
}

#include <iostream>
#include <string>

using namespace std;

struct TiendaDeVideojuegos
{
	string nombre, videojuego, ano, Clasificacion, CP;
	float costo = 0, costototal = 0;
};
int main() {

	TiendaDeVideojuegos NumeroDeArticulo[5];
	bool menu = true, jugador = true;
	float costovideojuego = 0, costo = 0, costototal = 0, IVA;
	string nombre, videojuego, ano, Genero, Clasificacion;
	int eleccion = 0, num = 0, i, Articulo = 0, elec2;
	cout << "\t\t\t\t\tBienvenido a la Tienda De videojuegos" << endl;
	while (menu) {

		cout << "Ingrese 1 para Registrar un nuevo Juego\n \t2 Para modificar un videojuego\n \t3 Para eliminar un videojuego\n \t4 Para revisar la lista de videojuegos" << endl;
		cout << "\t5 limpiar la pantalla\n \t0 salir" << endl;
		cin >> eleccion;

		switch (eleccion)
		{

		case 0:
			exit(0);
			break;
		case 1: {
			while (jugador) {
				for (i = 0; i < 5; i++)
				{
					cout << i + 1 << "\tNombre del jugador :";
					cin.ignore();
					getline(cin, NumeroDeArticulo[i].nombre);
					cout << i + 1 << "\tAno de Lanzamiento:";
					getline(cin, NumeroDeArticulo[i].ano);
					cout << i + 1 << "\tClasificacion:";
					getline(cin, NumeroDeArticulo[i].Clasificacion);
					cout << i + 1 << "\tDescripcion ";
					getline(cin, NumeroDeArticulo[i].videojuego);
					cout << i + 1 << "\tGenero:";
					getline(cin, NumeroDeArticulo[i].CP);
					cout << i + 1 << "\tCosto unitario:";
					cin >> NumeroDeArticulo[i].costo;
					cout << i + 1 << "\t" << "Total(Pesos mexicanos):";
					NumeroDeArticulo[i].costototal = NumeroDeArticulo[i].costo;
					IVA = NumeroDeArticulo[i].costototal * .16;
					NumeroDeArticulo[i].costototal += IVA;
					cout << NumeroDeArticulo[i].costototal << endl;
					cout << "para agregar otro videojuego ingrese un numero, para regresar al menu ingrese 6" << endl;
					cin >> num;

					if (num == 6)
					{
						i = 5;
						jugador = false;
					}
				}
			}
			break;
		}
		case 2: {
			int Articulo = 0, op2 = 0, i = 0;
			cout << "Ingrese el numero de articulo que desee modificar" << endl;
			cin >> Articulo;
			Articulo = Articulo - 1;
			for (i = Articulo; i == Articulo; i++)
			{
				printf("Que es lo que quiere modificar? \n 1.Videojuego \n 2.Ano \n 3.Clasificacion \n 4.Descripcion \n 5.Genero \n 6.Costo del videojuego \n");
				cin >> elec2;
				switch (elec2) {
				case 1:
					cout << "Nombre del videojuego: " << NumeroDeArticulo[i].videojuego << endl;
					cout << "Ingrese el nuevo nombre:";
					cin.ignore();
					getline(cin, NumeroDeArticulo[i].videojuego);
					break;
				case 2:
					cout << "Ano de lanzamiento:" << NumeroDeArticulo[i].ano << endl;
					cout << "Ingrese el nuevo ano:";
					cin.ignore();
					getline(cin, NumeroDeArticulo[i].ano);
					break;
				case 3:
					cout << "Clasificacion:" << NumeroDeArticulo[i].Clasificacion << endl;
					cout << "Ingrese la nueva clasificacion:";
					cin.ignore();
					getline(cin, NumeroDeArticulo[i].Clasificacion);
					break;
				case 4:
					cout << "Descripcion del videojuego:" << NumeroDeArticulo[i].videojuego << endl;
					cout << "Ingrese la nueva descricpion:";
					cin.ignore();
					getline(cin, NumeroDeArticulo[i].videojuego);
					break;
				case 5:
					cout << "Genero del Videojuego:" << NumeroDeArticulo[i].CP << endl;
					cout << "Ingrese el nuevo genero:";
					cin >> NumeroDeArticulo[i].CP;
					break;
				case 6:
					cout << "Costo del videojuego:" << NumeroDeArticulo[i].costo << endl;
					cout << "Ingrese el nuevo costo:";
					cin >> NumeroDeArticulo[i].costo;
					break;
				}
				cout << "Total(Pesos mexicanos):" << endl;
				NumeroDeArticulo[i].costototal = NumeroDeArticulo[i].costo;
				IVA = NumeroDeArticulo[i].costototal * .16;
				NumeroDeArticulo[i].costototal += IVA;
				cout << NumeroDeArticulo[i].costototal << endl;
				system("cls");
				cout << "Nombre del Videojuego: " << NumeroDeArticulo[i].videojuego << endl;
				cout << "Ano de lanzamiento:" << NumeroDeArticulo[i].ano << endl;
				cout << "Clasificacion del videojuego:" << NumeroDeArticulo[i].Clasificacion << endl;
				cout << "Descripcion del videojuego:" << NumeroDeArticulo[i].videojuego << endl;
				cout << "Genero del Videojuego:" << NumeroDeArticulo[i].CP << endl;
				cout << "Costo unitario:" << NumeroDeArticulo[i].costo << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << NumeroDeArticulo[i].costototal << endl;
				cout << "La cita a sido modificada exitosamente";
				system("pause");
				system("cls");
			}
			break;
		}
		case 3: {
			int Articulo = 0, op3 = 0, i = 0;
			cout << "Ingrese el numero de la cita que desee eliminar" << endl;
			cin >> Articulo;
			Articulo = Articulo - 1;
			for (i = Articulo; i == Articulo; i++)
			{
				NumeroDeArticulo[i].videojuego = "";
				NumeroDeArticulo[i].ano = "";
				NumeroDeArticulo[i].Clasificacion = "";
				NumeroDeArticulo[i].videojuego = "";
				NumeroDeArticulo[i].CP = "";
				NumeroDeArticulo[i].costo = 0;
				NumeroDeArticulo[i].costototal = 0;
			}
			cout << "El videojuego se borro completamente" << endl;
			system("pause");
			system("cls");
			break;
		}
		case 4: {
			//Muestra los valores actualizados
			for (i = 0; i < 5; i++)
			{
				cout << "El juego que fue ingresado en" << i + 1 << endl;
				cout << "Nombre del Videojuego: " << NumeroDeArticulo[i].videojuego << endl;
				cout << "Año de lanzamiento:" << NumeroDeArticulo[i].ano << endl;
				cout << "Clasificacion del Videojuego:" << NumeroDeArticulo[i].Clasificacion << endl;
				cout << "Descripcion delvideojuego:" << NumeroDeArticulo[i].videojuego << endl;
				cout << "Genero del Videojuego:" << NumeroDeArticulo[i].CP << endl;
				cout << "Costo del videojuego:" << NumeroDeArticulo[i].costo << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << NumeroDeArticulo[i].costototal << endl;
				system("pause");
				system("cls"); // limpiar pantalla
			}
			break;
		}
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

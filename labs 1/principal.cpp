#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	int resp;
	char bio[] = "Dario Michel Si�ani Duran, nacido en Sucre el 19 de diciembre de 2001, tercer hijo unico varon  ";
	char bio1[] = "su padre Marcial Si�ani Mancilla,� la madre Beatriz de los �ngeles Duran Avila";
	char bio2[] = "hizo termino la primaria en Vallegrande en el colegio Mariscal Sucre hasta primero de secundaria ";
	char bio3[] = "pasando al colegio Nacional Jaime de Zuda�ez terminando el bachillerato en la misma una persona a la que le gusta estar en forma y jugar varios deporte.";

	cout << bio << endl;
	cout << bio1 << endl;
	cout << bio2 << endl;
	cout << bio3 << endl;
	system("pause");

	cout << "seleccione entre las opciones para volver a imprimir la panatalla (1) opara fianlizar el programa (0) " << endl;
	cin >> resp;
	system("cls");

		if (resp == 1) {
			cout << bio << endl;
			cout << bio1 << endl;
			cout << bio2 << endl;
			cout << bio3 << endl;
	}

	return 0;
}
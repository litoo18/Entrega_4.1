#include stdio.h
#include string.h
#include stdlib.h

int main(int argc, char argv[]) {
	
	char peticion[100];
	char respuesta[100];
	strcpy (peticion, Miguel47Juan12Maria22Marcos19Ana34);
	
	char nombre [20];
	int edad;
	char p = strtok (peticion, );
	
	while (p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, );
		edad = atoi(p);
		if (edad  18)
			sprintf(respuesta, %s%s%d-, respuesta, nombre, edad);
		
		p= strtok (NULL, );
	}
	respuesta [strlen (respuesta) -1]='0';
	
	printf (Resultado %sn, respuesta);
	
	int es_palindromo (char nombre){
		int longitud = strlen(nombre);
		int i, j;
		for (i = 0, j = longitud - 1; i  j; i++, j--) {
			if (nombre[i] != nombre[j]) {
				return 0;  no es palindromo
				sprintf(%s%sn,nombre, no es palindromo);
			}
			else
				sprintf(%s%sn, nombre, es palindromo);
				return 1;
		}
	}
}







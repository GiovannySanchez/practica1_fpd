#include <stdlib.h>
#include <stdio.h>

// remove("E:\\hola.txt");

int main(){
	
		char ar[]="E:\\hola.txt";
		
	 if(remove(ar)==0) // Eliminamos el archivo
        printf("El archivo fue eliminado satisfactoriamente\n");
    else
        printf("No se pudo eliminar el archivo\n");
    
    system("PAUSE");
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void altas();

int main(){


	struct paciente{

		char nombre[70];
		char tel[30];
		
	}datos;

	int a;
	FILE *fd;
	char direccion[]="E:\\altas_prueba.txt";
	
	fd= fopen(direccion,"wt");

	if(fd==NULL){

		printf("ERROR al tratar de crear el archivo");
		return 1;
	}

	printf("\t AGENDA De ALTAS\n\n");
	fprintf(fd,"\tAGENDA De ALTAS\n");

	do {
		fflush(stdin);
		printf("\n nombre: ");
			gets(datos.nombre);
			printf("telefono: ");
			gets(datos.tel);
			printf("\n");

			fprintf(fd,"nombre: ");
			fwrite(datos.nombre,1,strlen(datos.nombre),fd);
			fprintf(fd,"\ntelefono: ");
			fwrite(datos.tel,1,strlen(datos.tel),fd);
			fprintf(fd,"\n\n");

			printf("Deseas agregar mas pacientes? : 1)si o 2)no\n");
			scanf("%i",&a);

	} while(a != 2);



	fclose(fd);

}



#include<stdio.h>	
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#define p printf
#define s scanf

struct paciente{
	char nombre[70];
	char tel[30];	
};

struct area{
	struct paciente cliente[10];
} grupos[3];
		
int contador=0;
int *ap;
void Crear_archivo();

int main(){
	
	Crear_archivo();
	getch();
}



void Crear_archivo(){
	ap = &contador;
	
char dir_car []="E:\\";
char archivo[70];
char ext[]=".txt";
int c;
FILE *fd;

			
	do {	
			fflush(stdin);
			p("\n\n%i",*ap);
			printf("\n %i.nombre: ",contador+1);
			gets(grupos[0].cliente[*ap].nombre);
			printf("%i. telefono: ",contador+1);
			gets(grupos[0].cliente[*ap].tel);
			printf("\n");
			strcpy(archivo,dir_car);
			strcat(archivo,grupos[0].cliente[*ap].nombre);
			strcat(archivo,ext);
						
				fd= fopen(archivo,"wt");
				
				fprintf(fd,"\tAGENDA De ALTAS\n");
				fprintf(fd,"nombre: ");
				//fwrite(grupos[0].cliente[*ap].nombre,1,strlen(grupos[0].cliente[*ap].nombre),fd);
				fprintf(fd,"\ntelefono: ");
				//fwrite(datos.tel,1,strlen(datos.tel),fd);
				fclose(fd);
		
			printf("\nDeseas agregar mas pacientes? : 1)si o 2)no\n");
			s("%i",&c);
			p("\n\n%i",c);
			system("pause");
			printf("\n");
			
			if(c == 1){
				contador++;
			}			
 				
	} while( c != 2);
	
}
		


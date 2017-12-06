#include<stdio.h>	
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<direct.h>
#include<windows.h>
#include<time.h>
#include <sys/types.h>
#include <dirent.h>
#define s scanf
#define p printf


struct paciente{
	
		char nombre[80]; 
		char tel[10];	
};

struct area{
	
	struct paciente cliente[10];
	
}grupos[3];


int contador=0,capacidad_N=10;
int cR=0,cap_R=10;
int cP=0,cap_P=10;


int *ap,*apR,*apP;


char menu(); 

void kale (char a); 

void Area1(char m);
void Area2(char m);
void Pediatria(char m);

void accion1 (int y, char z[],char w[] );
void accion2 (int y, char z[],char w[] );
void Operacion3 (int y, char z[],char w[] );

void Crear_alta_area1(char z[],char w[]);
void Crear_alta_area2(char z[],char w[]);
void Crear_archivo_P(char z[],char w[]);

void error(const char *s);
void Lista_Archivos(char d[]);
void procesoArchivo(char *archi);

void Eliminar_archivo(char k[]);
void menu_eliminar(char k[],int seccion,char w[]);

void menu_consulta(int x, char dir_con[],char w[],char z[], int seccion);


int main(){
	
	mkdir("E://Proyecto F//");
	 
	char x;
	
	do{
		system("cls");   
	p(" Proyecto F ");
	
	
	x= menu ();
	kale(x);             
	
	}while(x!= 'd');
}

char menu(){  
	
	char Area;
	
	p("\nSelecciona un Area:\n\n");
	p("a)Cardiologia \n");
	p("b)Odontologia\n");
	p("c)Pediatria \n");
	p("d) Salir del programa. \n");
	Area= getche();
	Area=tolower(Area);
	p("\n\n");
	system("pause");
	return Area;

}

void kale(char a){   
		
char M; 
	
	switch(a) {
		
		case 'a':
			do
			{
				system("cls");
			
				printf("Area 1");
			    printf("\nMedicos:\n");
			    printf("\ta)DR.Steban\n\tb)DR.Bruno\n\tc)DR.Nappa\n\te)SALIR\n");
				printf("Selecciona a un Medico para hacer un procedimiento o ingresa 'e)SALIR' para\n volver al menu principal.\n");
			
                M=getche();
			    M=tolower(M);
			    p("\n\n");
				system("pause");
				Area1(M);
				
			} while (M!='e');
			
	    break;	
		
		case 'b':
			do
			{
				system("cls");
			
				printf("Area 2");
			    printf("\nMedicos:\n");
			    printf("\ta)DR.Etahn\n\tb)DR.Angela\n\tc)DR.Erwin\n\te)SALIR\n");
				printf("Selecciona a un MEDICO para realizar un procedimiento o ingresa 'e)SALIR' para\n volver al menu principal.\n");
				
                M=getche();
			    M=tolower(M);
			    p("\n\n");
				system("pause");
				Area2(M);
				
			} while (M!='e');
		break;	
			
		case 'c':
			do
			{
				system("cls");
			
				printf("Area 3");
			    printf("\nMedicos:\n");
			    printf("\ta)DR.Diego\n\tb)DR.Roberto\n\tc)DR.Isabel\n\te)SALIR\n");
				printf("Selecciona a un Medico para hacer un procedimiento o ingresa 'e)SALIR' para\n volver al menu principal.\n");
			
                M=getche();
			    M=tolower(M);
			    p("\n\n");
				system("pause");
				Pediatria(M);
				
				
			} while (M!='e');	
		break;	
			
		case 'd':
			system("cls");
			p("Fin del programa");
			getch();
			break;
		
		default:printf("\n\nPerdon, caracter invalido\n");
				system("pause");		
				
	} 
	
}

void Area1(char m){
int opc;	
char n[]="Cardiologia";


	switch(m) {
		case 'a':
			do{
			char doc[]="DR.Steban";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la operacion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion1(opc,doc,n);
			
			}while(opc!=4);
			
		break;
		
		case 'b':
			do{
			char doc[]="DR.Bruno";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la opcion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion1(opc,doc,n);
			
			}while(opc!=4);
		break;
		
		case'c':
			do{
			char doc[]="DR.Nappa";
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la opcion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion1(opc,doc,n);
			
			}while(opc!=4);
		break;		
		
		case 'e': break;
		 
		default:p("\nEl doctor no existe\n");
				p("\n\n");
				system("pause");
	}
}

void Area2(char m){
int opc;	

char radio[]="Odontologia";


	switch(m) {
		case 'a':
			do{
			char doc[]="DR.Etahn";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la opcion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion2 (opc,doc,radio);
			
			}while(opc!=4);
		break;
		
		case 'b':
			do{
			char doc[]="DR.Angela";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la opcion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion2(opc,doc,radio);
			
			}while(opc!=4);
		break;
		
		case'c':
			do{
			char doc[]="DR.Erwin";
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la operacion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			accion2(opc,doc,radio);
			
			}while(opc!=4);
		break;		
		
		case 'e': break;
		 
		default:p("\nEl doctor no existe\n");
		p("\n\n");
		system("pause");
	}
}

void Pediatria(char m){
int opc;	
char pedi[]="Pediatria";


	switch(m) {
		case 'a':
			do{
			char doc[]="DR.Diego";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la operacion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			
			Operacion3 (opc,doc,pedi);
			
			}while(opc!=4);
		break;
		
		case 'b':
			do{
			char doc[]="DR.Roberto";	
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la operacion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			Operacion3(opc,doc,pedi);
			
			}while(opc!=4);
		break;
		
		case'c':
			do{
			char doc[]="DR.Isabel";
			system("cls");
			printf("\t%s",doc);
			p("\nSelecciona la operacion que deseas realizar:\n\n");
			p("1) Alta\n");
			p("2) Baja\n");
			p("3) CONSULTA\n");
			p("4) Volver a la lista de doctores");
			p("\n\nSeleccion: ");
			s("%i",&opc);
			Operacion3(opc,doc,pedi);
			
			}while(opc!=4);
		break;		
		
		case 'e': break;
		 
		default:p("\nEl MEDICO NO EXISTE\n");
		p("\n\n");
		system("pause");
	}
}

void accion1 (int y, char z[],char w[] ){
	
char direccion[]="E://Proyecto F//altas_Cardiologia";
char borrar[]="E:\\Proyecto F\\altas_Cardiologia\\";

char dir_consulta[]="E://Proyecto F//consultas_Cardiologia"; 
char crear_consulta[]="E:\\Proyecto F\\consultas_Cardiologia\\";

int grupo1=0;

int b;
	
	switch(y) {
		
		case 1:
			
			system("cls");
			p("\tALTA medica de paciente");
			p("\n\nAREA: %s",w);
			p("\nCapacidad de clientes(pacientes) = %i",capacidad_N-contador); 
			p("\nDoctor: %s",z);
			p("\n\nIngresa los datos del cliente que se \nincorporara a la base de datos.");
			p("\nDeseas empezar?: 1) Si , 2)No\n");
			s("%i",&b);
			
		
			
			if(b==1) {
				
				
					if(mkdir(direccion)== 0){
					
					}
					
					system("cls");
					
					p("\tALTA medica de paciente");
					p("\n\nAREA: %s",w);
					p("\nDoctor: %s",z);
					p("\nCapacidad de clientes(pacientes) = %i",capacidad_N-contador);
					p("\n\nIngresa los datos.");
					p("\n\n");
					Crear_alta_area1(z,w);
			}
			
		break;		
		
		case 2:
			
        	if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("PERDONE, AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
			
     		}
			 else
     		
   			{
   				system("cls");
				p("\tBAJA medica de paciente");
				p("\n\nAREA: %s",w);
				p("\n\nConoces el Num.de cuenta u el nombre del paciente\n que sera dado de baja?");
				p("\n\n1) Si , 2)No\n");
				p("Seleccion: ");
				s("%i",&b);
				
				if(b==2) {
					system("cls");
					printf("\tAGENDA MEDICA\n");
					p("BAJA medica de paciente");
					p("\n\nLISTA: Base de datos de %s\n\n",w);
					Lista_Archivos(direccion);
					p("\n\n");
					 Eliminar_archivo(borrar);
					p("\n");
					system("pause");
				} 
				else{
						if(b==1) {
							system("cls");
							printf("\tAGENDA MEDICA\n");
							p("BAJA medica de paciente");
							p("\n\nBase de datos de %s\n\n",w);
							menu_eliminar(borrar,grupo1,w);
							p("\n");
							system("pause");
							
							
						}else{
								if(b!=1 && b!=2){
								p("\n\n opcion invalida.\n\n");	
								system("pause");}
							
							}							
					
					}	
					
					
			}	
			
		break;
		
		case 3:
					if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("PERDONE, AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
			 
     		}
			 else
     		
   			{	mkdir(dir_consulta);
   				system("cls");
				p("\tCONSULTA medica para paciente");
				p("\n\nAREA: %s",w);
				p("\n\nConoces el Num. de cuenta  del paciente\n al que se le asignara una consulta?");
				p("\n\n1) Si , 2)No\n");
				p("seleccion: ");
				s("%i",&b);
				
				menu_consulta(b,crear_consulta,w,z,grupo1);	
				p("\n\n");
				system("pause");
				
			}
		break;
		
			
		case 4: break;
		
		default:p("\nOpcion invalida\n");
				p("\n\n");
				system("pause");
	}
	
}
		
void accion2 (int y, char z[],char w[]){
	
char direccion[]="E://Proyecto F//altas_area2"; 
char borrar[]="E:\\Proyecto F\\altas_area2\\";

char dir_consulta[]="E://Proyecto F//consultas_area2"; 
char crear_consulta[]="E:\\Proyecto F\\consultas_area2\\";

int grupo2=1;
int b;

		switch(y) {
		
		case 1:
			
			system("cls");
			p("\tALTA medica de paciente");
			p("\n\nAREA: %s",w);
			p("\nCapacidad de clientes(pacientes) = %i",cap_R-cR);
			p("\nDoctor: %s",z);
			p("\n\nIngresa los datos del cliente que se \nincorporara a la base de datos.");
			p("\nDeseas empezar?: 1) Si , 2)No\n");
			s("%i",&b);
			
			if(b==1) {
				
				if(cap_R-cR == 0){
					system("cls");
     				printf("PERDONE, HAZ LLENADO LA BASE DE DATOS DE %s.",w);
     				p("\n\n");
					system("pause");
     				break;
				}
				
				if(mkdir(direccion)== 0){
					
				}
					
					
					system("cls");
						
					p("\tALTA medica de paciente");
					p("\n\nAREA: %s",w);
					p("\nDoctor: %s",z);
					p("\nCapacidad de clientes(pacientes) = %i",cap_R-cR);
					p("\n\nIngresa los datos.");
					p("\n\n");
					Crear_alta_area2(z,w);
			}
			
		break;		
		
		case 2:
			
        	if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
     		}else
     		
   			{
   				system("cls");
				p("\tBAJA medica de paciente");
				p("\n\nAREA: %s",w);
				p("\n\nConoces el Num. de cuenta o el nombre del paciente\n que sera dado de baja?.");
				p("\n\n1) Si , 2)No\n");
				p("Seleccion: ");
				s("%i",&b);
				
				if(b==2) {
					system("cls");
					printf("\tAGENDA MEDICA\n");
					p("BAJA medica de paciente");
					p("\n\nLISTA: Base de datos de %s\n\n",w);
					Lista_Archivos(direccion);
					p("\n\n");
					Eliminar_archivo(borrar);
					p("\n");
					system("pause");
				}
				else{
						if(b==1) {
							system("cls");
							printf("\tAGENDA MEDICA\n");
							p("BAJA medica de paciente");
							p("\n\nBase de datos de %s\n\n",w);
							menu_eliminar(borrar,grupo2,w);
							p("\n");
							system("pause");
							
							
						}else{
								if(b!=1 && b!=2){
								p("\n\n Opcion invalida.\n\n");	
								system("pause");}
							
							}								
					
					}						
						
			
			}	
			
		break;
		
		case 3:
					if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("PERDONE, AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
     		}
			 else
   			{	mkdir(dir_consulta);
   				system("cls");
				p("\tCONSULTA medica para paciente");
				p("\n\nAREA: %s",w);
				p("\nConoces el Num. de cuenta del paciente\n al que se le asignara una consulta?");
				p("\n\n1) Si , 2)No\n");
				p("Seleccion: ");
				s("%i",&b);
				
				menu_consulta(b,crear_consulta,w,z,grupo2);	
				p("\n\n");
				system("pause");
			}
			
		break;
		
		case 4: break;
		
		default:p("\nOpcion invalida\n");
				p("\n\n");
				system("pause");
	}
	
}

void Operacion3 (int y, char z[],char w[]){

char direccion[]="E://Proyecto F//ALTAS_PEDIAT"; 
char borrar[]="E:\\Proyecto F\\ALTAS_PEDIAT\\";

char dir_consulta[]="E://Proyecto F//CONSULTAS_PEDIAT"; 
char crear_consulta[]="E:\\Proyecto F\\CONSULTAS_PEDIAT\\";
int b;
int grupo3=2;

		switch(y) {
		
		case 1:
			
			system("cls");
			p("\tALTA medica de paciente");
			p("\n\nAREA: %s",w);
			p("\nCapacidad de clientes(pacientes) = %i",cap_P-cP);
			p("\nDoctor: %s",z);
			p("\n\nIngresa los datos del cliente que se \nincorporara a la base de datos.");
			p("\nDeseas empezar?: 1) Si , 2)No\n");
			s("%i",&b);
			
				if(b==1) {
				
				if(cap_P-cP == 0){
					system("cls");
     				printf("PERDONE, HAZ LLENADO LA BASE DE DATOS DE %s.",w);
     				p("\n\n");
					system("pause");
     				break;
				}
				
				if(mkdir(direccion)== 0){
				}
					system("cls");
					
					p("\tALTA medica de paciente");
					p("\n\nAREA: %s",w);
					p("\nDoctor: %s",z);
					p("\nCapacidad de clientes(pacientes) = %i",cap_P-cP);
					p("\n\nIngresa los datos.");
					p("\n\n");
					Crear_archivo_P(z,w);
			}
			
		break;		
		
		case 2:
			
        	if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("PERDONE, AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
     		}else
   			{
   				system("cls");
				p("\tBAJA medica de paciente");
				p("\n\nAREA: %s",w);
				p("Conoces el Num. de cuenta o el nombre del usuario\n que sera dado de baja?.");
				p("\n\n1)Si , 2)No\n");
				p("Seleccion: ");
				s("%i",&b);
				
				if(b==2) {
					system("cls");
					printf("\tAGENDA MEDICA\n");
					p("BAJA medica de paciente");
					p("\n\nLISTA: Base de datos de %s\n\n",w);
					Lista_Archivos(direccion);
					p("\n\n");
					 Eliminar_archivo(borrar);
					p("\n");
					system("pause");
				}			
					else{
						if(b==1) {
							system("cls");
							printf("\tAGENDA MEDICA\n");
							p("BAJA medica de paciente");
							p("\n\nBase de datos de %s\n\n",w);
							menu_eliminar(borrar,grupo3,w);
							p("\n");
							system("pause");
							
							
						}else{
								if(b!=1 && b!=2){
								p("\n\n Opcion invalida.\n\n");	
								system("pause");}
							
							}								
					
					}	
						
			
			}	
			
		break;
		
		case 3:
					if (GetFileAttributes(direccion)== -1) {
        		system("cls");
     			printf("PERDONE, AUN NO INGRESAS PACIENTES A LA BASE DE DATOS DE %s.",w);
     			p("\n\n");
				system("pause");
     			break;
     		}
			 else
   			{	mkdir(dir_consulta);
   				system("cls");
				p("\tCONSULTA medica para paciente");
				p("\n\nAREA: %s",w);
				p("\n\nConoces el Num. de cuenta o el nombre del paciente\n al que se le asignara una consulta?.");
				p("\n\n1) Si , 2)No\n");
				p("Seleccion: ");
				s("%i",&b);
				
				menu_consulta(b,crear_consulta,w,z,grupo3);	
				p("\n\n");
				system("pause");
			}
			
		break;
		
		case 4: break;
		
		default:p("\nOpcion invalida\n");
				p("\n\n");
				system("pause");
	}
	
}

void Crear_alta_area1(char z[],char w[] ){
	
	ap = &contador;
	
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char fecha[20];
        char hora[15];
        strftime(fecha,20,"%d/%m/%y ",tlocal);
        strftime(hora,15,"%H:%M:%S",tlocal);
        
char dir_car []="E:\\Proyecto F\\altas_area1\\"; 
char archivo[80];
char ext[]=".txt";
int c;
FILE *fd;

		
	do {
					
			if(contador == 10){
					system("cls");
     				printf("PERDONE, HAZ LLENADO LA BASE DE DATOS");
     				p("\n\n");
					system("pause");
     				break;
				}
				
			fflush(stdin);
			p("Alta paciente No. %i.",contador+1);
			p("\nNo.de cuenta: %i",contador+1);
			printf("\n %i. Nombre(completo): ",contador+1);
			gets(grupos[0].cliente[*ap].nombre); 
			printf("%i. Telefono: ",contador+1);
			gets(grupos[0].cliente[*ap].tel);
			printf("\n");
			
			strcpy(archivo,dir_car);
			strcat(archivo,grupos[0].cliente[*ap].nombre);
			strcat(archivo,ext);
						
				fd= fopen(archivo,"wt");
				
				fprintf(fd,"\tAGENDA MEDICA\n");
				fprintf(fd,"Formato: ALTA\n");
				fprintf(fd,"Area Medica: %s\n",w);
				fprintf(fd,"Doctor: %s\n",z);
				fprintf(fd,"Fecha: %s\n",fecha);
				fprintf(fd,"Hora: %s\n\n",hora);
				fprintf(fd,"DATOS DEL PACIENTE:\n\n");
				fprintf(fd,"Numero de Cuenta: %i",contador+1);
				fprintf(fd,"\nNOMBRE: ");
				fwrite(grupos[0].cliente[*ap].nombre,1,strlen(grupos[0].cliente[*ap].nombre),fd);
				fprintf(fd,"\nTELEFONO: ");
				fwrite(grupos[0].cliente[*ap].tel,1,strlen(grupos[0].cliente[*ap].tel),fd);
				fclose(fd);
		
			printf("Deseas agregar mas pacientes? : \n1)Si o 2)No\n");
			s("%i",&c);
			system("pause");
			p("\n\n");
			contador++;			
 			
	} while( c != 2);
	
}

void Crear_alta_area2(char z[],char w[]){
	
	apR = &cR;
	
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char fecha[20];
        char hora[15];
        strftime(fecha,20,"%d/%m/%y ",tlocal);
        strftime(hora,15,"%H:%M:%S",tlocal);
        
char dir_car []="E:\\Proyecto F\\altas_area2\\"; 
char archivo[70];
char ext[]=".txt";
int c;
FILE *fd ;      

		do {	
			if(cR == 10){
					system("cls");
     				printf("PERDONE, HAZ LLENADO LA BASE DE DATOS");
     				p("\n\n");
					system("pause");
     				break;
				}
			fflush(stdin);
			p("Alta paciente No. %i.",cR+1);
			p("\nNo.de cuenta: %i",cR+1);
			printf("\n %i. Nombre(completo): ",cR+1);
			gets(grupos[1].cliente[*apR].nombre);
			printf("%i. Telefono: ",contador+1);
			gets(grupos[1].cliente[*apR].tel);
			printf("\n");
			
			strcpy(archivo,dir_car);
			strcat(archivo,grupos[1].cliente[*apR].nombre);
			strcat(archivo,ext);
						
				fd= fopen(archivo,"wt");
				
				fprintf(fd,"\tAGENDA MEDICA\n");
				fprintf(fd,"Formato: ALTA\n");
				fprintf(fd,"Area Medica: %s\n",w);
				fprintf(fd,"Doctor: %s\n",z);
				fprintf(fd,"Fecha: %s\n",fecha);
				fprintf(fd,"Hora: %s\n\n",hora);
				fprintf(fd,"DATOS DEL PACIENTE:\n\n");
				fprintf(fd,"Numero de Cuenta: %i",cR+1);
				fprintf(fd,"\nNOMBRE: ");
				fwrite(grupos[1].cliente[*apR].nombre,1,strlen(grupos[1].cliente[*apR].nombre),fd);
				fprintf(fd,"\nTELEFONO: ");
				fwrite(grupos[1].cliente[*apR].tel,1,strlen(grupos[1].cliente[*apR].tel),fd);
				fclose(fd);
		
			printf("Deseas agregar mas pacientes? : 1)Si o 2)No\n");
			s("%i",&c);
			system("pause");
			p("\n\n");
			cR++;			
 			
	} while( c != 2); 
	
	
}

void Crear_archivo_P(char z[],char w[]){
	
	apP = &cP;
	
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char fecha[20];
        char hora[15];
        strftime(fecha,20,"%d/%m/%y ",tlocal);
        strftime(hora,15,"%H:%M:%S",tlocal);
        
char dir_car []="E:\\Proyecto F\\ALTAS_PEDIAT\\";
char archivo[70];
char ext[]=".txt";
int c;
FILE *fd ; 

		do {	
			if(cP == 10){
					system("cls");
     				printf("PERDONE, HAZ LLENADO LA BASE DE DATOS");
     				p("\n\n");
					system("pause");
     				break;
				}
			fflush(stdin);
			p("Alta paciente No. %i.",cP+1);
			p("\nNo. de cuenta: %i",cP+1);
			printf("\n %i. Nombre(completo): ",cP+1);
			gets(grupos[2].cliente[*apP].nombre);
			printf("%i. Telefono: ",cP+1);
			gets(grupos[2].cliente[*apP].tel);
			printf("\n");
			
			strcpy(archivo,dir_car);
			strcat(archivo,grupos[2].cliente[*apP].nombre);
			strcat(archivo,ext);
						
				fd= fopen(archivo,"wt");
				
				fprintf(fd,"\tAGENDA MEDICA\n");
				fprintf(fd,"Formato: ALTA\n");
				fprintf(fd,"Area Medica: %s\n",w);
				fprintf(fd,"Doctor: %s\n",z);
				fprintf(fd,"Fecha: %s\n",fecha);
				fprintf(fd,"Hora: %s\n\n",hora);
				fprintf(fd,"DATOS DEL PACIENTE:\n\n");
				fprintf(fd,"No.de Cuenta: %i",cP+1);
				fprintf(fd,"\nNOMBRE: ");
				fwrite(grupos[2].cliente[*apP].nombre,1,strlen(grupos[2].cliente[*apP].nombre),fd);
				fprintf(fd,"\nTELEFONO: ");
				fwrite(grupos[2].cliente[*apP].tel,1,strlen(grupos[2].cliente[*apP].tel),fd);
				fclose(fd);
		
			printf("Deseas agregar mas pacientes? : \n1)Si o 2)No\n");
			s("%i",&c);
			system("pause");
			p("\n\n");
			cP++;			
 			
	} while( c != 2); 
	




}

void Lista_Archivos(char d[]){
  DIR *dir;
  struct dirent *ent;
  dir = opendir (d);
  if (dir == NULL) 
    error("No puedo abrir el directorio");
  while ((ent = readdir (dir)) != NULL) 
    {
      	if ( (strcmp(ent->d_name, ".")!=0) && (strcmp(ent->d_name, "..")!=0) )
   	 	{
      		procesoArchivo(ent->d_name);
    	}
    
    }
  closedir (dir);
}
	
void error(const char *s){
  perror (s);
  
}

void procesoArchivo(char *archi){
  FILE *fich;
 
    printf ("%20c %2s \n",175,archi);
    
}

void Eliminar_archivo(char k[]){
	
	char archivo[100];
	char eliminar[30];
	char ext[]=".txt";
	int i;
	
		do {
			fflush(stdin);
			p("Ingresa el nombre(COMPLETO) del paciente que deseas borrar.\n");
			p("BORRAR: ");
			gets(eliminar);
			
			strcpy(archivo,k);
			strcat(archivo,eliminar);
			strcat(archivo,ext);
			
				if(remove(archivo)==0) 
        		printf("El archivo fue eliminado satisfactoriamente\n\n");
    		else
       			 printf("No se pudo eliminar el archivo\n\n");
	 	
			printf("Deseas agregar mas pacientes? : \n1)Si o 2)No\n");
			s("%i",&i);
			p("\n");
			
		}   while(i != 2);
	
}

void menu_eliminar(char k[],int seccion,char w[] ){
	
	int eleccion,rep,deshacer;
	
	char basura[100];
	char ext[]=".txt";
	
	
	p("Selecciona la opcion:\n");
	p("1) Borrar ingresando el numero de cuenta del paciente\n");
	p("2) Borrar ingresando el nombre del paciente\n");
	p("Seleccion: ");
	s("%i",&eleccion);
	
	switch(eleccion) {
		
			case 1:
					system("cls");
					p("\tBorrar ingresando el numero de cuenta del paciente\n");
					p("AREA: %s\n\n",w);
					
					do{
					
						fflush(stdin);
						p("Ingresa el numero de cuenta del paciente que deseas borrar.\n");
						p("BORRAR: ");
						s("%i",&deshacer);
						
						strcpy(basura,k);
						strcat(basura,grupos[seccion].cliente[deshacer-1].nombre);
						strcat(basura,ext);
						
						printf("\ncliente: %s\n",grupos[seccion].cliente[deshacer-1].nombre);
						if(remove(basura)==0) 
        						printf("El archivo fue eliminado satisfactoriamente\n\n");
    						else
       							 printf("No se pudo eliminar el archivo\n\n");
	 	
						printf("Deseas agregar mas pacientes? : \n1)Si o 2)No\n");
						s("%i",&rep);
						p("\n");
						
					}while(rep != 2);
						
			break;	
			
			case 2:
					system("cls");
					p("\tBorrar ingresando el nombre del paciente\n");
					p("AREA: %s\n\n",w);	
					Eliminar_archivo(k);
						
			break;	
			default:p("\nOpcion invalida\n");
					p("\n\n");
				
	}
	
	
}

void menu_consulta(int x, char dir_con[],char w[],char z[], int seccion){
	
	int num_c,o,rep;
	char archivo[70];
	char ext[]=".txt";
	FILE *fd;
	
	switch(x) {
			
			case 1:
					system("cls");
					p("\tCONSULTA ingresando el numero de cuenta del paciente\n");
					p("AREA: %s\n",w);
					p("DOCTOR: %s\n\n",z);
					
					do{
					
						fflush(stdin);
						p("Ingresa el numero de cuenta del paciente al que se le\nasignara una cita.\n");
						p("NO. DE CUENTA: ");
						s("%i",&num_c);
						
						strcpy(archivo,dir_con);
						strcat(archivo,grupos[seccion].cliente[num_c-1].nombre);
						strcat(archivo,ext);
					
						fd= fopen(archivo,"wt");
				
					fprintf(fd,"\tAGENDA MEDICA\n");
					fprintf(fd,"Formato: CONSULTA\n");
					fprintf(fd,"Area Medica: %s\n",w);
					fprintf(fd,"Doctor: %s\n",z);
					fprintf(fd,"DATOS DEL PACIENTE:\n\n");
					fprintf(fd,"No.de Cuenta: %i",num_c);
					fprintf(fd,"\nNOMBRE: ");
					fwrite(grupos[seccion].cliente[num_c-1].nombre,1,strlen(grupos[seccion].cliente[num_c-1].nombre),fd);
					fprintf(fd,"\nTELEFONO: ");
					fwrite(grupos[seccion].cliente[num_c-1].tel,1,strlen(grupos[seccion].cliente[num_c-1].tel),fd);
					fclose(fd);
					p("\n");
					
					system("pause");	
					
						printf("\nCliente: %s\n\n",grupos[seccion].cliente[num_c-1].nombre);
						
							fd= fopen(archivo,"rt");
							while((o=fgetc(fd))!= EOF){
								if(o=='\n'){
									
									p("\n");
									
								} else {
									
									putchar(o);
								}
								
							}
	 						
						printf("\n\nDeseas citar mas pacientes? : \n1)Si o 2)No\n");
						s("%i",&rep);
						p("\n");
						
					}while(rep != 2);
			
			break;
			
			case 2:
					system("cls");
					p("\tPara realizar esta accion es necesario saber el no.de cuenta..\n");
					
			break;
				
			default:p("\nOpcion invalida\n");
				
	}
	
}




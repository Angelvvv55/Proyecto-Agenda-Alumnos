#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

#define red     "\x1b[31m"
#define green   "\x1b[32m"
#define yellow  "\x1b[33m"
#define blue    "\x1b[34m"
#define magenta "\x1b[35m"
#define cyan    "\x1b[36m"
#define reset   "\x1b[30m"
#define backg   "\x1b[47m"

void pantalla();
int nip();
void cargando();
void capturar();
void mostrar();
void buscar();
void borrar();
void registrando();
void eliminando();
void gotoxy(int x, int y);
void test();
void buscarper();
void buscarsec();

int opt, cont=0, selec, band, selec2;
char search[80];
struct Registro{
 char nom[40], domi[40], frac[40], ciu[25], email[30], notas[80], sexo[10], car[5], esc[10], eng[2], emaile[30];
 int cp, phone, edad, sem, prom, code, credits, phonemer, promult;
}alumnos[10];

int main(){
   setlocale(LC_ALL,"");
   system("color 87");
   printf(backg"");
   cargando();
   if (nip() != 0){
    cargando();
    pantalla();
    cargando();
    do{
     system("cls");
     printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
     printf(yellow"////// Introduzca el número de la opción que desea utilizar //////" reset"\n\n******************************************************************\n\t\t\t 1. REGISTRAR ALUMNO\n\t\t\t 2. ELIMINAR ALUMNO\n\t\t\t 3. MOSTRAR ALUMNOS\n\t\t\t 4. BUSCAR ALUMNOS\n\t\t\t 5. SALIR\n******************************************************************\n\nIntroduzca su selección: ");
     scanf("%i",&opt);
     fflush(stdin);
     switch(opt){
     case 1:
      capturar();
      break;
     case 2:
      borrar();
      break;
     case 3:
      mostrar();
      break;
     case 4:
      buscar();
      break;
     case 5:
      system("cls");
      printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
      printf("\t\t¿Estás seguro que deseas salir?\n\n\t\t\t    1. "red"SI"reset"\n\t\t\t    2. NO\n\nIntroduzca su selección: ");scanf("%i",&opt);
      if (opt==1){
       system("cls");
       printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
       printf(yellow"\n******************************************************************\n\t\t   "reset"Presione "yellow"<ENTER>"reset" para salir.\n"yellow"******************************************************************\n\n"reset);
       return 0;
      }
      else{
       opt = 0;
      }
      break;
     case 333:
      test();
      break;
     default:
      system("cls");
      printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
      printf("\t\t\tOPCIÓN INEXISTENTE.");
      printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
      getch();
     }
    }while (opt != 5);
    return 0;
   }
   else{
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
    printf("\n\n\t\t\t Intentos Agotados.\n\n");
    printf(yellow"\n******************************************************************\n\t\t   "reset"Presione "yellow"<ENTER>"reset" para salir.\n"yellow"******************************************************************\n\n"reset);
    return 0;
   }
}

int nip(){
   int tries=0, nip;
   while (tries != 4){
     if (nip != 123){
       system("cls");
       if (tries != 0){
        system("cls");
        printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
        printf("\n\n\t\t\t ¡CLAVE INCORRECTA!\n\t\t\t   ["red"%i"reset"/3 intentos]",tries);
        Sleep(2000);
        system("cls");
       }
     printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
     printf("\n\n\n                       Escriba su clave: "); scanf("%i",&nip);
     if (nip != 123){
      tries = tries+1;
     }
     else{
        return 1;
     }
     }
   }
   if (tries == 4){
    return 0;
   }
}

void pantalla(){
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(cyan"\n\t\t\t      _______\n\t\t\t     |.-----.|\n\t\t\t     ||x . x||\n\t\t\t     ||_.-._||\n\t\t\t     `--)-(--`\n\t\t\t    __[=== o]___\n\t\t\t   |:::::::::::|\ \n\t\t\t   `-=========-`()");
  printf("\n\n                                                 VERSION 1.0\n                                             Autor: Angel Alvarez"reset);
  Sleep(8000);
}

void cargando(){
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema.\n                   "green"#"yellow"========================="reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema..\n                   "green"######"yellow"===================="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema...\n                   "green"#########"yellow"================="reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema.\n                   "green"#############"yellow"============="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema..\n                   "green"##################"yellow"========"reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema...\n                   "green"#######################"yellow"==="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                       Cargando Sistema.\n                   "green"#########################"yellow"="reset);
    Sleep(500);
    system("cls");
}

void registrando(){
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando.\n                   "green"#"yellow"========================="reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando..\n                   "green"######"yellow"===================="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando...\n                   "green"#########"yellow"================="reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando.\n                   "green"#############"yellow"============="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando..\n                   "green"##################"yellow"========"reset);
    Sleep(500);
    system("cls");
    printf(yellow"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando...\n                   "green"#######################"yellow"==="reset);
    Sleep(500);
    system("cls");
    printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "yellow"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Registrando.\n                   "green"#########################"yellow"="reset);
    Sleep(500);
    system("cls");
}

void eliminando(){
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando.\n                   "red"#"reset"=========================");
    Sleep(500);
    system("cls");
    printf("##################################################################\n######################### AGENDA ALUMNOS "red"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando..\n                   "red"######"reset"====================");
    Sleep(500);
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando...\n                   "red"#########"reset"=================");
    Sleep(500);
    system("cls");
    printf("##################################################################\n######################### AGENDA ALUMNOS "red"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando.\n                   "red"#############"reset"=============");
    Sleep(500);
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando..\n                   "red"##################"reset"========");
    Sleep(500);
    system("cls");
    printf("##################################################################\n######################### AGENDA ALUMNOS "red"#########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando...\n                   "red"#######################"reset"===");
    Sleep(500);
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(reset"\n\n\n                          Eliminando.\n                   "red"#########################"reset"=");
    Sleep(500);
    system("cls");
}

void capturar(){
 if(cont<10){
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(yellow"//////////////// Introduzca los datos del alumno ////////////////\n\n");
  printf(magenta"******************************************************************\n\t\t\t    "reset"ALUMNO %i/10\n"magenta"******************************************************************"reset,cont+1);
  printf("\nNOMBRE: ");scanf("%s",&alumnos[cont].nom);
  printf("\nEDAD: ");scanf("%i",&alumnos[cont].edad);
  printf("\nSEXO: ");scanf("%s",&alumnos[cont].sexo);
  printf("\nDOMICILIO: ");scanf("%s",&alumnos[cont].domi);
  fflush(stdin);
  printf("\nFRACCIONAMIENTO: ");scanf("%s",&alumnos[cont].frac);
  printf("\nC.P: ");scanf("%i",&alumnos[cont].cp);
  printf("\nCIUDAD: ");scanf("%s",&alumnos[cont].ciu);
  printf("\nTELÉFONO: ");scanf("%i",&alumnos[cont].phone);
  printf("\nE_MAIL: ");scanf("%s",&alumnos[cont].email);
  printf("\nNOTAS: ");scanf("%s",&alumnos[cont].notas);
  fflush(stdin);
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(yellow"//////////////// Introduzca los datos del alumno ////////////////\n\n");
  printf(magenta"******************************************************************\n\t\t\t "reset"DATOS ACADÉMICOS\n"magenta"******************************************************************"reset);
  printf("\nCÓDIGO: ");scanf("%i",&alumnos[cont].code);
  printf("\nCARRERA: ");scanf("%s",&alumnos[cont].car);
  printf("\nSEMESTRE: ");scanf("%i",&alumnos[cont].sem);
  printf("\nESCUELA: ");scanf("%s",&alumnos[cont].esc);
  printf("\nTELÉFONO EMERGENCIA: ");scanf("%i",&alumnos[cont].phonemer);
  printf("\nE_MAIL INSTITUCIONAL: ");scanf("%s",&alumnos[cont].emaile);
  printf("\nPROMEDIO GENERAL: ");scanf("%i",&alumnos[cont].prom);
  printf("\nPROMEDIO ÚLTIMO SEMESTRE: ");scanf("%i",&alumnos[cont].promult);
  printf("\nCREDITOS: ");scanf("%i",&alumnos[cont].credits);
  printf("\nNIVEL INGLÉS: ");scanf("%s",&alumnos[cont].eng);
  fflush(stdin);
  registrando();
  printf(green"##################################################################\n######################### "reset"AGENDA ALUMNOS "green"#########################\n##################################################################\n\n"reset);
  printf("\t\tALUMNO "yellow"%s"reset" REGISTRADO CORRECTAMENTE.",alumnos[cont].nom);
  printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
  getch();
  cont++;
 }
 else{
  printf(red"##################################################################\n############################ "reset"REGISTRAR "red"###########################\n##################################################################\n\n"reset);
  printf("\t\t NO HAY ESPACIO DISPONIBLE...");
  printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
  getch();
 }
}

void mostrar(){
 if (cont != 0){
  for(int i=0;i<cont;i++){
    system("cls");
    printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(magenta"******************************************************************\n\t\t\t    "reset"ALUMNO %i/%i\n",i+1,cont);
    printf("\t\t\t DATOS PERSONALES\n"magenta"******************************************************************\n");
    printf("* "reset"NOMBRE: %s",alumnos[i].nom);
    printf(magenta"\n* "reset"EDAD: %i",alumnos[i].edad);
    printf(magenta"\n* "reset"SEXO: %s",alumnos[i].sexo);
    printf(magenta"\n* "reset"DOMICILIO: %s",alumnos[i].domi);
    printf(magenta"\n* "reset"FRACCIONAMIENTO: %s",alumnos[i].frac);
    printf(magenta"\n* "reset"C.P: %i",alumnos[i].cp);
    printf(magenta"\n* "reset"CIUDAD: %s",alumnos[i].ciu);
    printf(magenta"\n* "reset"TELÉFONO: %i",alumnos[i].phone);
    printf(magenta"\n* "reset"E_MAIL: %s",alumnos[i].email);
    printf(magenta"\n* "reset"NOTAS: %s",alumnos[i].notas);
    printf(magenta"\n******************************************************************\n\t\t\t "reset"DATOS ACADÉMICOS\n"magenta"******************************************************************\n");
    printf("* "reset"CÓDIGO: %i",alumnos[i].code);
    printf(magenta"\n* "reset"CARRERA: %s",alumnos[i].car);
    printf(magenta"\n* "reset"SEMESTRE: %i",alumnos[i].sem);
    printf(magenta"\n* "reset"ESCUELA: %s",alumnos[i].esc);
    printf(magenta"\n* "reset"TELÉFONO EMERGENCIA: %i",alumnos[i].phonemer);
    printf(magenta"\n* "reset"E_MAIL INSTITUCIONAL: %s",alumnos[i].emaile);
    printf(magenta"\n* "reset"PROMEDIO GENERAL: %i",alumnos[i].prom);
    printf(magenta"\n* "reset"PROMEDIO ÚLTIMO SEMESTRE: %i",alumnos[i].promult);
    printf(magenta"\n* "reset"CRÉDITOS: %i",alumnos[i].credits);
    printf(magenta"\n* "reset"NIVEL INGLÉS: %s",alumnos[i].eng);
    printf(magenta"\n******************************************************************"reset);
    printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
    getch();
  }
 }
 else{
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
    printf("\t\t     NO HAY ALUMNOS REGISTRADOS...");
    printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
    getch();
 }
}

void buscar(){
 int optbusc;
 system("cls");
 printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
 printf(yellow"////// Introduzca el número de la opción que desea utilizar //////" reset"\n\n******************************************************************\n\t\t 1. BÚSQUEDA DE DATOS COMPLETOS\n\t\t 2. BÚSQUEDA POR CAMPO\n******************************************************************\n\nIntroduzca su selección: ");
 scanf("%i",&optbusc);
 if (optbusc == 1){
    buscarper();
 }
 else if (optbusc == 2){
    buscarsec();
 }
 else{
    system("cls");
    printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
    printf("\t\t\tOPCIÓN INEXISTENTE.");
    printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
    getch();
 }
}

void buscarper(){
 if (cont != 0){
  int band = 0;
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(yellow"////// Introduzca el nombre del alumno que desea encontrar //////" reset"\n\nIntroduzca su búsqueda: ");scanf("%s",&search);
  for(int i=0;i<cont;i++){
   if((strcmp(alumnos[i].nom,search))==0){
    system("cls");
    printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
    printf(" Resultados para "yellow"%s"reset":",search);
    printf(magenta"\n******************************************************************\n");
    printf("\t\t\t "reset"DATOS PERSONALES\n"magenta"******************************************************************\n");
    printf("* "reset"NOMBRE: %s",alumnos[i].nom);
    printf(magenta"\n* "reset"EDAD: %i",alumnos[i].edad);
    printf(magenta"\n* "reset"SEXO: %s",alumnos[i].sexo);
    printf(magenta"\n* "reset"DOMICILIO: %s",alumnos[i].domi);
    printf(magenta"\n* "reset"FRACCIONAMIENTO: %s",alumnos[i].frac);
    printf(magenta"\n* "reset"C.P: %i",alumnos[i].cp);
    printf(magenta"\n* "reset"CIUDAD: %s",alumnos[i].ciu);
    printf(magenta"\n* "reset"TELÉFONO: %i",alumnos[i].phone);
    printf(magenta"\n* "reset"E_MAIL: %s",alumnos[i].email);
    printf(magenta"\n* "reset"NOTAS: %s",alumnos[i].notas);
    printf(magenta"\n******************************************************************\n\t\t\t "reset"DATOS ACADÉMICOS\n"magenta"******************************************************************\n");
    printf("* "reset"CÓDIGO: %i",alumnos[i].code);
    printf(magenta"\n* "reset"CARRERA: %s",alumnos[i].car);
    printf(magenta"\n* "reset"SEMESTRE: %i",alumnos[i].sem);
    printf(magenta"\n* "reset"ESCUELA: %s",alumnos[i].esc);
    printf(magenta"\n* "reset"TELÉFONO EMERGENCIA: %i",alumnos[i].phonemer);
    printf(magenta"\n* "reset"E_MAIL INSTITUCIONAL: %s",alumnos[i].emaile);
    printf(magenta"\n* "reset"PROMEDIO GENERAL: %i",alumnos[i].prom);
    printf(magenta"\n* "reset"PROMEDIO ÚLTIMO SEMESTRE: %i",alumnos[i].promult);
    printf(magenta"\n* "reset"CRÉDITOS: %i",alumnos[i].credits);
    printf(magenta"\n* "reset"NIVEL INGLÉS: %s",alumnos[i].eng);
    band = 1;
    printf(magenta"\n******************************************************************"reset);
    printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
    getch();
    system("cls");
   }
  }
  if(band == 0){
   system("cls");
   printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
   printf("\n\t\t     EL ALUMNO"yellow" %s"reset" NO EXISTE...",search);
   printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
   getch();
  }
 }
 else{
  system("cls");
  printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
  printf("\t\t     NO HAY ALUMNOS REGISTRADOS...");
  printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
  getch();
 }
}

void borrar(){
 if (cont != 0){
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(" Lista de alumnos registrados:");
  for(int i=0;i<cont;i++){
    printf("\n %i. %s",i+1,alumnos[i].nom);
  }
  printf("\n\n¿Qué alumno desea "red"eliminar"reset"? (1-%i): ",cont);scanf("%i",&selec);
  system("cls");
  printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
  printf("\n\t¿Está seguro que desea "red"eliminar"reset" al alumno "yellow"%s"reset,alumnos[selec-1].nom);
  printf("?\n\n\t\t\t    1. "red"SI"reset"\n\t\t\t    2. NO\n\nIntroduzca su selección: ");scanf("%i",&selec2);
  fflush(stdin);
  if (selec2 == 1){
   eliminando();
   printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
   printf("\t\tALUMNO"yellow" %s"red" ELIMINADO "reset"CORRECTAMENTE.",alumnos[selec-1].nom);
   for(int i=(selec-1);i<cont;i++){
    strcpy(alumnos[i].nom,alumnos[i+1].nom);
    alumnos[i].edad = alumnos[i+1].edad;
    strcpy(alumnos[i].sexo,alumnos[i+1].sexo);
    strcpy(alumnos[i].domi,alumnos[i+1].domi);
    strcpy(alumnos[i].frac,alumnos[i+1].frac);
    alumnos[i].cp = alumnos[i+1].cp;
    strcpy(alumnos[i].ciu,alumnos[i+1].ciu);
    alumnos[i].phone = alumnos[i+1].phone;
    strcpy(alumnos[i].email,alumnos[i+1].email);
    strcpy(alumnos[i].notas,alumnos[i+1].notas);
    alumnos[i].code = alumnos[i+1].code;
    strcpy(alumnos[i].car,alumnos[i+1].car);
    alumnos[i].sem = alumnos[i+1].sem;
    strcpy(alumnos[i].esc,alumnos[i+1].esc);
    alumnos[i].prom = alumnos[i+1].prom;
    alumnos[i].phonemer = alumnos[i+1].phonemer;
    strcpy(alumnos[i].emaile,alumnos[i+1].emaile);
    alumnos[i].promult = alumnos[i+1].promult;
    alumnos[i].credits = alumnos[i+1].credits;
    strcpy(alumnos[i].eng,alumnos[i+1].eng);
   }
   cont = cont-1;
   printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
   getch();
  }
 }
 else{
  system("cls");
  printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
  printf("\t\t     NO HAY ALUMNOS REGISTRADOS...");
  printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
  getch();
 }
}

void gotoxy(int x, int y){
   HANDLE hCon;
   hCon=GetStdHandle(STD_OUTPUT_HANDLE);
   COORD dwPos;
   dwPos.X = x;
 dwPos.Y = y;
 SetConsoleCursorPosition(hCon, dwPos);
}

void test(){
 int i;
 system("cls");
 printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
 for(i=5;i<14;i++){
    Sleep(50);
    gotoxy(3,i);
    printf("%c",219);
 }
 for(i=4;i<40;i++){
    Sleep(50);
    gotoxy(i,5);
    printf("%c",223);
 }
 for(i=5;i<14;i++){
    Sleep(50);
    gotoxy(40,i);
    printf("%c",219);
 }
 for(i=4;i<40;i++){
    Sleep(50);
    gotoxy(i,13);
    printf("%c",220);
 }
 gotoxy(6,7);
 printf(" Prueba de tabla \n\n\n\n \n\n \n\n \n\n \n\n  \n\n \n\n \n\n ");
 gotoxy(6,9);
 printf(" Nombre del primer alumno: %s  \n\n\n\n \n\n \n\n \n\n \n\n  \n\n \n\n \n\n ",alumnos[1].nom);
 gotoxy(6,11);
 printf(" Codigo del primer alumno: %i  \n\n\n\n \n\n \n\n \n\n \n\n  \n\n \n\n \n\n ",alumnos[1].code);
 gotoxy(0,15);
 printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
 getch();
}

void buscarsec(){
 system("cls");
 int optsec, optsec2, code;
 if (cont != 0){
  int band = 0;
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(yellow"////// Introduzca el nombre del alumno que desea encontrar //////" reset"\n\nIntroduzca su búsqueda: ");scanf("%s",&search);
  system("cls");
  printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
  printf(yellow"////// Introduzca el número de la opción que desea utilizar //////" reset"\n\n******************************************************************\n\t\t\t1. DATOS PERSONALES\n\t\t\t2. DATOS ACADÉMICOS\n******************************************************************\n\nIntroduzca su selección: ");
  scanf("%i",&optsec);
  if (optsec == 1){
    for(int i=0;i<cont;i++){
     if((strcmp(alumnos[i].nom,search))==0){
      system("cls");
      band = 1;
      printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
      printf(yellow"// Introduzca el número del campo personal que desea encontrar //" reset"\n\n******************************************************************");
      printf("\n\t\t\t 1. EDAD\n\t\t\t 2. SEXO\n\t\t\t 3. DOMICILIO\n\t\t\t 4. FRACCIONAMIENTO\n\t\t\t 5. C.P\n\t\t\t 6. CIUDAD\n\t\t\t 7. TELÉFONO\n\t\t\t 8. E_MAIL\n\t\t\t 9. NOTAS\n******************************************************************\n\nIntroduzca su selección: ");
      scanf("%i",&optsec2);
      system("cls");
      printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
      printf(" Resultados para "yellow"%s"reset":",search);
      printf(magenta"\n******************************************************************"reset);
      int inexs = 0;
      switch(optsec2){
      case 1:
       printf(magenta"\n* "reset"EDAD: %i",alumnos[i].edad);
       break;
      case 2:
       printf(magenta"\n* "reset"SEXO: %s",alumnos[i].sexo);
       break;
      case 3:
       printf(magenta"\n* "reset"DOMICILIO: %s",alumnos[i].domi);
       break;
      case 4:
       printf(magenta"\n* "reset"FRACCIONAMIENTO: %s",alumnos[i].frac);
       break;
      case 5:
       printf(magenta"\n* "reset"C.P: %i",alumnos[i].cp);
       break;
      case 6:
       printf(magenta"\n* "reset"CIUDAD: %s",alumnos[i].ciu);
       break;
      case 7:
       printf(magenta"\n* "reset"TELÉFONO: %i",alumnos[i].phone);
       break;
      case 8:
       printf(magenta"\n* "reset"E_MAIL: %s",alumnos[i].email);
       break;
      case 9:
       printf(magenta"\n* "reset"NOTAS: %s",alumnos[i].notas);
       break;
      default:
       inexs = 1;
       system("cls");
       printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
       printf("\t\t\tOPCIÓN INEXISTENTE.");
       printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
       getch();
      }
      if (inexs==0){
       printf(magenta"\n******************************************************************"reset);
       printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
       getch();
      }
     }
    }
     if(band == 0){
      system("cls");
      printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
      printf("\n\t\t     EL ALUMNO"yellow" %s"reset" NO EXISTE...",search);
      printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
      getch();
     }
  }
  else if (optsec == 2){
    for(int i=0;i<cont;i++){
     if((strcmp(alumnos[i].nom,search))==0){
      system("cls");
      band = 1;
      printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
      printf(yellow"// Introduzca el número del campo académico que desea encontrar //" reset"\n\n******************************************************************");
      printf("\n\t\t\t 1. CÓDIGO\n\t\t\t 2. CARRERA\n\t\t\t 3. SEMESTRE\n\t\t\t 4. ESCUELA\n\t\t\t 5. TELÉFONO EMERGENCIA\n\t\t\t 6. E_MAIL INSTITUCIONAL\n\t\t\t 7. PROMEDIO GENERAL\n\t\t\t 8. PROMEDIO ULT. SEM.\n\t\t\t 9. CRÉDITOS\n\t\t\t 10. NIVEL INGLÉS\n******************************************************************\n\nIntroduzca su selección: ");
      scanf("%i",&optsec2);
      system("cls");
      printf("##################################################################\n######################### AGENDA ALUMNOS #########################\n##################################################################\n\n");
      printf(" Resultados para "yellow"%s"reset":",search);
      printf(magenta"\n******************************************************************"reset);
      int inexs = 0;
      switch(optsec2){
      case 1:
       printf(magenta"\n* "reset"CÓDIGO: %i",alumnos[i].code);
       break;
      case 2:
       printf(magenta"\n* "reset"CARRERA: %s",alumnos[i].car);
       break;
      case 3:
       printf(magenta"\n* "reset"SEMESTRE: %i",alumnos[i].sem);
       break;
      case 4:
       printf(magenta"\n* "reset"ESCUELA: %s",alumnos[i].esc);
       break;
      case 5:
       printf(magenta"\n* "reset"TELÉFONO EMERGENCIA: %i",alumnos[i].phonemer);
       break;
      case 6:
       printf(magenta"\n* "reset"E_MAIL INSTITUCIONAL: %s",alumnos[i].emaile);
       break;
      case 7:
       printf(magenta"\n* "reset"PROMEDIO GENERAL: %i",alumnos[i].prom);
       break;
      case 8:
       printf(magenta"\n* "reset"PROMEDIO ÚLTIMO SEMESTRE: %i",alumnos[i].promult);
       break;
      case 9:
       printf(magenta"\n* "reset"CRÉDITOS: %i",alumnos[i].credits);
       break;
      case 10:
       printf(magenta"\n* "reset"NIVEL INGLÉS: %s",alumnos[i].eng);
       break;
      default:
       inexs = 1;
       system("cls");
       printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
       printf("\t\t\tOPCIÓN INEXISTENTE.");
       printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
       getch();
      }
      if (inexs==0){
       printf(magenta"\n******************************************************************"reset);
       printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
       getch();
      }
     }
    }
    if(band == 0){
      system("cls");
      printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
      printf("\n\t\t     EL ALUMNO"yellow" %s"reset" NO EXISTE...",search);
      printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
      getch();
     }
  }
  else{
      system("cls");
      printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
      printf("\t\t\tOPCIÓN INEXISTENTE.");
      printf("\n\n******************************************************************\n                  Presione <ENTER> para continuar.\n******************************************************************\n\n");
      getch();
  }
 }
 else{
  system("cls");
  printf(red"##################################################################\n######################### "reset"AGENDA ALUMNOS "red"#########################\n##################################################################\n\n"reset);
  printf("\t\t     NO HAY ALUMNOS REGISTRADOS...");
  printf(yellow"\n\n******************************************************************\n                  "reset"Presione "yellow"<ENTER>"reset" para continuar.\n"yellow"******************************************************************\n\n"reset);
  getch();
 }
}

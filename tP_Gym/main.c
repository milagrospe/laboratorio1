#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define USUARIO "diego"
#define CLAVE "1234"
#define DIM 80

int main()
{
    system("COLOR 02");
    char usuario[DIM + 1];
    char clave [DIM + 1];
    int intento = 0;
    int ingresa = 0;
    char caracter;
    int i = 0;

    do
    {
        int i = 0;
        system("cls");
        printf("\n\t\t\t INICIO DE SESION\n");
        printf("\t\t\t==================\n");
        printf("\n\tUSUARIO:");
        gets(usuario);
        printf("\tCLAVE: ");

        while(caracter = getch())
        {
            if(caracter==13)
            {
                clave[i]= '\0';
                break;
            }
            else if (caracter==8)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else
            {
                if(i<DIM)
                {
                    printf("*");
                    clave[i] = caracter;
                    i++;
                }
            }

       }


     printf("\n\tClave leida: %s\n",clave);
    if(strcmp(usuario, USUARIO)==0 && strcmp(clave,CLAVE )==0)
    {
        ingresa = 1;

    }
    else
    {

        printf("\n\tUsuario y clave son incorrectas\n\n");
        intento ++;
        system("pause");
    }



}
while(intento <3&& ingresa == 0);

if(ingresa==1)
{
    printf("\n\t======================\n");
    printf("\n\tBienvenido al Sistema!\n");
    printf("\n\t======================\n");
}
else
{
    printf("\n\tUsted ha sobrepasado el numero maximo de intentos permitidos\n");
}


return 0;
}



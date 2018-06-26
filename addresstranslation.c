#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])
{
    printf("\n ----Traducción de Dirección Virtual——\n”);
    char *virtualaddress;
    virtualaddress=argv[1];

    printf("\n Dirección Virtual: %s\n",virtualaddress);
    printf("\n Estado de la Llamada al Sistema (addresstranslation): %s",addresstranslation(virtualaddress));
    exit();
}
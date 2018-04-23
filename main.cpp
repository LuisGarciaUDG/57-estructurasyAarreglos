/*
Programa_57

Uso de estructuras o registros

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 9 de mayo de 2015
*/

#include <iostream>
#include <windows.h>

using namespace std;

struct vehiculo
{
    char marca [40], linea[30], color [25];
    int modelo;
}carro[5];

int cont=0;

void capturar()
{
    if (cont<5){

        cout<<"\n\n";

        cout<<"\tMarca:          ";
        cin>>carro[cont].marca;
        cin.ignore();
        cout<<"\tLinea:          ";
        cin>>carro[cont].linea;
        cin.ignore();
        cout<<"\tColor:          ";
        cin>>carro[cont].color;
        cin.ignore();
        cout<<"\tModelo:         ";
        cin>>carro[cont].modelo;
        cin.ignore();

        cont++;
    }
    else{
        cout<<"\n\tNo hay espacio disponible..."; system ("pause");
    }
}

void mostrar()
{
    if (cont!=0){

        for (int i=0; i<cont; i++){

        cout<<"\n\tMarca:          "<<carro[i].marca;
        cout<<"\n\tLinea:          "<<carro[i].linea;
        cout<<"\n\tColor:          "<<carro[i].color;
        cout<<"\n\tModelo:         "<<carro[i].modelo;
        cout<<"\n\n\t\t"; system ("pause");
        }//fin del for
    }//fin del if
    else{
        cout<<"\n\tEl arreglo esta vacio...\n\n\t"; system ("pause");
    }
}

void buscar()
{
    bool band=false;
    if (cont!=0){

        char comp[30];

        cout<<"\n\n\tDame la linea a buscar: ";
        cin>>comp;

        for (int i=0; i<cont; i++){

            if (strcmp(comp, carro[i].linea)==0){

            cout<<"\n\tMarca:          "<<carro[i].marca;
            //cout<<"\n\tLinea:          "<<carro[i].linea;
            cout<<"\n\tColor:          "<<carro[i].color;
            cout<<"\n\tModelo:         "<<carro[i].modelo;
            cout<<"\n\n\t\t"; system ("pause");
            band=true;
            }//fin del if de comparacion
        }//fin del for
    }//fin del if
    if(band==false){
        cout<<"\n\tEl dato es inexistente...\n\n\t"; system ("pause");
    }
}

int main()
{
    int opc;

    do{
        system ("cls");
    cout<<"\n\tEstructuras o registros con arreglos\n";
    cout<<"\n\t1.-Capturar \n\t2.-Mostrar \n\t3.-Buscar \n\t4.-Salir \n";
    cout<<"\n\tElige una opcion --> ";
    cin>>opc;

    if(opc==1){
        capturar();
    }
    if(opc==2){
        mostrar();
    }
    if(opc==3){
        buscar();
    }
    if(opc==4){
        cout<<"\n\n\tHa elegido salir... \n\n\t\t";
    }
}while(opc!=4);

cout<<"\n\n\t\t";
system ("pause");

    return 0;
}

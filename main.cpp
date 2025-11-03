#include <iostream>
using namespace std;

void printMensaje (int edad, int opcion, string peliculas [4]){
    if (edad < 18){
        if (opcion == 4){ 
            cout <<"Lo sentimos no puede visualizar esta pelicula" << "\n";
        } else {
            cout << "Bienvenido, " + peliculas [opcion - 1] + "se esta cargando" << "\n";
        }

    } else {
        cout << "Bienvenido, " + peliculas [opcion - 1] + "se esta cargando" << "\n";
    
    }

}

int main (){
    int edad;
    int opcion;
    string peliculas [4] = {"Frozen", "Star wars", "Toy Story", "Pulp ficiton"};
    cout <<"Introduzca su edad " << "\n";
    cin >> edad;
    cout <<  "¿Que pelicula desea visualizar" << "\n";
    for (int i=0; i<4; i++) {
        cout << "Pulse " << i + 1 << " " + peliculas[i] << "\n";
    }
    cin >> opcion;
    printMensaje (edad, opcion, peliculas);
    cin.get();
    return 0;
    }
#include <iostream>
#include <string>

void printMensaje(int edad, int opcion, std::string peliculas[4]) {
    if (opcion < 1 || opcion > 4) {
        std::cout << "Opción inválida\n";
        return;
    }

    if (edad < 18 && opcion == 4) {
        std::cout << "Lo sentimos, no puede visualizar esta película\n";
    } else {
        std::cout << "Bienvenido, "
                  << peliculas[opcion - 1]
                  << " se está cargando\n";
    }
}

int main() {
    int edad;
    int opcion;

    std::string peliculas[4] = {
        "Frozen",
        "Star Wars",
        "Toy Story",
        "Pulp Fiction"
    };

    std::cout << "Introduzca su edad:\n";
    std::cin >> edad;

    std::cout << "¿Qué película desea visualizar?\n";

    for (int i = 0; i < 4; i++) {
        std::cout << i + 1 << " - " << peliculas[i] << "\n";
    }

    std::cin >> opcion;

    printMensaje(edad, opcion, peliculas);

    return 0;
}

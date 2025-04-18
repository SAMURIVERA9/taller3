#include <iostream>
using namespace std;

int main() {
    string vertices[100], caras[100];
    int v_count = 0, c_count = 0;
    int opcion;
    
    while (true) {
        cout << "\n1. Registrar vértices" << endl;
        cout << "2. Registrar caras" << endl;
        cout << "3. Imprimir la figura" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        if (opcion == 1) {
            cout << "Ingrese coordenadas del vértice (x y z): ";
            cin >> vertices[v_count];
            v_count++;
        } 
        else if (opcion == 2) {
            cout << "Ingrese los vértices que forman la cara (Ejemplo: 1 2): ";
            cin >> caras[c_count];
            c_count++;
        } 
        else if (opcion == 3) {
            cout << "\nEstructura de la figura:" << endl;
            for (int j = 0; j < v_count; j++) {
                cout << "v " << vertices[j] << endl;
            }
            for (int j = 0; j < c_count; j++) {
                cout << "f " << caras[j] << endl;
            }
        } 
        else {
            break;
        }
    }
    
    return 0;
}

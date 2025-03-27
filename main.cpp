#include <iostream>

using namespace std;

int main() {
    int max_vertices = 100, max_caras = 100;
    string vertices[100], caras[100];
    int v_count = 0, c_count = 0;
    int opcion;

    while (true) {
        cout << "\n1. Registrar vértices" << endl;
        cout << "2. Registrar caras" << endl;
        cout << "3. Imprimir la figura" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1 && v_count < max_vertices) {
            cout << "Ingrese vértice (Ejemplo: 1 0 1): ";
            getline(cin, vertices[v_count]);
            v_count++;
            cout << "Vértice registrado." << endl;
        } 
        else if (opcion == 2 && c_count < max_caras) {
            cout << "Ingrese cara (Ejemplo: 1 2): ";
            getline(cin, caras[c_count]);
            c_count++;
            cout << "Cara registrada." << endl;
        } 
        else if (opcion == 3) {
            cout << "\nEstructura de la figura:" << endl;
            for (int i = 0; i < v_count; i++) {
                cout << "v " << vertices[i] << endl;
            }
            for (int i = 0; i < c_count; i++) {
                cout << "f " << caras[i] << endl;
            }
        } 
        else if (opcion == 4) {
            cout << "Saliendo del programa." << endl;
            break;
        } 
    }

    return 0;
}

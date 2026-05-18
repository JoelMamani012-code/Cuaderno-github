#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string mensaje;
    vector<string> listaTareas;
    int N;
    
    while (true) {
        cout << "Usuario: ";
        getline(cin, mensaje);

        if (mensaje.find("hola") != string::npos) {
            cout << "Bot: Hola 👋 ¿En qué puedo ayudarte?" << endl;
        }
        else if (mensaje.find("tarea") != string::npos) {
            
            cout << "Bot: ¿Cuántas tareas deseas agregar?" << endl;
            cin >> N;
            cin.ignore(); // limpiar buffer

            for (int i = 0; i < N; i++) {
                string tarea;
                cout << "Bot: Ingresa la tarea: ";
                getline(cin, tarea);
                listaTareas.push_back(tarea);
            }

            cout << "Bot: Tus tareas son:" << endl;
            for (string t : listaTareas) {
                cout << "- " << t << endl;
            }
        }
        else if (mensaje.find("suma") != string::npos) {
            int A, B;
            cout << "Bot: Dime dos números:" << endl;
            cin >> A >> B;
            cin.ignore();

            cout << "Bot: La suma es " << (A + B) << endl;
        }
        else if (mensaje == "salir") {
            cout << "Bot: Adiós 👋" << endl;
            break;
        }
        else {
            cout << "Bot: No entiendo 😅 intenta con: hola, tarea o suma" << endl;
        }
    }

    return 0;
}
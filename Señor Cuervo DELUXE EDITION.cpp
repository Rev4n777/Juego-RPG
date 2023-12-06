#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
using namespace std;

// Función para mostrar el menú y obtener la elección del usuario
int mostrarMenu() {
    //PARTE 1
    int eleccion;
    cout << "\nBienvenido a señor Cuervo\n";
    cout << "\nReglas para sobrevivir:\n";
    cout << "\nSe educado\n";
    cout << "-----------------\n";
    cout << "El señor cuervo te invita a su casa:\n\nQue haces?\n";
    cout << "1. Decir si y entrar a su casa\n";
    cout << "2. Decir no y salir\n";
    cout << "3. No decir nada y alejarse\n";
    cout << "4. Entrar a la casa\n";
    cout << "5. Salir\n";
    cout << "?. ...\n";
    cout << "Elige una opción: ";
    cin >> eleccion;
    return eleccion;
}

int main() {
    int furia = 50; // Elemento recolectable inicial
    int eleccion;
    
    do {
        eleccion = mostrarMenu(); // Mostrar el menú y obtener la elección del usuario
         //PARTE 2
        switch(eleccion) {
            case 1:
                cout << "\nSe ve feliz y te deja entrar a su casa\n";
                furia -= 10;
                cout << "Furia del Señor cuervo: " << furia << ".\n";
                cout << "\n-----------------------------\n";
                cout << "\nEl señor cuervo se ofrece a hacer la cena. Te pregunta que te gustaria.\n";
                cout << "1. Pay de gusanos\n";
                cout << "2. Estofado de escarabajos\n";
                cout << "3. Sopa de ave\n";
                cout << "4. No decir nada\n";
                cout << "5. Salir\n";
                cout << "Elige una opción: ";
                cin >> eleccion;
                if (eleccion ==1 ) {
                     cout << "\nEl comera lo mismo\n\nTe dice que tienes buen gusto.\n";
                     furia -= 10;
                     cout << "Furia del Señor cuervo: " << furia << "%.\n";
                     cout << "\nTras la comida agradeces al señor cuervo y te despides.\n";
                     furia -= 20;
                     cout << "\nEl señor cuervo te muestra la salida y se despide de ti.\n";
                     furia -= 10;
                     cout << "Haz escapado\n";
                     cout << "Furia del Señor cuervo: " << furia << "%, tienes una relacion muy buena con el!.\n";
                     cout << "--En el menu un secreto te espera, introducir 6 es la respuesta--.\n";
                     return 0;
                } if (eleccion ==2 ) {
                    cout << "\nNo dice nada y te hace tu estofado\n";
                    cout << "Furia del Señor cuervo: " << furia << "%.\n";
                    cout << "\nTras la comida agradeces al señor cuervo y te despides.\n";
                     furia -= 10;
                     cout << "\nEl señor cuervo te muestra la salida y se despide de ti.\n";
                     furia -= 10;
                     cout << "Haz escapado\n";
                     cout << "Furia del Señor cuervo: " << furia << "%, tienes una relacion buena con el!.\n";
                     return 0;
                } if (eleccion == 3){
                    cout << "\nEl señor cuervo te mira directamente\n";
                    cout << "\nSe siente ofendido, odia como te comerias a su propia especie.\n";
                    cout << "\nSe avalanza hacia ti y te estrangula, para despues cocinarte y comerte.\n";
                    furia += 100;
                    cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                    return 0;
                } if (eleccion == 4){
                    cout << "\nEl señor cuervo te mira directamente\n";
                    furia += 40;
                    cout << "Furia del Señor cuervo: " << furia << "%.\n";
                    cout << "\nTras un tiempo te paras de la silla y te dirijes a la puerta.\n";
                     cout << "\nEl señor cuervo repudia tus acciones y te apuñala en la espalda 32 veces..\n";
                     furia += 100;
                    cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                    return 0;
                }  
                break;
                 //PARTE 2
            case 2:
             cout << "\nTe empuja dentro de todos modos.\n";
                cout << "Furia del Señor cuervo: " << furia << ".\n";
                cout << "\n-----------------------------\n";
                cout << "\nEl señor cuervo se ofrece a hacer la cena. Te pregunta que te gustaria.\n";
                cout << "1. Pay de gusanos\n";
                cout << "2. Estofado de escarabajos\n";
                cout << "3. Sopa de ave\n";
                cout << "4. No decir nada\n";
                cout << "5. Salir\n";
                cout << "Elige una opción: ";
                cin >> eleccion;
                if (eleccion ==1 ) {
                     cout << "\nEl comera lo mismo\n\nTe dice que tienes buen gusto.\n";
                     furia -= 10;
                     cout << "Furia del Señor cuervo: " << furia << "%.\n";
                     cout << "\nTras la comida agradeces al señor cuervo y te despides.\n";
                     furia -= 20;
                     cout << "\nEl señor cuervo te muestra la salida y se despide de ti.\n";
                     furia -= 10;
                     cout << "Haz escapado\n";
                     cout << "Furia del Señor cuervo: " << furia << "%, tienes una relacion muy buena con el!.\n";
                     return 0;
                } if (eleccion ==2 ) {
                    cout << "\nNo dice nada y te hace tu estofado\n";
                    cout << "Furia del Señor cuervo: " << furia << "%.\n";
                    cout << "\nTras la comida agradeces al señor cuervo y te despides.\n";
                     furia -= 10;
                     cout << "\nEl señor cuervo te muestra la salida y se despide de ti.\n";
                     furia -= 10;
                     cout << "Haz escapado\n";
                     cout << "Furia del Señor cuervo: " << furia << "%, tienes una relacion buena con el!.\n";
                     return 0;
                } if (eleccion == 3){
                    cout << "\nEl señor cuervo te mira directamente\n";
                    cout << "\nSe siente ofendido, odia como te comerias a su propia especie.\n";
                    cout << "\nSe avalanza hacia ti y te estrangula, para despues cocinarte y comerte.\n";
                    furia += 100;
                    cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                    return 0;
                } if (eleccion == 4){
                    cout << "\nEl señor cuervo te mira directamente\n";
                    furia += 40;
                    cout << "Furia del Señor cuervo: " << furia << "%.\n";
                    cout << "\nTras un tiempo te paras de la silla y te dirijes a la puerta.\n";
                     cout << "\nEl señor cuervo repudia tus acciones y te apuñala en la espalda 32 veces..\n";
                     furia += 100;
                    cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                    return 0;
                }  
                break;
            case 3:
             //PARTE 3
             cout << "\nEl señor cuervo te mira directamente mientras te alejas.\n";
             cout << "\nDepronto escuchas pisadas detras de ti.\n\nQue haces?.\n";
             cout << "1. Correr\n";
                cout << "2. Detenerse y voltear atras  \n";
                cout << "3. Gritar\n";
                cout << "4. Confrontarlo (Pelear por tu vida)\n";
                cout << "5. Salir\n";
                cout << "Elige una opción: ";
                 cin >> eleccion;
                 if (eleccion ==1 ) {
                     cout << "\nEl Señor cuervo esta detras de ti.\n\nCorres lo mas rapido que puedes\n De pronto caes en un rizco.\n";
                     cout << "Sin embargo, el señor cuervo te agarra justo a tiempo y te salva\n";
                     cout << "\nLe agradeces al Sr cuervo, el te dice que has tirado tu billetera\n Te la entrega, para despues despedirse.\n";
                     furia -= 30;
                     cout << "Furia del Señor cuervo: " << furia << "%, tienes una relacion neutral con el!.\n";
                     return 0;
                 } 
                if (eleccion ==2 ) {
                     cout << "\nEl Señor cuervo esta detras de ti.\n\nTe dice que has tirado tu billetera\n Te la entrega, para despues despedirse.\n";
                     cout << "Haz escapado\n";
                     cout << "Furia del Señor cuervo: " << furia << "%, Apesar de tener una mala relacion, es un caballero!.\n";
                     return 0;
                } if (eleccion ==3 ) {
                     cout << "\nEl Señor cuervo esta detras de ti.\n\nNo tolerará este comportamiento\n Te ahorca.\n";
                      cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                }  if (eleccion ==4 ) {
                     furia += 200;
                     cout << "\nESTA FURIOSO!.\n\nTe ata a un arbol y arranca tus órganos\n";
                     cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                break;
                break;
                 //PARTE 4
            case 4:
            cout << "--------------------------------\n";
             cout << "\nEl señor cuervo te detiene antes de entrar.\n";
             cout << "\nOdia tu falta de modales y te empuja lejos de su casa.\n";
             furia += 40;
             cout << "Furia del Señor cuervo: " << furia << "%.\n";
             cout << "--------------------------------\n";
             cout << "\nEl señor cuervo te mira directamente mientras te alejas.\n";
             cout << "\nDepronto escuchas pisadas detras de ti.\n\nQue haces?.\n";
             cout << "1. Correr\n";
                cout << "2. Detenerse y voltear atras  \n";
                cout << "3. Gritar\n";
                cout << "4. Confrontarlo (Pelear por tu vida)\n";
                cout << "5. Salir\n";
                cout << "Elige una opción: ";
                 cin >> eleccion;
                 if (eleccion ==1 ) {
                     cout << "Corres lo mas rapido que puedes, antes de tropesar y caer en un rizco \n";
                      cout << "\nHaz muerto!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                 } 
                if (eleccion ==2 ) {
                     cout << "\nEl Señor cuervo esta detras de ti.\n\nSe avalanza sobre ti y te arranca las extremidades\n";
                     cout << "Haz escapado\n";
                     cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                break;
                } 
                if (eleccion ==3 ) {
                     cout << "\nEl Señor cuervo esta detras de ti.\n\nSe avalanza sobre ti y te arranca las extremidades\n";
                     cout << "Haz escapado\n";
                     cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                break;
                } 
                if (eleccion ==4 ) {
                     furia += 200;
                     cout << "\nESTA FURIOSO!.\n\nTe ata a un arbol y arranca tus órganos\n";
                     cout << "\nHaz sido asesinado!\n";
                     cout << "\nFin del juego\n";
                    cout << "Lograste enfuerezer al Sr Cuevo un: " << furia << "%.\n";
                     return 0;
                break;
                } 
                break;
            case 5:
                // Salir del programa
                cout << "\nSaliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                cout << "\nOpción inválida. Por favor, elige una opción válida.\n";
                break;
                
                case 6:
                 cout << "\n...\n";
                 sleep(4);
                 cout << "\nHe visto todos tus movimientos...\n";
                 sleep(4);
                 cout << "\nTodas tus decisiones...\n";
                 sleep(4);
                 cout << "\nObservandote todo el tiempo...\n";
                 sleep(3);
                 cout << "\nMe encontraste...\n";
                 sleep(2);
                 cout << "\nFelicidades...\n";
                  sleep(3);
                  cout << "\nYo tambien te encontre...\n";
                  sleep(3);
                  cout << "\nDate la vuelta...\n";
                  sleep(3);
                  cout << "\nY dame la mano.\n";
                  cout << "\n:>\n";
                  return 0;
            
        }
    } 
}
while (eleccion != 5); // Continuar hasta que el usuario elija salir (opción 5)
    
    return 0;
}

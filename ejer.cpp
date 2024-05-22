#include <iostream>
using namespace std;
int main()
{
     // solicite al usuario las notas y el promedio
    float nota[6];
    float promedio;

    cout << "el siguiente programa solicita las notas y saca el promedio\n ";

    for(int i = 0; i<6; i++)
    {
        cout << "ingrese su nota" << i + 1 << ":";
        cin >> nota[i];
        promedio = promedio + nota[i];
        
    }

    promedio = promedio/6;
    cout << "el promedio de las notas es: " <<promedio;

    return 0;


}

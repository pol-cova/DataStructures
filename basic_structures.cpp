//
// Created by Paul Contreras on 24/01/24.
//
#include <iostream>
#include <locale>
// Import my structures
#include "mystructs.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "Spanish");

    // Calling instance
    cout << " ---- Sistema de Registro de Alumnos ----" << endl << endl;
    cout << "Ingresa el nombre del estudiante: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cout << "Ingresa el apellido paterno del estudiante: ";
    cin.getline(alumno1.apellido_paterno, 20, '\n');
    cout << "Ingresa el apellido materno del estudiante: ";
    cin.getline(alumno1.apellido_materno, 20, '\n');
    cout << "Ingrese la edad del estudiante: ";
    cin >> alumno1.edad;
    cout << "Ingrese la altura del estudiante mts :";
    cin >> alumno1.estatura;
    cout << " ---- Datos guardados con éxito  ----" << endl << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Apellido paterno: " << alumno1.apellido_paterno << endl;
    cout << "Apellido paterno: " << alumno1.apellido_materno << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Estatura: " << alumno1.estatura << endl;








    return 0;
}


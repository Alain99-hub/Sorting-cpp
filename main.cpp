#include <iostream>
#include <string.h>
#include <time.h>
#include "StringAscendantComparator.h"
#include "IntegerDescendantComparator.h"
#include "Comparator.h"
#include "Sorter.h"
#include "Alumno.h"
#include "LastnameAscendantComparator.h"
#include "FirstNameAscendantComparator.h"
#include "DateAscendantComparator.h"

using namespace std;

template <typename T>
void printArray(T elements[], int elementsCount);

int main()
{
	// Sorting and printing array of strings
	string datos[] = { "Hector", "Jocelyn", "Antonio", "Caleb", "Isaías", "Jose", "Gustavo", "Alain", "Ivan" };
	StringAscendantComparator *stringComparator = new StringAscendantComparator;

	Sorter<string>::sort(datos, stringComparator, 9);

	printArray<string>(datos, 9);


	// Sorting and printing array of integers
	int integerElements[] = { 10,43,21,64,28,38,33,51,42,21 };
	IntegerDescendantComparator *integerComparator = new IntegerDescendantComparator;

	Sorter<int>::sort(integerElements, integerComparator, 10);

	printArray<int>(integerElements, 10);

	Alumno alumnos[] = {
		
			 Alumno("Hector", "Hernandez", 2001, 8, 11, 4723717),
			 Alumno("Jocelyn", "Llamas", 2001,7, 21, 32321),
			 Alumno("Antonio", "Galvan", 2002,1, 1, 45365645),
			 Alumno("Francisco", "Solis", 2001, 2, 14, 72436723),
			 Alumno("Caleb", "Solis", 2001,2, 16, 72436723),
			 Alumno("Arturo", "Llamas", 2001,7, 12, 32321),
	};
	
	LastnameAscendantComparator *lastNamecomparator = new LastnameAscendantComparator;
	FirstNameAscendantComparator *firstNamecomparator = new FirstNameAscendantComparator;

	Sorter<Alumno>::sort(alumnos,lastNamecomparator , 6);
	Sorter<Alumno>::sort(alumnos, firstNamecomparator, 6);
	cout << "\n";
	cout << "\n";
	cout << "Ordenamiento por nombre y epllido" << "\n";

	for (Alumno alumno : alumnos) {
		alumno.drawData();
	}
	cout << "\n";
	cout << "\n";

	DateAscendantComparator* datecomparator = new DateAscendantComparator;
	

	Sorter<Alumno>::sort(alumnos, datecomparator, 6);

	cout << "Ordenamiento por fecha y clave" << "\n";

	for (Alumno alumno : alumnos) {
		alumno.drawData();
	}
	return 0;
}

template <typename T>
void printArray(T elements[], int elementsCount) {
	for (int i = 0; i < elementsCount; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << elements[i];
	}
	cout << endl;
}
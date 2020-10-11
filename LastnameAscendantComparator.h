#pragma once
#include "Comparator.h"
#include "Alumno.h"

class LastnameAscendantComparator : public Comparator<Alumno>
{
public:
	int compare(const Alumno& left, const Alumno& right) {

		Alumno studentLeft = (Alumno)left;

		Alumno studentRight = (Alumno)right;

		return studentRight.getLastName().compare((studentLeft.getLastName()));
	}
};


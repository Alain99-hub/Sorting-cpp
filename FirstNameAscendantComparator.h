#pragma once
#include "Comparator.h"
#include "Alumno.h"


class FirstNameAscendantComparator : public  Comparator<Alumno>
{
public:
	int compare(const Alumno& left, const Alumno& right) {

		Alumno nameLeft = (Alumno)left;

		Alumno nameRight = (Alumno)right;

        if (nameRight.getLastName().compare(nameLeft.getLastName()) == 0) {
            if (nameRight.getFirstName().compare(nameLeft.getFirstName()) > 0) {
                return nameRight.getFirstName().compare(nameLeft.getFirstName());
            }
            return nameRight.getFirstName().compare(nameLeft.getFirstName());
        }
        return nameRight.getLastName().compare((nameLeft.getLastName()));
    }
	
};


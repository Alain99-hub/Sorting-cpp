#pragma once
#include "Comparator.h"
#include "Alumno.h"

class DateAscendantComparator : public Comparator<Alumno>

{
public:
	int compare(const Alumno& left, const Alumno& right) {

		Alumno nameLeft = (Alumno)left;

		Alumno nameRight = (Alumno)right;

		if (nameLeft.getYear()>=nameRight.getYear()) {
			if (nameLeft.getMont()>=nameRight.getMont()) {
				if (nameLeft.getDay()>=nameRight.getDay()) {
					
					if (nameLeft.getDay() == nameRight.getDay()) {
						return nameRight.getClave() - nameLeft.getClave();
					}

					return nameRight.getDay()-nameLeft.getDay();
				}
				
				return nameRight.getMont() - nameLeft.getMont();
			}
			return nameRight.getYear() - nameLeft.getYear();
		}
		
	}
};


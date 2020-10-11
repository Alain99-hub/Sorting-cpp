#pragma once

#include "Comparator.h"

class IntegerDescendantComparator : public Comparator<int>
{
public:
    int compare(const int& left, const int& right)
    {
        return left - right;
    }
};

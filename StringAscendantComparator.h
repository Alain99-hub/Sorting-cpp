#include <iostream>
#include "Comparator.h"

using namespace std;
class StringAscendantComparator : public Comparator<string>
{
public:
    int compare(const string& left, const string& right)
    {
        return -left.compare(right);
    }
};
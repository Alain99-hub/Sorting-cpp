#pragma once

template <class T>
class Comparator
{
public:
    virtual int compare(const T &, const T &) = 0;
};
#pragma once
template <class T>
class Sorter
{
public:
	static void sort(T datos[], Comparator<T> *comparator, int n) {
        for (int i = 0; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (comparator->compare(datos[j], datos[j + 1]) < 0)
                {
                    swap(datos, j, j+1);
                }
                else
                {
                    break;
                }
            }
        }
	}

private:

    static void swap(T datos[], int indexLeft, int indexRight)
    {
        T temp = datos[indexLeft];
        datos[indexLeft] = datos[indexRight];
        datos[indexRight] = temp;
    }
};


#include "vectorIterator.h"
#include "filterIterator.h"
#include "positiveIntPredicate.h"
#include <iostream>

template <class T>
void print(Iterator<T> * it)
{
    while (it->hasNext())
    {
        std::cout << it->next() << " ";
    }

    std::cout << std::endl;
}

std::vector<int> asIntVector(int array[], int length)
{
    std::vector<int> v;
    for (int i = 0; i < length; i++)
    {
        v.push_back(array[i]);
    }
    return v;
}

int main()
{
    int numbers[] = {1, -2, 3, -4, 5};
    std::vector<int> vec = asIntVector(numbers, 5);
    VectorIterator<int> * it = new VectorIterator<int>(vec);
    print(it);

    FilterIterator<int> * filteredIt = new FilterIterator<int>(
        new VectorIterator<int>(vec), PositiveIntPredicate::instance);
    // Devrait afficher 1 3 5 
    print(filteredIt);

    return 0;
}
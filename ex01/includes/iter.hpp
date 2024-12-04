#pragma once
#include <iostream>

template <typename T, typename F>
void iter(T *array, std::size_t lenght, F func)
{
    if (lenght <= 0)
    {
        std::cerr << "The number should be positive" << std::endl;
        return;
    }
    else
    {
        for (std::size_t i = 0; i < lenght; i++)
        {
            func(array[i]);
        }
    }
}
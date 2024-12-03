#pragma once
#include <iostream>

template <typename T>
void swap(T& x, T& y)
{
    T n = x;
    x = y;
    y = n;
}
template <typename MIN>
MIN min(MIN x, MIN y)
{
    return (x < y) ? x : y;
}

template <typename MAX>
MAX max(MAX x, MAX y)
{
    return (x > y) ? x : y;
}
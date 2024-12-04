#include "includes/iter.hpp"

template <typename T>
void print(T& x)
{
    std::cout << x << std::endl;
}

int main( void ) {

    int arrInt [] = {1,2,3,4,5,6};
    std::string a2[] = {"hello ", "world", "How ", "are ", "you"};
    int arrIntLen = sizeof(arrInt) / sizeof(arrInt[0]);
    int arrIntLen2 = sizeof(a2) / sizeof(a2[0]);
 
    iter(arrInt,arrIntLen,print<int>);
    iter(a2,arrIntLen2,print<std::string>);
return 0;
}
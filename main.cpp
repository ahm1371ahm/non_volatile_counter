#include <iostream>

#include "nv_counter.hpp"

int main(int arc, char *argv[])
{
    NVCounter nvCounter;
    ++nvCounter;
    std::cout << nvCounter.getValue() << std::endl;
    return 0;
}
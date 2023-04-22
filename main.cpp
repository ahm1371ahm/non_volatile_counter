#include <iostream>

#include "nv_counter.hpp"

int main(int arc, char *argv[])
{
    NVCounter nvCounter("counter2.txt");
    ++nvCounter;
    nvCounter -= 34;
    std::cout << nvCounter.getValue() << std::endl;
    return 0;
}
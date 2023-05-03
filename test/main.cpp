#include <iostream>

#include "nv_counter.hpp"

int main(int arc, char *argv[])
{
#if __clang__
    std::cout << "compiled with clang++" << std::endl;
#elif __GNUC__
    std::cout << "complied with GNU" << std::endl;
#elif ___MSC_VER
    std::cout << "compiled with MSVC" << std::endl;
#endif

    NVCounter nvCounter("counter2.txt");
    ++nvCounter;
    nvCounter -= 34;
    std::cout << nvCounter.getValue() << std::endl;
    std::cout << *nvCounter << std::endl;
    std::cout << nvCounter << std::endl;
    return 0;
}
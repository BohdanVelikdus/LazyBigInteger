#include <iostream>
#include <string>
#include <exception>
#include <cctype>
#include <cstring>
#include <memory>
#include <sstream>
#include <chrono>
#include <string_view>
#include <algorithm>
#include <vector>
#include <map>
#include <memory>

#include <charconv>
#include <cstdint>

#include "MemoryUtilities.h"
#include "BigInteger.h"

int main()
{
    HEAPCHECK;
    MEMORYCHECKPOINT;
    //               /10'000'000'000'000'000'000
    BigInteger b1 =  "123456789012345678901234567890";  
    BigInteger b2 =  "1234567"; 
    std::chrono::time_point<std::chrono::steady_clock> now = std::chrono::steady_clock::now();
    b1 = b1 / b2;
    std::chrono::time_point<std::chrono::steady_clock> end = std::chrono::steady_clock::now();
    std::cout << "Duration: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - now).count() << "ns\n";
    //BigInteger b3 = "123456789";

    //BigInteger b4 = "-123";
    std::cout << b1 << "\n"; // << b3 << "\n" << b4 << "\n";
    
    
    
    //printMemoryUsage();
    return 0;
}
#include <iostream>
#include <limits>

int main()
{
    // std::cin.clear();                                                   // reset any error flags
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    // std::cin.get();                                                     // get one more char from the user (waits for user to press enter)

    int n = 2025;
    (n % 4 == 0)? std::cout <<"Y" : std::cout << "N";
    return 0;
}
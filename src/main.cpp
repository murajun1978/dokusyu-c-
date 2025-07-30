#include <iostream>

using integer = int;

integer main() {
    int value = 42;

    using number = integer;

    number num = 0;

    value = num;
    std::cout << "Value: " << value << std::endl;
    return 0;
}
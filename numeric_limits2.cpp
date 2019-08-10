#include <iostream>
int main(void)
{
auto num_bytes_signed = sizeof(signed char);
auto min_signed = std::numeric_limits<signed char>().min();
auto max_signed = std::numeric_limits<signed char>().max();
auto num_bytes_unsigned = sizeof(unsigned char);
auto min_unsigned = std::numeric_limits<unsigned char>().min();
auto max_unsigned = std::numeric_limits<unsigned char>().max();
std::cout << "num bytes (signed): " << num_bytes_signed << '\n';
std::cout << "min value (signed): " << +min_signed << '\n';
std::cout << "max value (signed): " << +max_signed << '\n';
std::cout << '\n';
std::cout << "num bytes (unsigned): " << num_bytes_unsigned << '\n';
std::cout << "min value (unsigned): " << +min_unsigned << '\n';
std::cout << "max value (unsigned): " << +max_unsigned << '\n';
}
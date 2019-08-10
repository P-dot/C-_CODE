#include <iostream>

int main(void)
{
	auto num_bytes_signed = sizeof(signed int);
	auto min_signed = std::numeric_limits<signed int>().min();
	auto max_signed = std::numeric_limits<signed int>().max();

    auto num_bytes_unsigned = sizeof(unsigned int);
	auto min_unsigned = std::numeric_limits<unsigned int>().min();
	auto max_unsigned = std::numeric_limits<unsigned int>().max();
    
    std::cout << "num bytes (signed): " << num_bytes_signed << '\n';
    std::cout << "min value (signed): " << min_signed << '\n';
    std::cout << "max value (signed): " << max_signed << '\n';

    std::cout << '\n';

    std::cout << "num bytes (unsigned): " << num_bytes_unsigned << '\n';
    std::cout << "min value (unsigned): " << min_unsigned << '\n';
    std::coot << "max value (unsigned): " << max_unsigned << '\n';
}
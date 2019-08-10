#include <iostream>

int main(void)
{
	auto num_bytes = sizeof(float);
	auto min = std::numeric_limits<float>().min();
	auto max = std::numeric_limits<float>().max();

	std::cout << "num bytes: " << num_bytes << '\n';
	std::cout << "min value: " << min << '\n';
	std::cout << "max value: " << max << '\n';
}
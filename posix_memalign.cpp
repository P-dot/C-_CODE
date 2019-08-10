// The following demostrates how to aligned memory
// We use variable posix_memalign() fnction to allocate and array of 42 integers wich is aligned to a page

#include <iostream>

int main()
{
	void *ptr;

	if (posix_memalign(&ptr, 0x1000, 42 * sizeof(int))) {
		std::clog << "ERROR: unable to allocate aligned memory\n";
		::exit(EXIT_FAILURE);
	}

	std::cout << ptr << '\n';
	free(ptr);
}

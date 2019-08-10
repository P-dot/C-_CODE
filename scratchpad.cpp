#include <iostream>

struct mystruct {
    int data1{42};
    int data2{42};
};

int main(void)
{
    mystruct s;
    std::cout << s.data1 << '\n';
}

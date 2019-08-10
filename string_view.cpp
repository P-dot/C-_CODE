#include <iostream>
#include <string_view>

int main(void)
{
    std::string_view str("Hellow World");

    str.remove_prefix(1);
    str.remove_suffix(1);
    std::cout << str << '\n';
}



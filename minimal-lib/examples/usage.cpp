#include "{{name}}/{{name}}.h"
#include <iostream>

int main()
{
    std::cout << "{{name}} library example" << std::endl;
    std::cout << {{namespace|snake_case}}::hello() << std::endl;
    std::cout << "Version: " << {{namespace|snake_case}}::version() << std::endl;
    return 0;
}

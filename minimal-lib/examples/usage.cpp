#include <iostream>
#include "{{name}}/{{name}}.h"

int main() {
    std::cout << "{{name}} library example" << std::endl;
    std::cout << {{namespace|snake_case}}::hello() << std::endl;
    std::cout << "Version: " << {{namespace|snake_case}}::version() << std::endl;
    return 0;
}

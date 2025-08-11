#include <cassert>
#include <iostream>
#include <string>
#include "{{name}}/{{name}}.h"

using namespace {{namespace|snake_case}};

int main() {
    std::cout << "Running tests for {{name}} library..." << std::endl;

    // Test hello() function
    const char* greeting = hello();
    assert(greeting != nullptr);
    assert(std::string(greeting).find("{{name}}") != std::string::npos);
    std::cout << "✓ hello() test passed" << std::endl;

    // Test version() function
    const char* ver = version();
    assert(ver != nullptr);
    assert(std::string(ver) == "{{version}}");
    std::cout << "✓ version() test passed" << std::endl;

    std::cout << "All tests passed!" << std::endl;
    return 0;
}

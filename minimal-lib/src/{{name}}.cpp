#include "{{name}}/{{name}}.h"

namespace {{namespace|snake_case}} {

const char* hello()
{
    return "Hello from {{name}} library!";
}

const char* version()
{
    return "{{version}}";
}

}  // namespace {{namespace|snake_case}}

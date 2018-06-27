## Borland C++ Builder 10 adaptations for [JSON for Modern C++](https://github.com/nlohmann/json/)

This library uses git submodules to fetch and instrument a single header (json.hpp) for use with Borland C++ Builder 10. It also contains missing C++11 <cmath> functions as a separate file (cmath_missing.hpp). The instrumented json.hpp is all you need to copy to your project though.

## Building

To create the single header file:
```bash
make
```

## Integration

Copy json.hpp to your project.

```cpp
#include <json.hpp>

// for convenience
using json = nlohmann::json;
```

For more information, see [JSON for Modern C++](https://github.com/nlohmann/json/)

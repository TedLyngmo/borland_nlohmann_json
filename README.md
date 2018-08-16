## Borland C++ Builder 10 adaptations for [JSON for Modern C++](https://github.com/nlohmann/json/)

This library uses git submodules to fetch and instrument a single header (json.hpp) for use with Borland C++ Builder 10. It also contains missing C++11 <cmath> functions as a separate file (cmath_missing.hpp). The instrumented json.hpp is all you need to copy to your project though.

## Building

The file json.hpp in the top directory is already instrumented and ready to be used but if you've made changes that you'd like to try out and have the make command available, just do
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

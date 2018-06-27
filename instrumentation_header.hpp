//-----------------------------------------------------------------------------
#ifndef BORLAND_NLOHMANN_JSON_INSTRUMENTATION
/*
** Includes and defines to be able to use https://github.com/nlohmann/json
*/

#include <cstdio> // EOF macro

// Tell the original nlohmann/json lib to skip checking if the compiler is
// unsupported
#define JSON_SKIP_UNSUPPORTED_COMPILER_CHECK

/*
** The original (but instrumented) json.hpp follows below.
**
** Instrumentation is needed to replace std::char_traits<char>::eof() with the
** EOF macro since Borland C++ Builder 10 uses the pre C++11 non-constexpr
** definition of std::char_traits::eof.
*/
#endif
//-----------------------------------------------------------------------------


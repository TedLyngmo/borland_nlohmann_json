all:
	cp -f cmath_missing.hpp json.hpp
	cat instrumentation_header.hpp >> json.hpp
	$(MAKE) -C json amalgamate && sed 's/std::char_traits<char>::eof()/EOF/g' json/single_include/nlohmann/json.hpp >> json.hpp


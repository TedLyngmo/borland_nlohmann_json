/*
 * <cmath> C++11 functions missing in C++ Builder 10 (10.2.1)
*/
#ifndef CMATH_BCB_MISSING
#define CMATH_BCB_MISSING

#if defined(__clang__) && defined(__BORLANDC__) && defined(_WIN32)
  #if (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__) >= 30301 && (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__) < 30400

      #pragma message ("Fixing shortcomings in Borland C++ Builder Clang (bcc32c) compiler [3.3.1, 3.4.0)")
      #include <cfloat>
      #include <cmath>

        namespace std {

            template <typename T>
            bool signbit(T v) {
                return signbit((double)v);
            }
            template <>
            bool signbit(float v) {
                return *((unsigned char*)&v+3) & 0x80;
            }
            template <>
            bool signbit(double v) {
                return *((unsigned char*)&v+7) & 0x80;
            }
            template <>
            bool signbit(long double v) {
                return *((unsigned char*)&v+9) & 0x80;
            }

            template<typename T>
            bool isnan(T v) {
                return _isnan((double) v) != 0;
            }
            template<>
            bool isnan(long double v) {
                return _isnanl(v) != 0;
            }

            template<typename T>
            bool isfinite(T v) {
                return isfinite((double) v);
            }
            template<>
            bool isfinite(double v) {
                return _finite(v);
            }
            bool isfinite(long double v) {
                return _finitel(v);
            }

            template<typename T>
            T copysign(T x, T y) {
                return (T) copysign((double) x, (double) y);
            }
            template<>
            double copysign(double x, double y) {
                return _copysign(x, y);
            }
            template<>
            long double copysign(long double x, long double y) {
                return _copysignl(x, y);
            }
        }
  #endif
#endif

#endif // CMATH_BCB_MISSING

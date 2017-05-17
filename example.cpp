#include "png.h"
#include "zlib.h"
#include "iostream"

int main()
{
  std::cout << "Compiled with libpng " << PNG_LIBPNG_VER_STRING << " using libpng " << png_libpng_ver << std::endl;
  std::cout << "Compiled with zlib " << ZLIB_VERSION << " using zlib " << zlib_version << std::endl;
  return 0;
}
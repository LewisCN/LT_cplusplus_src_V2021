#pragma once


#ifdef ENABLE_LT_DEBUG
#define PRINT_DEBUG(...)  std::cout
#else
#define PRINT_DEBUG(...) do{}while(0)
#endif


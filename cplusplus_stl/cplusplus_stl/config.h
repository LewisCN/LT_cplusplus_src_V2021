#pragma once

#define ENABLE_LT_DEBUG
#if 0//def ENABLE_LT_DEBUG
#define PRINT_DEBUG(...)  std::cout
#else
#define PRINT_DEBUG(...) do{}while(0)
#endif


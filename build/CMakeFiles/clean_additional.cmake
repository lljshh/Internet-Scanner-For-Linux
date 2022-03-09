# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ISFL_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ISFL_autogen.dir/ParseCache.txt"
  "ISFL_autogen"
  )
endif()

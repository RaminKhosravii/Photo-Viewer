# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Media-Player_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Media-Player_autogen.dir\\ParseCache.txt"
  "Media-Player_autogen"
  )
endif()

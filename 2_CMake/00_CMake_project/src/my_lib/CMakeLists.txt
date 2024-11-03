# target 1
add_library(${LIBRARY_NAME} STATIC my_lib.cc)
target_include_directories(Library PUBLIC
"./"
"${CMAKE_BINARY_DIR}/configured_files/include")

cmake_minimum_required(VERSION 3.22.1)

project(sm-core
    VERSION 1.0.0
    DESCRIPTION "SM Core"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(MSVC)
     add_compile_options(/W4 /WX)
else()
     # set(CMAKE_C_VISIBILITY_PRESET hidden)
     # set(CMAKE_CXX_VISIBILITY_PRESET hidden)
     # set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)
     # set(CMAKE_SHARED_LIBRARY_PREFIX "")
     add_compile_options(-Wall -Wextra -Werror -pedantic)
endif()

file(GLOB STRING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/sm-string.c")
add_library(sm-string SHARED ${STRING_SOURCE})
target_include_directories(sm-string PUBLIC include)

include(GNUInstallDirs)

install(
     TARGETS
     sm-string
     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
     ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(
     DIRECTORY include/
     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
     enable_testing()

     # add_executable(string test/sm-string.c)
     # add_test(NAME string COMMAND string)
     # target_link_libraries(string PUBLIC sm-string)
endif()

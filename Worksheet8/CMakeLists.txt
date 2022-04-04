if(WIN32)
set(CPACK_GENERATOR "NSIS")
else()
set(CPACK_GENERATOR "ZIP")
endif()
include(CPack)
add_library(maths maths.cpp)
add_executable(calc calc.cpp)
target_link_libraries(calc maths)
add_executable(test1 test1.cpp)
target_link_libraries(test1 maths)
install(TARGETS calc maths
RUNTIME DESTINATION bin

LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/static)
add_test(test1 test1)

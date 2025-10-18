add_executable(test_prime_check test_prime_check.cpp)

# enable testing
enable_testing()
include(GoogleTest)

#target_link_libraries(test_prime_check PRIVATE prime_number_check::prime_number_checkTarget)
#target_link_libraries(test_prime_check PRIVATE ${prime_number_check_LIBRARIES})
target_link_libraries(test_prime_check PRIVATE prime_number_check)
target_link_libraries(test_prime_check PUBLIC /usr/lib/libgtest.a /usr/lib/libgtest_main.a)
target_link_libraries(test_prime_check PUBLIC /usr/lib/libgtest.a /usr/lib/libgtest_main.a)
target_include_directories(test_prime_check PUBLIC ${CMAKE_SOURCE_DIR}/include)
gtest_discover_tests(test_prime_check)

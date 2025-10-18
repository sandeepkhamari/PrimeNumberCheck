add_library(prime_number_check STATIC prime_check.cpp)

add_executable(prime_number_checker main.cpp)
target_link_libraries(prime_number_checker PUBLIC prime_number_check)
target_include_directories(prime_number_checker PUBLIC ${CMAKE_SOURCE_DIR}/include)
# use standard directory names.
include(GNUInstallDirs)

target_include_directories(prime_number_check PUBLIC ${CMAKE_SOURCE_DIR}/include)

install(TARGETS prime_number_check EXPORT prime_number_checkTarget
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} 
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ 
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}) 


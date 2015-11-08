set(SOURCES
    "src/sfml_window_manager.cpp"
    "src/interface.cpp"
)

set(HEADERS
    "include/sfml_window_manager.h"
)

include_directories("include")
add_library ( sfml_window_manager MODULE ${SOURCES} ${HEADERS})
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(sfml_window_manager ${SFML_LIBRARIES})
endif()

target_link_libraries(sfml_window_manager PRIVATE lmscore)

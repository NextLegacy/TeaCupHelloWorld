file(GLOB_RECURSE Sources *.cpp)
file(GLOB_RECURSE Headers *.hpp)

add_executable(App WIN32 ${Sources} ${Headers})

set_target_properties(App PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../bin
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../bin
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin
)

target_include_directories(App PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(App PUBLIC 
    BoilingHotWater::BoilingHotWater
    TeaCup::TeaCup
)
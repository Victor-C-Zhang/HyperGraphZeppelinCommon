cmake_minimum_required(VERSION 3.15)

project(GraphZeppelinCommon)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

add_library(GraphZeppelinCommon
    graph_zeppelin_common.h)
set_target_properties(GraphZeppelinCommon PROPERTIES PUBLIC_HEADER 
  "graph_zeppelin_common.h"
)
set_target_properties(GraphZeppelinCommon PROPERTIES LINKER_LANGUAGE CXX)

#uncomment if manually installing project
#without specifying INSTALL_PREFIX elsewhere
#set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_BINARY_DIR}/GraphZeppelinCommon/prefix)

# for use when building as an external project
install(TARGETS GraphZeppelinCommon
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

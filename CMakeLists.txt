
SET(PROJECT_NAME icl_empty)
STRING(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

# include icmaker if not already available
IF(NOT DEFINED ICMAKER_DIRECTORY)
  FIND_PACKAGE(icmaker REQUIRED)
  INCLUDE(UseFullIcMaker REQUIRED)
ENDIF()

PROJECT(${PROJECT_NAME})

# To be used by other modules
SET(${PROJECT_NAME_UPPER}_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/src" "${CMAKE_CURRENT_BINARY_DIR}/src" CACHE INTERNAL "")
SET(${PROJECT_NAME_UPPER}_IDL_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/src" CACHE INTERNAL "")
SET(${PROJECT_NAME_UPPER}_IDE_FOLDER ${PROJECT_NAME})

FIND_PACKAGE(Threads REQUIRED)

# enable C++11 support
if (CMAKE_VERSION VERSION_LESS "3.1")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set (CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
    set (CMAKE_CXX_FLAGS "-march=native ${CMAKE_CXX_FLAGS}")
  endif ()
else ()
  set (CMAKE_CXX_STANDARD 11)
  # enable vectorization and other platform dependant optimizations
  #set (CMAKE_CXX_FLAGS "-march=native ${CMAKE_CXX_FLAGS}")
endif ()

ICMAKER_REGISTER_PACKAGE(${PROJECT_NAME})

ADD_SUBDIRECTORY(src/${PROJECT_NAME}_core)
ADD_SUBDIRECTORY(src/tools)

IF (BUILD_TEST)
  ADD_SUBDIRECTORY(test/test_icl_empty_core)
ENDIF (BUILD_TEST)

ICMAKER_CONFIGURE_PACKAGE()


cmake_minimum_required(VERSION 2.8.8)

set(TEST_NAME test_icl_empty_core)

ICMAKER_SET(${TEST_NAME} IDE_FOLDER ${ICL_EMPTY_IDE_FOLDER})
ICMAKER_ADD_SOURCES(
  test_icl_empty_core.cc
)

ICMAKER_INCLUDE_DIRECTORIES(${GTEST_INCLUDE_DIRS})

ICMAKER_DEPENDENCIES(
  icl_empty_core
  gtest
  Threads
)

ICMAKER_BUILD_TEST()

# need to reference the actual cmake target name to wait
# for multi-threaded googletest checkout
add_dependencies(${TEST_NAME} googletest)


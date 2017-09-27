#########################################################
ICMAKER_SET("demo_tool")

ICMAKER_ADD_SOURCES(
  demo_tool.cc
)
ICMAKER_ADD_HEADERS(
)

ICMAKER_INCLUDE_DIRECTORIES(${${PROJECT_NAME_UPPER}_INCLUDE_DIRS})

ICMAKER_DEPENDENCIES(EXPORT
  icl_empty_core
)

ICMAKER_BUILD_PROGRAM()


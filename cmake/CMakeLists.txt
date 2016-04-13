
PROJECT(OS_Nill)


SET(PROJECT_ROOT_PATH "${CMAKE_SOURCE_DIR}/../")                 #工程的根目录，即cmake_proj

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/")    #可执行生成后存放的目录(CMAKE_SOURCE_DIR是cmake目录)

SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib/")             #静态库生成后存放的目录

INCLUDE_DIRECTORIES("${PROJECT_ROOT_PATH}/include/")            #告诉CMake头文件在哪里？

LINK_DIRECTORIES("${CMAKE_SOURCE_DIR}/lib/")                             #告诉CMake静态库在哪里？

ADD_SUBDIRECTORY(src)                            #多目录，把src目录加进来，src里面才是真正编译main和hello的

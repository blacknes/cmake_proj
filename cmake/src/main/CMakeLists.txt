

FILE(GLOB SOURCE_1 "${PROJECT_ROOT_PATH}/main/*.cpp")     #告诉CMake源文件在哪里？

ADD_EXECUTABLE(main ${SOURCE_1})                          #告诉CMake生成一个main可执行文件

TARGET_LINK_LIBRARIES(main start)                         #告诉CMake静态库在哪里？

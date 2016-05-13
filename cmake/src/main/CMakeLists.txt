

FILE(GLOB SOURCE_1 "${PROJECT_ROOT_PATH}/main/*.cpp")     #告诉CMake源文件在哪里？

ADD_EXECUTABLE(main ${SOURCE_1})                          #告诉CMake生成一个main可执行文件

FIND_PACKAGE(OpenCV REQUIRED)
TARGET_LINK_LIBRARIES(main start cvpart ${OpenCV_LIBS})                         #告诉CMake静态库在哪里？

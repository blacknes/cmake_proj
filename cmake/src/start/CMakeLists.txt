#/*******************************************************************************
# * Author :          Nill_Rhoads
# * Email :           nillrhoads@gmail.com
# * Last modified :   2016-05-13 10:39
# * Filename :        CMakeLists.txt
# * Description :     
# * *****************************************************************************/


FILE(GLOB SOURCE_1 "${PROJECT_ROOT_PATH}/start/*.cpp")      #告诉CMake源文件在哪里？
ADD_LIBRARY(start STATIC ${SOURCE_1})                       #告诉CMake生成的是一个静态库

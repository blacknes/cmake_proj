#/*******************************************************************************
# * Author :          Nill_Rhoads
# * Email :           nillrhoads@gmail.com
# * Last modified :   2016-05-13 10:37
# * Filename :        CMakeLists.txt
# * Description :     
# * *****************************************************************************/

FILE(GLOB SOURCE_2 "${PROJECT_ROOT_PATH}/cvpart/*.cpp")      #告诉CMake源文件在哪里？
ADD_LIBRARY(cvpart STATIC ${SOURCE_2})                       #告诉CMake生成的是一个静态库

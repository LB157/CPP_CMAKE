#aux_source_directory(. SRC_LIST) #该命令会查找指定目录下的所有源文件，然后将结果存进指定变量名
add_executable(main 3_7cpp.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
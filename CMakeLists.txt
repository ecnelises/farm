# CMake 构建文件
PROJECT(farm)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
INCLUDE_DIRECTORIES(src src/core src/ext src/base src/impl src/interface)
SET(CMAKE_CXX_FLAGS "-std=c++14")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./build)
AUX_SOURCE_DIRECTORY(./src/core DIR_CORE_SRCS)
AUX_SOURCE_DIRECTORY(./src/ext DIR_EXT_SRCS)
AUX_SOURCE_DIRECTORY(./src/base DIR_BASE_SRCS)
AUX_SOURCE_DIRECTORY(./src/impl DIR_IMPL_SRCS)
AUX_SOURCE_DIRECTORY(./src/interface DIR_INTERFACE_SRCS)
AUX_SOURCE_DIRECTORY(./src DIR_SRCS)
LIST(APPEND DIR_SRCS ${DIR_CORE_SRCS} ${DIR_EXT_SRCS} ${DIR_BASE_SRCS})
LIST(APPEND DIR_SRCS ${DIR_IMPL_SRCS} ${DIR_INTERFACE_SRCS})
ADD_EXECUTABLE(farm ${DIR_SRCS})

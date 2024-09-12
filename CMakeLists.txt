cmake_minimum_required(VERSION 3.10)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 11)

# 경로 설정
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

# 필요한 라이브러리 찾기
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

# 실행 파일 생성
add_executable(OpenGLProject src/main.cpp)

# 라이브러리 링크
target_link_libraries(OpenGLProject OpenGL::GL GLEW::GLEW glut)

# build 디렉터리 자동 생성
if(NOT EXISTS "${CMAKE_SOURCE_DIR}/build")
    file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
endif()

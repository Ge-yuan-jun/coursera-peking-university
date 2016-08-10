cmake_minimum_required(VERSION 3.5)
project(C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    week2/tomorrow.cpp
    week2/传染病.cpp
    week2/发票统计.cpp
    week2/四大湖.cpp
    week2/寻找下标.cpp
    week2/细菌实验分组.cpp
    week3/单词翻转.cpp
    week3/括号匹配问题.cpp
    week3/排队游戏.cpp
    week3/角谷猜想.cpp
    week4/lecture/指针变量1.cpp
    week4/lecture/指针变量2.cpp
    week4/lecture/指针变量3.cpp
    week5/lecture/char-point.cpp
    week5/lecture/copy-use-point.cpp
    week5/lecture/operate-char-point.cpp
    week5/lecture/一维数组的地址.cpp
    week5/test/eachTwoMatrix.cpp
    week5/test/sumForMatrix.cpp
    week5/test/wordFormat.cpp
    week6/homework/test1.cpp
    week6/homework/test2.cpp
    week6/homework/test3.cpp
    week6/lecture1/cursorForArray.cpp
    week6/lecture1/cursorForDimensionArray.cpp
    week6/lecture1/cursorForParam.cpp
    week6/lecture1/cursorForRealParam.cpp
    week6/lecture2/constCursorParam.cpp
    week6/lecture3/cursorAsFunVal.cpp
    week6/lecture3/cursorAsFunVal2.cpp
    week6/lecture3/returnTrueValue.cpp
    week6/lecture3/returnTrueValue2.cpp
    week6/lecture4/staticVariable.cpp
    week7/demo1.cpp
    week7/demo2.cpp
    week7/demo3.cpp
    week7/demo4.cpp)

add_executable(C ${SOURCE_FILES})
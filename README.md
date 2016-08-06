# c4_lesson4.3
c++ 类学习
1，对象、引用、指针调用成员函数的不同点
2，cmakeList.txt中增加
if(WIN32)
    set(CMAKE_CXX_FLAGS "-static-libgcc -static-libstdc++")
endif(WIN32)
防止生成exe可执行文件找不到dll错误
3，对象直接复制，如：A=B ,修改A或B另一个对象不受影响。

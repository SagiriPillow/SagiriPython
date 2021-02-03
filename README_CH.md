# Sagiri Python
这是一个非常无敌简单的 Cpython Dll 头文件，可以指定相关 Dll 文件的所在位置！
而且相关的 Api 和官方的文档一模一样！仅支持 Windows ！[English](https://github.com/UnknownMistyRain/SagiriPython/blob/main/README.md)

# 开箱即用？
1. 拷贝这里的所有文件到项目根目录；
2. 将头文件 Include 到项目源码即可开始使用！
3. 具体参考文档！
4. 中文文档我不想写了哼啊啊啊，因为英文文档用翻译我试了下是"能看"的...

# 如何使用？
1. 将 sagiri.h 放到项目里；
2. 然后将它 Include 到项目源码内；
3. 下载一个 Cpython Dll 然后放到项目内；
4. 把基本的 Python 库拷贝到项目目录然后编写一个 Pth 文件 ;
5. 加载 Python Dll ；
6. 加载 Cpython 的 Api ;
7. 调用 Api 就完事了！
8. 整个过程具体可以参考 example.cpp ！

# 如何获得一个 Python 的基本 Dll ？
1. 很简单，下载一个 Python 安装包或者 Alpha 版本(Zip) ！
2. 提取出 Python3x.dll 即可调用 ！

# 太怠惰了！哪里有相关的 Api 文档？
1. [官网啊！你脸红个泡泡茶壶！](https://docs.python.org/3/c-api/index.html)

# 常见的 Api ？
1. PyRun_SimpleString(char *...); 可以跑基本的 Python 代码！

# 这个东西有什么用？
1. 嵌入一些东西到 C 系语言程序中去！
2. 有手就行！

# 使用这个头文件有什么要求吗？
1. 没的，随便用，反正 Cpython 不是我开发的~ (Doge)

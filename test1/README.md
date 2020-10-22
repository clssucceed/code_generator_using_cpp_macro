# code_generator_using_cpp_macro
预处理元编程

* 分析generated_code中的文件不难发现，每个文件都符合三段式，并且第二段具有相同范式，位移不同的只是标识符的名字中的关键字, 所以定义了EvnetMeta.h文件给出这个三段式范式
* 相应的Interpreter文件就会定义适用于自己文件的三段式的每一段的具体格式
* UndefInterpreter.h用于宏擦除，因为宏的作用范围是从声明到程序结束或者遇到undef
* 最后在需要自动生成代码的文件中依次调用Interpreter.h, EventMeta.h和UndefInterpreter.h文件就可以实现自动代码生成
* 由于宏文件在一个文件中可能需要被多次展开，所以不能增加include guard
* **问题：为什么需要自动生成代码的文件中使用乱码进行include guard**
* 更多信息参见：https://www.jianshu.com/p/ce8a3e01130b　　 
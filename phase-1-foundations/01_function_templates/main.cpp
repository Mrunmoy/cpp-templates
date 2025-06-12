/*
 * Project: C++ Template Learning Journey
 * Phase 1: Foundations
 * Topic: 01 - Function Templates
 */

#include <iostream>

#include <iostream>

// A simple function template
template<typename T>
T max_value(T a, T b) {
    return (a > b) ? a : b;
}

// Another function template: min_value
template<typename T>
T min_value(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << "Max of 3 and 7 is: " << max_value(3, 7) << "\n";
    std::cout << "Max of 3.14 and 2.72 is: " << max_value(3.14, 2.72) << "\n";
    std::cout << "Max of 'a' and 'z' is: " << max_value('a', 'z') << "\n";
    std::cout << "Min of 10 and 5 is: " << min_value(10, 5) << "\n";
    std::cout << "Min of 2.5 and 3.7 is: " << min_value(2.5, 3.7) << "\n";
    std::cout << "Max of std::string: 'apple' vs 'banana' is: " << max_value(std::string("apple"), std::string("banana")) << "\n";

    // Uncommenting the following line would result in a compile-time error
    // because the arguments are of different types (int and double)
    // std::cout << max_value(3, 4.5) << "\n";


    return 0;
}


#if 0


FAILED: CMakeFiles/01_function_templates.dir/main.cpp.obj
        C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE   -g -std=gnu++14 -fdiagnostics-color=always -MD -MT CMakeFiles/01_function_templates.dir/main.cpp.obj -MF CMakeFiles\01_function_templates.dir\main.cpp.obj.d -o CMakeFiles/01_function_templates.dir/main.cpp.obj -c E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp
        E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp: In function 'int main()':
E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp:33:28: error: no matching function for call to 'max_value(int, double)'
33 |      std::cout << max_value(3, 4.5) << "\n";
|                   ~~~~~~~~~^~~~~~~~
E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp:13:3: note: candidate: 'template<class T> T max_value(T, T)'
13 | T max_value(T a, T b) {
    |   ^~~~~~~~~
            E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp:13:3: note:   template argument deduction/substitution failed:
    E:/github/cpp-templates/phase-1-foundations/01_function_templates/main.cpp:33:28: note:   deduced conflicting types for parameter 'T' ('int' and 'double')
    33 |      std::cout << max_value(3, 4.5) << "\n";
    |                   ~~~~~~~~~^~~~~~~~
            ninja: build stopped: subcommand failed.

#endif


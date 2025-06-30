### 03 - Template Type Deduction and `auto`

This topic explores how C++ deduces template types and how `auto`, `decltype`, and variadic templates work together.

```cpp
// Function template with explicit return type using decltype

// Version 1: auto return type (deduced)
template<typename T1, typename T2>
auto add_auto(T1 a, T2 b) {
    return a + b;
}

// Version 2: decltype for explicit deduction
template<typename T1, typename T2>
decltype(auto) add_decltype(T1 a, T2 b) {
    return a + b;
}

// Version 3: Variadic template sum
template<typename T>
T sum(T value) {
    return value;
}

// Recursive variadic template
template<typename T, typename... Args>
auto sum(T first, Args... rest) {
    return first + sum(rest...);
}

int main() {
    auto result1 = add_auto(2, 3);
    auto result2 = add_auto(2.5, 3);
    auto result3 = add_decltype(2, 3.5f);

    auto result4 = sum(1, 2, 3, 4, 5);
    auto result5 = sum(1.5, 2.5, 3.5);

    std::cout << "result1 type: " << typeid(result1).name() << "\\n";
    std::cout << "result2 type: " << typeid(result2).name() << "\\n";
    std::cout << "result3 type: " << typeid(result3).name() << "\\n";
    std::cout << "Sum result4: " << result4 << "\\n";
    std::cout << "Sum result5: " << result5 << "\\n";

    return 0;
}
```

#### 🧠 How It Works
- The variadic template `sum` uses recursion to sum an arbitrary number of arguments.
- `Args...` is a parameter pack that can hold any number of types.
- `sum(T first, Args... rest)` calls itself until only one value is left.
- This pattern demonstrates powerful compile-time expansion of arguments.
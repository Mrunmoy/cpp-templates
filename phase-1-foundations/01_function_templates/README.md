# C++ Template Learning Journey

This project tracks progress from beginner to expert in C++ template programming.

## 🔹 Phase 1: Foundations

### 01 - Function Templates
A simple example of a generic `max_value` function that works with different types.

#### 🧠 How It Works

**How the compiler knows what to use:**
When you call a function template, the compiler performs something called *template argument deduction*. It looks at the types of the arguments you pass in and figures out what `T` should be.
- `template<typename T>` tells the compiler to generate a version of the function for each type used.
- The `T` is a placeholder type that gets replaced by the compiler when you call the function.
- When you call `max_value(3, 7)`, `T` becomes `int`.
- When you call `max_value(3.14, 2.72)`, `T` becomes `double`.
- The same function definition works for many types — that's what makes it **generic**.


This mechanism is called **implicit instantiation**: the compiler generates a new version of the function for each unique type you use.
So calling `max_value(3, 7)` produces an `int` version, `max_value(3.14, 2.72)` produces a `double` version, and so on.

This is the foundation of **generic programming** in C++.
 foundation of **generic programming** in C++.
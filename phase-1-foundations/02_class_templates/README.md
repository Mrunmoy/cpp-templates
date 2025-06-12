
### 02 - Class Templates
A generic class template is a class that works with any data type.

Below is a simple `Box<T>` class that can hold a single value of any type.

```cpp
#include <iostream>
#include <string>

// Generic class template
template<typename T>
class Box {
public:
    Box(T value) : value_(value) {}
    void print() const {
        std::cout << "Box holds: " << value_ << "\n";
    }
public:
    T get() const { return value_; }
    void set(T newValue) { value_ = newValue; }

private:
    T value_;
};

int main() {
    Box<int> intBox(123);
    Box<std::string> strBox("Hello, Templates!");

    intBox.print();
    strBox.print();

    // Demonstrate set and get
    intBox.set(456);
    std::cout << "Updated intBox holds: " << intBox.get() << "
";

    strBox.set("Updated Text");
    std::cout << "Updated strBox holds: " << strBox.get() << "
";

    return 0;
}
```

#### 🧠 How It Works
- `template<typename T>` is declared before the class definition.
- When you instantiate `Box<int>`, the compiler creates a version of `Box` with `int`.
- `Box<std::string>` creates a separate version with `std::string`.

This is how you write reusable, type-safe classes with templates.

#### ✨ Enhancements Added
- `get()` and `set()` methods to retrieve and modify the internal value
- Example usage of `Box<int>` and `Box<std::string>` with updated values
- Reinforces how template classes behave just like regular classes once instantiated

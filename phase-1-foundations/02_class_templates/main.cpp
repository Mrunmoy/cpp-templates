#include <iostream>
#include <string>

// Generic class template
template<typename T>
class Box
{
public:
    Box(T value) : value_(value) {}
    void print() const
    {
        std::cout << "Box holds: " << value_ << "\n";
    }
public:
    T get() const { return value_; }
    void set(T newValue) { value_ = newValue; }

private:
    T value_;
};

int main()
{
    Box<int> intBox(123);
    Box<std::string> strBox("Hello, Templates!");

    intBox.print();
    strBox.print();

    // Demonstrate set and get
    intBox.set(456);
    std::cout << "Updated intBox holds: " << intBox.get() << "\n";

    strBox.set("Updated Text");
    std::cout << "Updated strBox holds: " << strBox.get() << "\n";

    return 0;
}
#include <format>
#include <iostream>

template <typename... Args>
void print(std::format_string<Args...> fmt, Args&&... args) {
    std::cout << std::format(fmt, std::forward<Args>(args)...);
}

int main(int argc, char** argv) {
    print("Hello, {}!\n", "World");

    return 0;
}

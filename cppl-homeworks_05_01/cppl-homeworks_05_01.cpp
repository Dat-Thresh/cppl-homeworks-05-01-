#include <iostream>
#include <vector>
#include <algorithm>

//шаблон
template <class T>
T to_square(T a) {
    return a * a;
};
//специализация для вектора
template<>
std::vector<int> to_square(std::vector<int> vec) {
    std::transform(vec.begin(), vec.end(), vec.begin(), to_square<int>);
    return vec;
};

//печатает int вектор
void print_vector(std::vector<int> vec) {
    for (auto x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}


int main() {
    int number = 4;
    std::vector<int> vec{ -1,5,16 };

    std::cout << "[IN]: " << number << std::endl;
    std::cout << "[OUT]: " << to_square(number) << std::endl;

    std::cout << "[IN]: ";
    print_vector(vec);
    std::cout << "[OUT]: ";
    print_vector(to_square(vec));
    return 0;
}
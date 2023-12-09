
#include <vector>
#include <algorithm>
#include <iostream>

//шаблон
template <class T>
T to_square(T a) {
    return a * a;
};

template<class U>
std::vector<U> to_square(std::vector<U> vec) {
    //std::transform(vec.begin(), vec.end(), vec.begin(), to_square<U>);
    for (auto &x : vec) {
        x = to_square(x);
    }
    return vec;
};

template <class T>
//печатает вектор
void print_vector(std::vector<T> vec) {
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

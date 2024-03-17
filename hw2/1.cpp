#include <vector>
#include <iostream>

void capacity_change(std::vector<int> vec);
void capacity_change_from_n(std::vector<int> vec);
void ultimate_capacity(std::vector<int> vec);
 
int main() {
    std::vector<int> vec;

    capacity_change(vec);

    std::cout << " " << std::endl;

    capacity_change_from_n(vec);

    std::cout << " " << std::endl;

    ultimate_capacity(vec);

    return 0;
}

void capacity_change(std::vector<int> vec){
    for (int i = 0; i < 16; ++i) {
        vec.push_back(1);
        std::cout << vec.capacity() << std::endl;
    }
}

void capacity_change_from_n(std::vector<int> vec){
    vec.reserve(5);
    for (int i = 0; i < 16; ++i) { 
        vec.push_back(1);
        std::cout << vec.capacity() << std::endl;
    }
}

void ultimate_capacity(std::vector<int> vec){
    vec.reserve(100000);
    long long prev_cap = vec.capacity();
    for (int i = 0; i < 10e9; ++i) {
        int j = 1;
        vec.push_back(j);
        if (vec.capacity() != prev_cap) {
            prev_cap = vec.capacity();
            std::cout << prev_cap << std::endl;
        }
    }
}

//
// Created by Max on 2021/08/10.
//

#include <iostream>
#include <cstdint>
#include <map>

int casting() {
    void *p = new std::map<int, const char *>();
    auto i = reinterpret_cast<std::uint64_t>(p);

    std::cout << i << std::endl;
    std::cout << p << std::endl;

    void *q;
    q = reinterpret_cast<void *>(i);

    std::cout << q << std::endl;

    return 1;
}

int main() {
     casting();
    return 0;
}

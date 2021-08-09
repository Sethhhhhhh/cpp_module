#include <iostream>
#include <cstdint>
#include "serialize.hpp"

uintptr_t   serialize(Data *ptr) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data *  deserialize(uintptr_t raw) {
    Data * ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}

int main(void) {

    Data *      data = new Data;
    uintptr_t   raw;

    data->i = 5;
    std::cout << std::hex << data << std::endl;
    
    raw = serialize(data);
    data = deserialize(raw);

    std::cout << data->i << std::endl;
    std::cout << std::hex << data << std::endl;

    return (0);
}
#include <iostream>
#include "solution.h"

int main(int,char**)
{
    MyHashMap* obj = new MyHashMap();
    obj->put(1,1);
    obj->put(2,2);
    std::cout << obj->get(1) << std::endl;
    std::cout << obj->get(3) << std::endl;
    obj->put(2,1);
    std::cout << obj->get(2) << std::endl;
    obj->remove(2);
    std::cout << obj->get(2) << std::endl;
    return 0;
}
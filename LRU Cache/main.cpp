#include <iostream>
#include <vector>
#include <string>
#include "lru_cache.h"

int main(int, char**) {

    std::vector<std::string> act = {"LRUCache","put","put","get","put","get","put","get","get","get"};
    std::vector<std::vector<int>> td = {{2},{1,1},{2,2},{1},{3,3},{2},{4,4},{1},{3},{4}};
    LRUCache* lRUCache = new LRUCache(td[0][0]);

    for (int i = 1; i < act.size(); i++)
    {
        if (act[i] == "put")
        {
            lRUCache->put(td[i][0], td[i][1]);
            std::cout << "null,";
        }
        if (act[i] == "get")
        {
            int id = lRUCache->get(td[i][0]);
            std::cout << id << ",";
        }
    }
    std::cout << std::endl;

    return 0;
}

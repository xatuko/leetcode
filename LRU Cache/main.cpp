#include <iostream>
#include <vector>
#include <string>
#include "lru_cache.h"

int main(int, char**) {

    std::vector<std::string> act = {"LRUCache","put","get","put","get","get"};
    std::vector<std::vector<int>> td = {{1},{2,1},{2},{3,2},{2},{3}};
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

#include <iostream>
#include <vector>

using namespace std;

vector<int> findTerminalNodes(vector<vector<int>>& graph)
{
    vector<int> result;
    for (size_t i = 0; i < graph.size(); i++)
        if (graph[i].size() == 0)
            result.push_back(i);

    return result;
}

bool isTerminal(int & idx, vector<int>& terminal_nodes)
{
    for (auto & el : terminal_nodes)
        if (idx == el)
            return true;

    return false;
}

bool path(vector<int>& terminal_nodes, vector<vector<int>>& graph, int node, vector<int> road)
{
    if (isTerminal(node, terminal_nodes))
        return true;

    for (auto & el : road)
        if (el == node)
            return false;

    road.push_back(node);
    bool ret = true;
    for (auto & el : graph[node])
        ret &= path(terminal_nodes, graph, el, road);
    return ret;
}

vector<int> eventualSafeNodes(vector<vector<int>>& graph)
{
    auto terminal_nodes = findTerminalNodes(graph);
    if (terminal_nodes.size() == 0 )
        return { };

    vector<int> result = { };
    for (size_t i = 0; i < graph.size(); i++)
    {
        vector<int> road = { };
        if (path(terminal_nodes, graph, i, road))
            result.push_back(i);
    }

    return result;
}

int main(int, char**){

    std::cout << "Hello, from leetcode!\n";
}

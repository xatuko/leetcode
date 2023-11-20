#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int garbageCollection(vector<string>& garbage, vector<int>& travel) {
		int glass_time = 0, paper_time = 0, metal_time = 0;
		int glass_col = 0, paper_col = 0, metal_col = 0;

		for (int i = garbage.size()-1; i >= 0; i--)
		{
			for (auto & g : garbage[i])
			{
				switch (g)
				{
					case 'G': glass_col++; break;
					case 'P': paper_col++; break;
					case 'M': metal_col++; break;
				}
			}
			if (i > 0)
			{
				if (metal_col > 0) metal_time += travel[i-1];
				if (paper_col > 0) paper_time += travel[i-1];
				if (glass_col > 0) glass_time += travel[i-1];
			}
		}

		return metal_col+metal_time+glass_col+glass_time+paper_col+paper_time;
	}
};

#endif // SOLUTION_H
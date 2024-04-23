#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	int binarySearch(std::vector<int>& nums, int start, int end, int target) {
		if (nums[start] == target) return start;
		if (nums[end] == target) return end;

		while (end-start > 1) {
			int mid = (start+end)/2;

			if (nums[mid] > target) end = mid;
			else start = mid;

			if (nums[start] == target) return start;
			if (nums[end] == target) return end;
		}
		return -1;
	}

	int search(std::vector<int>& nums, int target) {
		int l = 0, r = nums.size()-1;
		int pivot = 0;

		if (nums.size() == 1) {
			if (nums[0] == target) return 0;
			else return -1;
		}

		if (nums[l] < nums[r])
			return binarySearch(nums,l,r,target);

		while (r-l > 1) {
			int mid = (l+r)/2;

			if (nums[l] < nums[mid] && nums[r] < nums[mid]) l = mid;
			else r = mid;

			if (nums[mid] > nums[mid+1]) {
				pivot = mid;
				break;
			}
		}

		if (target >= nums[0]) return binarySearch(nums, 0, pivot, target);
		return binarySearch(nums, pivot+1, nums.size()-1, target);;
	}
};

#endif // SOLUTION_H
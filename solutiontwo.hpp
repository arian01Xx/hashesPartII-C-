#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

class SolutionOne {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // Si nums[mid] es mayor que nums[mid + 1], el pico está en la izquierda (incluyendo mid)
                high = mid;
            } else {
                // Si nums[mid] es menor que nums[mid + 1], el pico está en la derecha (excluyendo mid)
                low = mid + 1;
            }
        }

        // Al final del bucle, low y high convergerán en el índice del pico
        return low;
    }
/*
Input: nums = [1,2,3,1]
Output: 2
*/
};

#endif // SOLUTION_TWO_HPP
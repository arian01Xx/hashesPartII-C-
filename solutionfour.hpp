#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

class SolutionThree{
private:
    int pick;
	int guess(int number){
		if(number>pick){
			return -1;
		}else if(number<pick){
			return 1;
		}else{
			return 0;
		}
	}
	//poner un dato fijo fuera de toda clase y utilizarlo dentro de las clases
	//y asi no ponerlo como variable entrante en las funciones

public:
	SolutionThree(int n){
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distrib(1,n);
		pick=distrib(gen);
	}

	int guessNumber(int n){
		//1<x<n
		int start=1;
		int end=n;
		while(start<=end){
			int mid=start+(start-end)/2;
			if(guess(mid)==-1){
				end=mid;
			}else if(guess(mid)==1){
				start=mid+1;
			}else{
				return mid;
			}
		}
		return 0;
	}

	int getPick() const{
	    return pick;
	}
/*
Input: n = 10, pick = 6
Output: 6
*/
};

#endif // SOLUTION_FOUR_HPP
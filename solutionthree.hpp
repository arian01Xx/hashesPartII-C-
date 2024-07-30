#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

class SolutionTwo{
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        int n=potions.size();
        int lower=0, higher=n-1, index;
        long long temp;
        for(int i=0; i<spells.size(); i++){
            temp=spells[i];
            if(temp*potions[n-1] < success){
                ans.push_back(0);
                continue;
            }
            //busqueda binaria para esto
            lower=0, higher=n-1;
            while(lower<higher){
                index=lower+(-lower + higher)/2;
                if((long long)(temp*potions[index])<success){
                    lower=index+1;
                }else{
                    higher=index;
                }
            }
            ans.push_back(n-lower); //cantidad encontrada de hechizos que cumplieron con el requisito
        }
        return ans;
    }
/*
Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7
Output: [4,0,3]
*/
};

#endif // SOLUTION_THREE_HPP
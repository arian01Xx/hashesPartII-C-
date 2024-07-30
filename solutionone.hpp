#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

class Solution {
public:
    int check(vector<int>& piles, int h, int mid){
        //mid seria (low+high)/2;
        int ans=0;
        for(int i=0; i<piles.size(); i++){
            ans += (piles[i]/mid);
            if(piles[i]%mid!=0){  //si da una división exacta ans incrementa en uno
            //si no es una división exacta, se necesita una hora adicional
                ans++;
            }
        }
        //retorno con condicional, solo si es menor o igual a h
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end()); //se ordena las pilas de bananas
        int n=piles.size();
        int low=1; //velocidad minima para comer
        int high=piles[n-1];  //velocidad maxima para comer es la cantidad de bananas en la pila
        while(low<high){
            int mid=(low+high)/2;
            if(check(piles,h,mid)){
                high=mid;  //si es posible intenta con una velocidad menor, actualizando high
            }else{
                low=mid+1; //sino incrementa la velocidad minima
            }
        }
        return low;
    }
/*
Input: piles = [3,6,7,11], h = 8
Output: 4
*/
};

#endif // SOLUTION_ONE_HPP
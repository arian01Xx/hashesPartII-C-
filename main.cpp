#include "solutionfour.hpp"
#include "solutionthree.hpp"
#include "solutiontwo.hpp"
#include "solutionone.hpp"

using namespace std;

int main(){
	Solution solution;
	vector<int> input={3,6,7,11};
	int hours=8;
	int output=solution.minEatingSpeed(input, hours);
	cout<<"ANSWER ONE= "<<output<<endl;

	SolutionOne solution1;
	vector<int> peaks={1,2,3,1};
	int outputOne=solution1.findPeakElement(peaks);
	cout<<"ANSWER TWO= "<<endl;

	SolutionTwo solution2;
	vector<int> spells={5,1,3};
	vector<int> potions={1,2,3,4,5};
	long long success=7;
	vector<int> outputTwo=solution2.successfulPairs(spells, potions, success);
	cout<<"ANSWER THREE= "<<endl;
	for(int i=0; i<outputTwo.size(); i++){
		cout<<outputTwo[i]<<endl;
	}

	int n=10;
	SolutionThree solution3(n);
	int pickNumber=solution3.getPick();
	cout<<"Picked number (for testing purposes): "<<pickNumber<<endl;
	int outputThree=solution3.guessNumber(n);
	cout<<"Guessed Number ="<<outputThree<<endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void ans1(vector<int> a, int target){
 	vector<int> vect;
	vect.push_back(a[0]);
	for(int i=1;i<a.size();i++){
		vect.push_back(a[i]+vect[i-1]);
	}
 	int lo = -1, hi = vect.size();
 	while(lo<hi-1){
 		int mid = lo+((hi-lo)/2);
 		if(vect[mid] <= target) lo = mid;
 		else hi = mid;
 	}
 	cout << (lo+1)<< endl;
 }

int main() {
	vector<int> a = {2,3,4,5,56,3,8};
	ans1(a,9);
	ans1(a,6);
	return 0;
}

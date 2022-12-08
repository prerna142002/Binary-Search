#include <bits/stdc++.h>
using namespace std;

void ans6(vector<int> vect, int target){
	vector<int> ps;
	ps.emplace_back(vect[0]);
	for(int i=1;i<vect.size();i++) ps.emplace_back(ps[i-1]+vect[i]);
	int lo = -1, hi = vect.size();
	while(lo<(hi-1)){
		int mid = lo+((hi-lo)/2);
		if(vect[mid] < target) lo=mid;
		else hi = mid;
	}
	cout<<hi;
}

int main() {
	vector<int> a = {8,14,15,56,53,48,47};
	// vector<int> a = {8,14,15,5657};
	ans6(a,48);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

 int search(vector<int> vect, int lo, int hi, int target){
 	while(lo<(hi-1)){
 		int mid = lo+((hi-lo)/2);
 		if(vect[mid] < target) lo = mid;
 		else hi = mid;
 	}
 	return ( vect[lo] == target ? lo : ( (vect[hi] == target) ? hi : -1 ) );
 }
 
 int findMax(vector<int> a, int target){
 	int lo = -1, hi = a.size();
 	while(lo<hi-1){
 		int mid = lo+((hi-lo)/2);
 		if(a[lo] < a[mid] ) lo = mid;
 		else hi = mid;
 	}
 	return lo;
 }
 
 void ans2(vector<int> vect, int target){
 	int maxIndex = findMax(vect,target);
 	int s1 = search(vect, -1, maxIndex+1, target);
 	int s2 = search(vect, maxIndex-1, vect.size(), target);
 	if(s1 == -1) cout<<s2;
 	else cout<<s1;
 }


int main() {
	vector<int> a = {8,14,15,56,3,8,7};
	// vector<int> a = {8,14,15,5657};
	ans2(a,1);
	return 0;
}

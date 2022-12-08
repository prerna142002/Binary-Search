#include <bits/stdc++.h>
using namespace std;

 void lowerBound(vector<int> a, int target){
	int lo = -1, hi = a.size();
	while( lo<(hi-1) ){
		int mid = lo+((hi-lo)/2);
		if(a[mid] < target) lo = mid;
		else hi = mid;
	}
	cout << (lo==-1?-1:a[lo]) << endl;
 }
 
  void upperBound(vector<int> vect,int target){
	int lo = -1, hi = vect.size();
	while( lo<(hi-1) ){
		int mid = lo+((hi-lo)/2);
		if(vect[mid] <= target) lo = mid;
		else hi = mid;
	}
	cout << (hi == vect.size()?-1:vect[hi]) << endl;
 }

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

int main() {
	vector<int> a = {8,14,15,56,3,8,7};

	return 0;
}

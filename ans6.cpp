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

int findMaxIndex(vector<int> a, int target){
	int lo = -1, hi = a.size();
	while(lo<(hi-1)){
		int mid = lo+((hi-lo)/2);
		if(a[mid] < a[mid+1]) lo = mid;
		else hi = mid;
	}
	return hi;
}

 int searchDesc(vector<int> vect, int lo, int hi, int target){
 	while(lo<(hi-1)){
 		int mid = lo+((hi-lo)/2);
 		if(vect[mid] > target) lo = mid;
 		else hi = mid;
 	}
 	return ( vect[lo] == target ? lo : ( (vect[hi] == target) ? hi : -1 ) );
 }

void ans4(vector<int> vect, int target ){
	int maxIndex = findMaxIndex(vect,target);
	int s1 = search(vect, -1, maxIndex+1, target);
 	int s2 = searchDesc(vect, maxIndex-1, vect.size(), target);
 	// cout << s2;
 	if(s1 == -1) cout<<s2;
 	else cout<<s1;
}

void ans6(vector<int> vect, int target){
	vector<int> ps;
	ps.emplace_back(vect[0]);
	for(int i=1;i<vect.size();i++) ps.emplace_back(ps[i-1]+vect[i]);
	int lo = -1, hi = vect.size();
	while(lo<(hi-1)){
		int mid = lo+((hi-lo)/2);
		if(ps[mid] < target) lo=mid;
		else hi = mid;
	}
	cout<<hi;
}

int main() {
	vector<int> a = {8,14,15,56,53,48,47};
	// vector<int> a = {8,14,15,5657};
	ans6(a,95);
	return 0;
}

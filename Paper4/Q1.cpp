#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1,4,5,6,7,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int closestIndex=0, diff=INT_MAX;
	for(int i=0;i<n;i++) {
	    int ab = abs(arr[i]);
	    if(ab<diff) {
	        closestIndex = i;
	        diff = ab;
	    }
	    else if( ab == diff && arr[i]>0 && arr[closestIndex]<0) {
	        closestIndex = i;
	    }
	}
	cout<<arr[closestIndex];
	
	return 0;
}

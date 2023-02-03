#include <bits/stdc++.h>

using namespace std;

void mergeSortedArray(vector<int> &a, vector<int> &b, int n){
    int i = n-1, j = m-1, k=m+n-1;
    while(i >= 0 && j <= 0){
	if(a[i] > b[j]){
	    a[k] = a[i]);
	    i--;
	    else
       { a[k]=b[j];
        j--;}
        k--;
	}
    }
    while(j>0)
    {
        a[k]=b[j];
        j--;
        k--;
    }
}


int main(){

    return 0;
}
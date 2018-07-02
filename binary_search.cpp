#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x){
	
    int mid = (l+r)/2; 
	
    if (arr[mid] == x)
    {
        return mid; 
    }
    else if (arr[mid] > x)
    {
        binary_search(arr, l, mid - 1, x);
    }
    else if (arr[mid] < x)
    {
        binary_search(arr, mid + 1, r, x);
    }
    else
    {
    return -1;	
    }
    
	
}

int main(){
  	
    int arr[] = {1,2,3,4,5}; 
    int r = 4; // n-1, ending index 
    int l=0; // starting index
  
    int query=5; // Searching for the Number '5' 
    int res=binary_search(arr,l,r,query); // must return index num= 4 
    
    
    if(res==-1)
    cout << "Not Found!" << endl; 
    else
    cout << res << endl; 
  	
}

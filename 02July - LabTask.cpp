// Task: An array named X given- {2,1,7,5,4,3,2}; Sort this array using insertion sort.  
// Implement linear search for this array. 
// (Optional: Binary Search implementation) 

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int s, int query){
    int found=-1;
    for(int i=0; i<s; i++){
        if(query==arr[i]){
            found=1;
        }
    }
    return found;
}


void insertion_sort(int a[], int n){

	for(int i=1; i<=n-1; i++){
		int key=a[i];
		int j = i-1;
		while(a[j]>key && j>=0){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int binary_search(int arr[], int l, int r, int x){

    if(l>r)
        return -1;

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

    int arr[] = {2,1,7,5,4,3,2};
    cout << "Before sorting: ";
    printArray(arr, 7);

    cout << "After Sorting: ";
    insertion_sort(arr, 7);
    printArray(arr, 7);

    cout << endl;

    while(1){

    cout << "Search integer: ";
    // Searching
    int query;

    cin >> query;

    //int res=binary_search(arr, 0, 6, query);
    int res=linear_search(arr, 7, query);

    cout << endl << endl;

    if(res==-1)
        cout << "The number " << query <<
        " NOT FOUND in the array" << endl;
    else
        cout << "The number " << query <<
        " is present in the array" << endl;

    cout << endl << endl;
    }

}

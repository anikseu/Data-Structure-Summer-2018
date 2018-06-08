#include<bits/stdc++.h>
using namespace std;

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

void printArray(int arr[], int s){
    for(int i=0; i<s; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void generateArray(int arr[], int n){
    srand(time(0));
    for(int i=0; i<n; i++){
        arr[i]=rand()%1000 + 1; // range 1-1000
    }
}

int main(){

	  // on core i5 3GHz  
    // 0.069 for 10k
    // 6.428 for 100k

    int n;
    cin >> n;
    int arr[n];
    generateArray(arr, n);

    double start=clock();
    insertion_sort(arr, n);
    double stop=clock();
    double calc = (stop-start)/double(CLOCKS_PER_SEC);

    cout << "time: " << calc << endl;

    cout << endl << endl;
    printArray(arr, n);


}

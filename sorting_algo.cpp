#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
	
	for(int j=0; j<=n-2; j++){
		for(int i=0; i<=n-2-j; i++){
			if(a[i]>a[i+1])
			swap(a[i], a[i+1]); 
		}
	}
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

void printArray(int a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl; 
	
}

int main(){

	int a[]={5,4,3,2,1};
	int n=5;
	
	bubble_sort(a,n); 
	//insertion_sort(a, n); 
	printArray(a, n); 
	
}

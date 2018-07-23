/*
	
	UVA 11988 - Broken Keyboard 
	Verdict : Accepted 
	Time: 0.210 s 
	LinkedList using STL Library

*/

#include <bits/stdc++.h>
using namespace std;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

	string s; 

	while(cin>>s){

		list<char>charList; 
		list<char>::iterator it = charList.begin(); 

		for(int i=0; i<s.length(); i++){
			if(s[i]=='[')
				it = charList.begin(); 
			else if(s[i]==']')
				it = charList.end(); 
			else 
				charList.insert(it, s[i]); 
		}

		for(it=charList.begin(); it!=charList.end(); it++)
			cout << *it; 
		cout << endl; 


	}




return 0;
}

#include <bits/stdc++.h>
#include<vector>
#define ll long long 
using namespace std;

#define tst  int t ; cin >> t ; while (t--)

int main(){
	
	stack<char>stk ;
	int brk(0) ;	
	string s ; cin >> s ; 
	for (int i=0 ; i<s.size() ; i++) 
	{
		brk += (s[i]=='(') ;
		if (s[i]=='(') stk.push(s[i]) ;
		else if (brk){ stk.push(s[i]) ; --brk ; } 
		
	}
	cout << stk.size()-brk ;
	
	return 0 ;
}

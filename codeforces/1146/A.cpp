#include <bits/stdc++.h>
#include<string.h>
using namespace std;



int main(){
	
	string s ; cin >> s ; int a{} ; 
	for (int i=0 ; i<s.size() ; i++)
	{
		a+=(s[i]=='a') ;
	}
	if (2*a>s.size()) cout << s.size() ;
	else
	{
		cout << a+a-- ;
		
	}

	return 0 ;
}

#include <bits/stdc++.h>
#include<vector>
#define ll long long 
using namespace std;

#define tst  int t ; cin >> t ; while (t--)

int main(){
	

	deque<char>q ;
	string s ; cin >> s; 
	int k ; cin >> k ;
	for (int i=0 ; i<s.size() ; i++) q.push_back(s[i]) ;
	for (int i=0 ; k ; i++)
	{
		if (q.back()  > '0' ){ q.back()-- ; k-- ; }
		else{ q.pop_back() ; k-- ; } 
	}
	while (!q.empty()) 
	{
		cout << q.front() ; q.pop_front() ;
	}
	
	return 0 ;
}

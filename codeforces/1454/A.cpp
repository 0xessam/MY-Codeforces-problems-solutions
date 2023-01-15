#include <iostream>
#include<deque>
using namespace std;

#define tst  int t ; cin >> t ; while (t--)

int main(){
	
	tst {
	deque<int>dq ;
	int n ; cin >> n ;
	int indx= (n+2-1)/2-1 ;
	dq.push_back(n) ;
	for (int i=1 ; i<n ; i++) dq.push_back(i) ;
	for (int i=0 ; i<n ; i++) cout << dq[i] << ' ' ;
	cout << '\n' ;
	}
	return 0 ;
}

//https://codeforces.com/contest/1437/problem/A


//Date: 27 Oct 2020
//problem A
//Educational CF Round 97
//Written by: n00b_coder
 
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
    	long long l, r;
   		cin >> l >> r;
    	if (2 * l > r)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
	
    }
}

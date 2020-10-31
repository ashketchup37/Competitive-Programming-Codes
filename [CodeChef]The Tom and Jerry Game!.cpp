//https://www.codechef.com/JUNE20B/problems/EOEO

//Date: 13 Jun, 2020
//June Challenge 2020
//Problem Code: EOEO
//Written By: daffy_duck

#include<bits/stdc++.h>
//using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    int t;
	//taking the number of test case.
    std::cin>>t;
    while(t--)
    {
		/*
		1) If Ts is odd, any number that is even is a winning number. There are (Ts-1)/2 such winning numbers.
		2)If Ts is even, we will have to find a Js that has at least one two more as its multiple and is less than Ts.
		*/
    	ll ts = 1, jw = 0;
    	std::cin>>ts;
    	if(ts % 2 == 1)
    	{
    		jw = (ts - 1) / 2;
    	}
    	else{
    		ll tmp = ts;
    		ll count = 0;
			while (tmp%2 == 0)
			{
	     		count++;
	      		tmp /= 2;
			}
			jw = ts / (1LL << (count + 1));
    	}
    	std::cout<<jw<<std::endl;
    }



    return 0;
}

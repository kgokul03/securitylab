#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	map<char,char>ma;
	char c1='a',c2='D';
	for(int i=0;i<=25;i++)
	{
		ma[c1]=c2;
		c1=c1+1;
		if(c1=='x')
		c2='A';
		else 
		 c2=c2+1;
	}
	
	for(int i=0;i<s.size();i++)
	{
		cout<<ma[s[i]];
	}
	cout<<"\n";
}
return 0;
}

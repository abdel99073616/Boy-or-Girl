#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n=s.length();
	set<int>se;
	for(int i=0;i<n;i++)
	{
		se.insert(s[i]);
	}
	int size=se.size();
	if(size%2==0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
return 0;
}

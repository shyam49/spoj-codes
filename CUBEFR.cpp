#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;
#define MAX 1000000
int cf[MAX+1];
int k=0;
void soe()
{
	int i,j;
	int a[MAX+1];
	long long t;
	for(i=0;i<=MAX;i++)
	a[i]=1;
	for(i=2;i*i*i<=MAX;i++){
		t=(long long)i*(long long)i*(long long)i;
		for(j=t;j<=MAX;j+=t){
			a[j]=0;
		}
	}
	for(i=1;i<=MAX;i++){
		if(a[i])
		cf[k++]=i;
	}
}
void fun(int* low,int n)
{
	if(*low == n)
	{
		cout << (low - cf) + 1;
		return;
	}
	else
	{
		cout << "Not Cube Free";
		return;
	}
}
int main() {
	
	// your code here
	int t,i,n;
	soe();
	cin >> t;
	int z=0;
	int *low;
	while(t--){
		
		
			cin >> n;
			low=lower_bound(cf,cf+k,n);
			
			cout << "Case" <<" "<<++z<<":"<<" ";
			fun(low,n);
			cout << endl;
		
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
long parent[10005];
long findparent(long x)
{
	if(parent[x]==x)
	return x;
	return	(parent[x]=findparent(parent[x]));
}
void u(long a,long b)
{
	long px,py;
	px = findparent(a);
	py=findparent(b);
	if(px!=py){
		parent[py]=px;
	}
	return;
}
int main()
{
	long n,m;
	cin>>n>>m;
	long a,b,p,count=0;
	long i;
	for(i=1;i<=n;i++)
	parent[i]=i;
	if(n==m+1){
		while(m--){
			cin>>a>>b;
			u(a,b);
		}
		p=parent[1];
		for(i=1;i<=n;i++){
			if(parent[i]!=p)
			{
				count++;
				break;
			}
		}
		if(count==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}

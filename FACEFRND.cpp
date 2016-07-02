#include <iostream>
using namespace std;
#include<set>

int main() {
	
	// your code here
	int n,m,temp,i,count=0,fr;
	set<int>f;
	set<int>fof;
	cin >> n;
	while(n--){
		cin >> fr >> m;
		f.insert(fr);
		for(i=0;i<m;i++)
		{
			cin >> temp;
			fof.insert(temp);
		}
		
	}
	set<int>::iterator it;
	set<int>::iterator jt;
	int s=fof.size();
	for(it=fof.begin();it!=fof.end();it++){
		for(jt=f.begin();jt!=f.end();jt++){
			if(*it == *jt)
			{
				s=s-1;
			}
		}
	}
	cout << s <<endl;
	return 0;
}

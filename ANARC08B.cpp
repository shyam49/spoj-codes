#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[300000],b[300000],ra[300000],rb[300000],res[300000],fres[300000];
int main()
{
	map<int,string> mns;
	map<string,int> msn;
	int i,n,j,k,t,la,lb,carry;
	mns[0]="063";
	mns[1]="010";
	mns[2]="093";
	mns[3]="079";
	mns[4]="106";
	mns[5]="103";
	mns[6]="119";
	mns[7]="011";
	mns[8]="127";
	mns[9]="107";
	msn["010"]=1;
	msn["093"]=2;
	msn["079"]=3;
	msn["106"]=4;
	msn["103"]=5;
	msn["119"]=6;
	msn["011"]=7;
	msn["127"]=8;
	msn["107"]=9;
	msn["063"]=0;
	string s,str,rstr;
	while(1){
		cin>>s;
		la=0;lb=0;
		n=s.size();
		if(s=="BYE")
		break;
		for(i=0;i<n;i+=3){
			k=0;
			if(s[i]=='+')
			break;
			for(j=i;j < i+3;j++){
				str+=s[j];
			}
			t=msn.find(str)->second;
			a[la++]=t;
			str.clear();
		}
		for(i=i+1;i<n;i+=3){
			k=0;
			if(s[i]=='=')
			break;
			for(j=i;j<i+3;j++){
				str+=s[j];
			}
			t=msn.find(str)->second;
			b[lb++]=t;
			str.clear();
		}
		for(i=0;i<la;i++){
			ra[i]=a[la-i-1];
		}
		for(i=0;i<lb;i++){
			rb[i]=b[lb-i-1];
		}
		k=0;
		carry=0;
		if(la<lb){
			for(i=0;i<la;i++){
				t=ra[i]+rb[i]+carry;
				res[k++]=t%10;
				carry=t/10;
			}
			for(i=la;i<lb;i++){
				t=rb[i]+carry;
				res[k++]=t%10;
				carry=t/10;
			}
		}
		else if(la>lb){
			for(i=0;i<lb;i++)
			{
				t=ra[i]+rb[i]+carry;
				res[k++]=t%10;
				carry=t/10;
			}
			for(i=lb;i<la;i++){
				t=ra[i]+carry;
				res[k++]=t%10;
				carry=t/10;
			}
		}
		else{
			for(i=0;i<la;i++){
				t=ra[i]+rb[i]+carry;
				res[k++]=t%10;
				carry=t/10;
			}
		}
		while(carry){
			res[k++]=carry%10;
			carry/=10;
		}
		for(i=0;i<k;i++){
			fres[i]=res[k-i-1];
		}
		i=0;
		while(fres[i]==0){
			i++;
		}	
		for(i;i<k;i++){
			rstr+=mns.find(fres[i])->second;
		}
		cout<<s;
		cout<<rstr<<endl;
		rstr.clear();
	}
	return 0;
}

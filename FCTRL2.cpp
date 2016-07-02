#include <bits/stdc++.h>
using namespace std;
#define MAX 300
int multiply(int number[],int size,int x)
{
	int i,temp,carry;
	carry=0;
	for(i=0;i<size;i++){
		temp=number[i]*x + carry;
		number[i]=temp%10;
		carry=temp/10;
	}
	while(carry){
		number[size]=carry%10;
		carry/=10;
		size++;
	}
	return size;
}
void fact(int n)
{
	int number[MAX];
	int i,size=1;
	number[0]=1;
	for(i=2;i<=n;i++){
		size=multiply(number,size,i);
	}
	for(i=size-1;i>=0;i--)
	cout << number[i];
	cout <<endl;
}

int main() {
	
	// your code here
	int t;
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		fact(n);
	}
	return 0;
}

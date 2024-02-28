#include<bits/stdc++.h>

int add(int n)
{
	if(n==1){
		return 1;
	}
	else{
		return n+add(n-1);
	}
}

int main(){
	int n;
	std::cin>>n;
	int res=add(n);
	std::cout<<res;
	
}

// 도전과제 : 계단오르기(Top-Down : 메모이제이션)
#include<iostream>
int dp[46];
int dfs(int n){
	if(dp[n])return dp[n];
	if(n<3)return dp[n]=n;
    return dp[n]=dfs(n-1)+dfs(n-2);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<dfs(n);
}
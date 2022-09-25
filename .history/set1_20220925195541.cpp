#include<bits/stdc++.h>
using namespace std;
class Sl{
  public:
  	int solve(vector<int> &ans){
  	int k= accumulate(ans.begin(), ans.end(),0);
  	int n = ans.size();
  	int cur =0;
  	pair<int,int> diff = {INT_MAX,0};
    for(int i=0;i<n-1;i++){
        cur += ans[i];
        k-=ans[i];
        int curr = abs((cur/(i+1))-(k/(n-i-1)));
        if(curr < diff.first){
        	diff ={curr, i};
        }
    }
    return diff.second+1;
  	}
};
int main(){
	int n;
	cin >> n ;
	vector<int> ans(n);
	for(int i=0;i<n;i++)
		cin>>ans[i];
	Sl ob;
	cout << ob.solve(ans);
}
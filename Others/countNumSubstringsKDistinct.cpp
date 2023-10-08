#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
	long long withK(string &s,int k){
		int n = s.length();
		if(n==0){
		    return 0;
		}
		int mp[26] = {0};
		long long ans = 0;
		int index = 0;
		int dcnt = 0;
		for(int i=0;i<n;i++){
			mp[s[i]-'a']++;
			if(mp[s[i] - 'a'] == 1){
			    dcnt++;
			}
			while(dcnt > k){
				mp[s[index] - 'a']--;
				if(mp[s[index]-'a'] == 0){
					dcnt--;
				}
				index++;
			}
			ans += (i-index+1);
		}
		return ans;
	}
    long long int substrCount (string s, int k) {
		long long finalAns = withK(s,k) - withK(s,k-1);
		return finalAns;
		//TC - O(n*n);
		/*int n = s.length();
		long long ans = 0;
		int cnt[26];
		for(int i=0;i<n;i++){
			int count = 0;
			memset(cnt,0,sizeof(cnt));
			for(int j=i;j<n;j++){
				if(cnt[s[j] - 'a'] == 0){
					count++;
				}
				cnt[s[j] - 'a']++;
				if(count == k){
					ans++;
				}
				if(count > k){
					break;
				}
			}
		}
		return ans;*/
    }
};
int main(){
    int t; cin >> t;
    while (t--){
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
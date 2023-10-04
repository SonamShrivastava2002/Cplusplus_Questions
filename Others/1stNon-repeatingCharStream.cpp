#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char,int> cnt;
            queue<int> q;
            string ans;
            for(int i=0;i<A.length();i++){
                char ch = A[i];
                //increase count
                cnt[ch]++;
                //pushing in queue
                q.push(ch);
                while(!q.empty()){
                    if(cnt[q.front()]>1){
                        //repeating character
                        q.pop();
                    }
                    else{
                        //non-repeating character
                        ans.push_back(q.front());
                        break;
                    }
                }
                if(q.empty()){
                    ans.push_back('#');
                }
            }
            return ans;
		}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
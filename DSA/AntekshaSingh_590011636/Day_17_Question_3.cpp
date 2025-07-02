#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
int squareroot(int n) {
    if(n==0 || n==1) {
        return n;
    }
    int low=1, high=n, answer=-1;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(mid<=n/mid) {
            answer=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return answer;
}
int main() {
    int n; cin>>n;
    int output=squareroot(n); 
    cout<<output<<endl;
return 0;
}

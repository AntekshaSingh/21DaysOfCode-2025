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
int firstocc(int a[], int n, int target) {
    int low=0, high=n-1, result=-1;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(a[mid]==target) {
            result=mid;
            high=mid-1;
        }
        else if(a[mid]<target) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return result;
}
int main() {
    int n, target; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    cin>>target;
    int output=firstocc(a, n, target);
    cout<<output<<endl;
return 0;
}

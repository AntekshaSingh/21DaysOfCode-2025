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
int binarysearch(int a[], int n, int target) {
    int low=0, high=n-1;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(a[mid]==target) {
            return mid;
        }
        else if(a[mid]<target) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return -1;
}
int main() {
    int n, target; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    cin>>target;
    int output=binarysearch(a, n, target);
    cout<<output<<endl;
return 0;
}

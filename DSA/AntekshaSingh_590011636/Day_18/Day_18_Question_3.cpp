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
void sortcolors(int a[], int n) {
    int low=0, mid=0, high=n-1;
    while(mid<=high) {
        if(a[mid]==0) {
            swap(a[low], a[mid]);
            low++; mid++;
        }
        else if(a[mid]==1) {
            mid++;
        }
        else {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
void printarray(int a[], int n) {
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sortcolors(a, n);
    printarray(a, n);
return 0;
}

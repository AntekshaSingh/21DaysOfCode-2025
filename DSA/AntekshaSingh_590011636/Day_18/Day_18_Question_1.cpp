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
void selectionsort(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        int first=i;
        for(int j=i+1; j<n; j++) {
            if(a[j]<a[first]) {
                first=j;
            }
        }
        swap(a[i], a[first]);
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
    selectionsort(a, n);
    printarray(a, n);
return 0;
}

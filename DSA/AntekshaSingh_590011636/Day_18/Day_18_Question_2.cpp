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
void insertionsort(int a[], int n) {
    for(int i=0; i<n; i++) {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
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
    insertionsort(a, n);
    printarray(a, n);
return 0;
}

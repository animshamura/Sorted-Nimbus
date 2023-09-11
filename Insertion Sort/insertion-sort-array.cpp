
#include <bits/stdc++.h>

using namespace std;

int t,id;

void Input (int ar []){
    for(int i = 0; i < t; i++) cin>>ar[i];
}


void InsertionSort(int ar [] ){
    for(int i = 1; i < t ; i++){
        id=ar[i];
        int j = i - 1;
        while( j>=0 && ar[j] > id){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = id;
    }
}

void Print (int ar []){
    for (int i = 0; i < t; i++) cout<<ar[i]<<" ";
}

int main()
{
    cin>>t;
    int ar[t];
    Input(ar);
    InsertionSort(ar);
    Print(ar);
    return 0;
}

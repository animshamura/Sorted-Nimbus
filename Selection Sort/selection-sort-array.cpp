#include <bits/stdc++.h>

using namespace std;

int t,id;

void Input (int ar []){
    for(int i = 0; i < t; i++) cin>>ar[i];
}


void SelectionSort(int ar []){
    for(int i = 0; i < t - 1 ; i++){
        id=i;
        for(int j = i+1; j < t; j++){
            if(ar[j] < ar[id]){
               id=j;
            }
        }
        if(id!=i) swap(ar[id],ar[i]);
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
    SelectionSort(ar);
    Print(ar);
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int t;

void Input(int ar []){
    for(int i = 0; i < t; i++) cin>>ar[i];
}


void BubbleSort(int ar []){
    for(int i = 0; i < t - 1 ; i++){
        for(int j = 0; j < t - i; j++){
            if(ar[j] > ar[j+1]){
                swap(ar[j],ar[j+1]);
            }
        }
    }
}


void Print (int ar []){
    for (int i = 0; i < t; i++) cout<<ar[i]<<" ";
}

int main(){
    cin>>t;
    int ar[t];
    Input(ar);
    BubbleSort(ar);
    Print(ar);
    return 0;
}

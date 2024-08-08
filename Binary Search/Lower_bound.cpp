#include<bits/stdc++.h>
using namespace std ;
//for finding the index in array such that arr[ind]>=x 
 int LowerBound(vector<int> arr , int x , int n  ){
    n = arr.size();
    int low = 0 ;
    int high = n -1 ;
    int ans = n ;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid - 1 ;
        }
        else{
            low = mid + 1 ;
        }
    
    }
    return ans ;
}


int main(){
    vector <int> a = {3, 5, 8, 15, 19};
    int n = 5 , x = 10 ;
    int Answer = LowerBound(a,x,n);
    cout<<"The lower bound is "<<Answer<<endl;
    cout<<"The element is to be inserted at  "<<Answer<<endl;
    //for inserting the element same lower bound logic can be applied 
    return 0 ;
}

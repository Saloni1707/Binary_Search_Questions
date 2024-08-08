#include <bits/stdc++.h>
using namespace std ;
int FirstOccurence(vector<int> arr , int n , int x){
    //using binary search approach -->Also the optimised approach
    int low = 0 ;
    n = arr.size() - 1;
    int high = n - 1 ;
    int ans = 0 ;
    while(low<=high){
    int mid = (low + high) / 2 ;
    if(arr[mid]==x){
        ans = mid ; //update the value of ans 
        high = mid- 1 ;
    } 
    else if (arr[mid]<x){
        mid = low + 1 ;//move to greater side i.e towards right 
    }
    else{
        high = mid - 1; 
    }
    }
    return ans ; 
}
//found another approach here 
vector<int> res(2,-1); //here a vector res has been initialised with size 2 & initialized with both elements as -1. This vector will store the first and last indices of x.
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                res[0] = i;    //stores the first index
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == x){
                res[1] = i;    //stores the last index 
                break;
            }
        }
        
        return res;

int  main(){
    vector<int> a ={1,2,3,3,3,6};
    int n = 6 , x = 3 ;
    int firstAns = FirstOccurence(a,n,x);
    cout<<"The first occurence is "<<firstAns << endl;
    return 0 ;
}

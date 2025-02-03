#include<iostream>
#include<array>
using namespace std;
int peakElement(array<int,4> nums){
    int mid,l=0,h=nums.size()-1;
    while (l<h){
        int mid = l + (h - l) / 2;
        if (nums[mid] < nums[mid + 1]) l = mid + 1;
        else h = mid;
    }
    return l;
}
int main(){
    array<int,4> nums = {1,2,7,3};
    int idx = peakElement(nums);
    if (idx == -1){
        cout << "No peak element!";
    }else{
        cout << "The peak index is : "<<idx;
    }
}
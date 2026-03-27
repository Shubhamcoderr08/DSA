#include <iostream>
using namespace std;

int first_occurence(int nums[],int target){
int s=0,e=6,ans=7;
int f=-1,l=-1;
while(s<=e){
    int m = (s+e)/2;

    if(nums[m]==target){
      f=m;
      e =m-1;
    }

    else if(nums[m]<target){
      s = m+1;
    }

    else{
    e = m-1;
    }
}

return f;

}

int last_occurence(int nums[],int target){
int s=0,e=6,ans=7;
int f=-1,l=-1;
while(s<=e){
    int m = (s+e)/2;

    if(nums[m]==target){
      l=m;
      s=m+1;
    }

    else if(nums[m]<target){
      s = m+1;
    }

    else{
    e = m-1;
    }
}

return l;

}




int main(){

    int nums[] = {0, 0, 1, 1, 1, 2, 3};
    int target =1;

    int first=first_occurence( nums, target);
    int last =last_occurence(nums,target);

    int count = last - first +1;
    cout<<"Occurence of "<<target<<":"<<count;


}
#include<iostream>
using namespace std;


int main(){
    // Largest element in an array
    // int age[5]={2,7,5,4,2};
    // int maxNo=age[0];
    // for(int i=0;i<5;i++){
    //     if(age[i]>maxNo){
    //         maxNo=age[i];
    //     }
    // }
    // cout<<maxNo;

    //Second largest element in an array  way 1 Brute force
    // int arr[6]={1,2,3,5,7,7};
    // int secondlar;
    // for(int i=4;i>=0;i--){
    //     if(arr[i]!=arr[5]){
    //         secondlar=arr[i];
    //         break;
    //     }    
    // }
    // cout<<secondlar;

    //Second largest element in an array  way 2 Better way
    // int arr[6]={1,2,6,5,7,7};
    // int largest=arr[0];
    // for(int n=0;n<5;n++){
    //     if(arr[n]>largest){
    //         largest=arr[n];
    //     }
    // }
    // int secondlargest=arr[0];
    // for(int i=0;i<5;i++){
    //     if(arr[i]>secondlargest && arr[i]!=largest){
    //         secondlargest=arr[i];
    //     }
    // }
    // cout<<secondlargest;

    //Second largest element in an array way 3 Optimal way 
    // int arr[6]={1,2,6,5,8,7};
    // int lar=arr[0];
    // int slar=-1;
    // for(int i=0;i<6;i++){
    //     if(arr[i]>lar){
    //         slar=lar;
    //         lar=arr[i];
    //     }
    //     else if(arr[i]< lar && arr[i]> slar){
    //         slar=arr[i];
    //     }
    // }
    // cout<<slar;

    // return 0;
}
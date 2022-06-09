#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(){
    int count;
    for(long int i=0;i<50000;i++){
        for(long int i=0;i<5000;i++)
        {
            count=i/33;
        }
    }
}

int linearSearch(int arr[], int si,int ei, int key){
    if(si>ei){
        return 0;
    }
    if(arr[si]==key){
        return 1;
    }
    else{
        return linearSearch(arr,si+1,ei,key);
    }
}

int binarySearch(int arr[], int n,int s,int e,int key){
    if(s>l){
        return 0;
    }
    mid=(s+e)/2;
    if(arr[mid]==key){
        return 1;
    }
    else if(key>arr[mid]){
        return binarySearch(arr,n,mid+1,e,key);
    }
    else{
        return binarySearch(arr,n,s,mid-1,key);
    }
}

void selectionSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int largest=-999;
        int largeInd=-1;
        int j=0;
        for(;j<=i;j++){
            //delay();
            if(arr[j]>largest){
                largest=arr[j];
                largeInd=j;
            }
        }
        int temp=arr[j-1];
        arr[j-1]=arr[largeInd];
        arr[largeInd]=temp;
    }
}

int main(){
    int arr[20000];
    int n;
    clock_t start,end;
    printf("Enter the N for Time Complexity Testing :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    //start=clock();
    //selectionSort(arr,n);
    //end=clock();
    //printf("Time Complexity for SelectionSort is %f :",(double)((end-start)/CLOCKS_PER_SEC));

    //start=clock();
    //linearSearch(arr,n,999);
    //end=clock();
    //printf("Time Complexity for LinearSearch is %f :",(double)((end-start)/CLOCKS_PER_SEC));

    selectionSort(arr,n);
    start=clock();
    binarySearch(arr,n,999);
    end=clock();
    printf("Time Complexity for binarySearch is %f :",(double)((end-start)/CLOCKS_PER_SEC));

    return 0;
}

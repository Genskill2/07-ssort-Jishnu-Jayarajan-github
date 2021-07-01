#include <stdio.h>
#include <assert.h>

void swap_max(int arr[], int l, int n ){ 
	int largest = arr[n];
	int swap_no = largest;
	for(int i=n;i<l;i++){
	  if(arr[i]>largest)
	    largest = arr[i];
	    }
	arr[n]= largest;
	for(int i=n+1; i<l;i++){
	  if (arr[i] == largest)
	    arr[i] = swap_no;
	    }
	 }
	 
	 
void ssort(int arr[], int l){
	for(int i=0;i<l;i++){
	  swap_max(arr,l,i);
	  }
	}

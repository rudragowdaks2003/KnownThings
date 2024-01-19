#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
return -1;
}
int binarysearch(int arr[],int key,int n){
	int l=0,r=n;
	while(l<=r){
	int mid=(l+r)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		r=mid-1;
	}
	else 
		l=mid+1;
	}
	return -1;
}

int main(){
 	int n,arr[50],search;
	cout<<"Enter the size of array: ";
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
		cout<<"Element ["<<i<<"] : ";
 		cin>>arr[i];
	 }
	 int key;
	 cout<<"Enter the element/key to search: ";
	 cin>>key;
	 cout<<"\n1.Linear Search\n2.Binary search\nEnter to select searching:";
	 cin>>search;
 if(search==1){
	cout<<"Element found at ["<<linearsearch(arr,key,n)<<"] using Linear Search.\n";
}

 if(search==2){
	cout<<"Element found at ["<<binarysearch(arr,key,n)<<"] using Binary search\n";
}
	 
	 return 0;
 }

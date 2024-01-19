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
	int mid=(l+r)/2;
	if(arr[mid]==key)
		return mid;
		if(arr[mid]>key)
		l=mid+1;
		else r=mid-1;
	return -1;
}

int main(){
 	int n,arr[50],search;
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 
	 int key;
	 cin>>key;
	 
	 
	 cout<<"enter to select searching:";
	 cin>>search;
 if(search==1){
		cout<<linearsearch(arr,key,n);
}

 if(search==2){
	cout<<binarysearch(arr,key,n);
}
	 
	 return 0;
 }


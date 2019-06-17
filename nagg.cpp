#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

	int array1[100];
	int array2[50];
	int size1,size2;
	cout << "Enter the number of elements in array1"<< endl;
	cin >> size1;
	cout << "Enter the number of elements in array2"<< endl;
	cin >> size2;
	cout << "Enter " <<size1 << "sorted Elements of array1"<< endl;
	for(int i=0;i<size1;i++){
		cin>>array1[i];
	}
	cout << "Enter " <<size2 << "sorted Elements of array1"<< endl;
	for(int i=0;i<size2;i++){
		cin>>array2[i];
	}
	
	int i=size1-1,j=size2-1;
	int k=size1+size2;
	while(k>=0 && j>=0 && i>=0){
		if(array1[i]>array2[j])
		   {
		   	array1[--k]=array1[i];
		   	array1[i]=INT_MIN;
		   	i--;
		   }
		else {
		
		  	array1[--k]=array2[j];
		  	array2[j]=INT_MIN;
		  	j--;
		  }
	}
    while( j>=0){
    	array1[--k]=array2[j--];
	}

	
	for(i=0;i<size1+size2;i++){
		cout << array1[i]<<" ";
	}
}

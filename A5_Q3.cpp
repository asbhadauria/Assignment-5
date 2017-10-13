#include <iostream>
using namespace std;

int klarge(int array_1[],int size_1,int k1){
	int index_1=0,max=array_1[0],swap_1=0;
	if(k1==0)
		return array_1[size_1];
	else{
		for(int i=0;i<size_1;i++)
			if(array_1[i]>max){
				index_1=i;
				max=array_1[index_1];
			}
		swap_1=array_1[--size_1];
		array_1[size_1]=max;
		array_1[index_1]=swap_1;
		klarge(array_1,size_1,--k1);
	}
		
}

int ksmallest(int array_2[],int size_2,int k2){
	int index_2=0,min=array_2[0],swap_2=0;
	if(k2==0)
		return array_2[size_2];
	else{
		for(int i=0;i<size_2;i++)
			if(array_2[i]<min){
				index_2=i;
				min=array_2[index_2];
			}
		swap_2=array_2[--size_2];
		array_2[size_2]=min;
		array_2[index_2]=swap_2;
		ksmallest(array_2,size_2,--k2);
	}
		
}

    int main() {
    	int k1,k2,size,k_large,k_smallest;
    	cout<<"Enter the size of the array";
    	cin>>size;
    	int array_1[size],array_2[size];
    	for(int i=0;i<size;i++){
    		cout<<"Enter your Number";
    		cin>>array_1[i];
    	}
    	for(int i=0;i<size;i++)
    		array_2[i]=array_1[i];
    	cout<<"Enter the value of k for kth largest";
    	cin>>k1;
    	cout<<"Enter the value of k for kth smallest";
    	cin>>k2;
    	k_large=klarge(array_1,size,k1);
    	k_smallest=ksmallest(array_2,size,k2);
    	cout<<k1<<"th Largest Entry:"<<k_large<<endl;
    	cout<<k2<<"th Smallest Entry"<<k_smallest<<endl;
    	return 0;
    }


#include <iostream>
using namespace std;

void calc_max(int array_1[],int size_1,int max){
	for(int i=0;i<size_1;i++)
		if(array_1[i]>max)
			max=array_1[i];
	cout<<"Largest Entry:"<<max<<endl;		
}

void calc_min(int array_2[],int size_2,int min){
	for(int i=0;i<size_2;i++)
		if(array_2[i]<min)
			min=array_2[i];
	cout<<"Smallest Entry:"<<min<<endl;		
}

int main() {
	int size1,size2;
	cout<<"Enter the size of first array:";
	cin>>size1;
	cout<<"Enter the size of second array:";
	cin>>size2;
	int array1[size1],array2[size2],merge[size1+size2];
	for(int i=0;i<size1;i++){
		cout<<"Enter your Number for 1st Array:";
		cin>>array1[i];
	}
	for(int i=0;i<size2;i++){
		cout<<"Enter your Number for 2nd Array:";
		cin>>array2[i];
	}
	for(int i=0;i<size1+size2;i++){
		if(i<size1)
			merge[i]=array1[i];
		else
			merge[i]=array2[i-size1];
	}
		calc_max(merge,size1+size2,merge[0]);
		calc_min(merge,size1+size2,merge[0]);
	return 0;
}
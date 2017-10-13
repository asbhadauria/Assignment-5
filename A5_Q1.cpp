#include <iostream>
using namespace std;

int calc_sum(int array[],int size,int sum){
	for(int i=0;i<size;i++)
		sum+=array[i];
	return sum;	
}

int main() {
	int sum=0,size;
	cout<<"Enter the size of the array";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Enter your Number";
		cin>>array[i];
	}
	sum=calc_sum(array,size,sum);
	cout<<"Sum of the elements equals "<<sum;
	return 0;
}
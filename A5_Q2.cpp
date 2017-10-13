#include <iostream>
using namespace std;

int max(int array_1[],int size_1,int max){
	for(int i=0;i<size_1;i++)
		if(array_1[i]>max)
			max=array_1[i];
	return max;		
}

void min(int array_2[],int size_2,int min){
	for(int i=0;i<size_2;i++)
		if(array_2[i]<min)
			min=array_2[i];
	cout<<"Smallest Entry:"<<min<<endl;		
}

void mean(int array_3[],int size_3,int avg){
	for(int i=0;i<size_3;i++)
		avg+=array_3[i];
	cout<<"Average of all elements equals"<<(avg/10.0)<<endl;	
}

void freq(int array_4[],int size_4,int freqmax,int maxm){
	int freq,num;
	for(int i=0;i<maxm;i++){
		for(int j=0;j<size_4;j++)
			if(array_4[j]==i)
				freq++;
		if(freq>freqmax){
			freqmax=freq;
			num=i;
		}
		freq=0;
	}
	cout<<"Number "<<num<<" has the largest frequency being equal to "<<freqmax<<endl;	
}

void median(int array_5[],int size,int median){
	if(size%2==0)
		cout<<"Median Element:"<<array_5[(size-1)/2]<<endl;
	else	
		cout<<"Median Element:"<<array_5[(size)/2]<<endl;
}

int sort(int array_6[],int size_6,int k,int dummy){
	int index_6=0,max=array_6[0],swap=0;
	if(k==0)
		median(array_6,dummy,array_6[0]);
		
	else{
		for(int i=0;i<size_6;i++)
			if(array_6[i]>max){
				index_6=i;
				max=array_6[index_6];
			}
		swap=array_6[--size_6];
		array_6[size_6]=max;
		array_6[index_6]=swap;
		sort(array_6,size_6,--k,dummy);
	}
 
}
int main() {
	int size;
	cout<<"Enter the size of the Array";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Enter your Number";
		cin>>array[i];
	}
	for(int i=0;i<size;i++)
		cout<<array[i];
	int mx=max(array,size,array[0]);
	cout<<"Largest Entry:"<<mx<<endl;
	min(array,size,array[0]);
	mean(array,size,0);
	freq(array,size,0,mx);
	sort(array,size,size,size);
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1; i<N; i++){
		for(int v=0; v<N; v++){ 
			if(v==i) cout<<"["<<d[v]<<"] ";
				else cout<<d[v]<<" ";
		}
		cout<<" => ";
		int po=po-1;
		po=i;
		for(int y=i; y>0; y--){
			if(d[y]>d[y-1]){
				swap(d,y,y-1);
				po=y-1;
			}
		}
		
		for(int b=0; b<N; b++){ 
			if(b==po) cout<<"["<<d[b]<<"] ";
			else cout<<d[b]<<" ";
		}
		cout<<"\n";
	}
}	

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

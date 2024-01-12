#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
		
    int i, key, j;
    for (i = 1; i < N; i++) {
        key = d[i];
        j = i - 1;
 
        
        while (j >= 0 && d[j] < key) {
            d[j + 1] = d[j];
            j = j - 1;
        }
        d[j + 1] = key;
		cout<<"Pass "<<i<<":";
		int b=0;
			while(b<N)
			{
				cout<<d[b];
				if(b!=N-1){
				    cout <<" ";
				}
				b++;
			}
			cout<<endl;
    }
	

}

int main(){
	int a[11] = {12,25,30,44,2,0,4,7,55,25,50};
	cout << "Input Array:";
	for(int i = 0; i < 11; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,11);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 11; i++) cout << a[i] << " ";	
}


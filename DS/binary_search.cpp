#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class BinarySearch {
      private:
              int array[10];
              int n;
              int key;
      public:
             void insert();
             void sort();
             void search();
 };

void BinarySearch::insert() {
    cout<<"enter the number of array => ";
    cin>>n;
    cout<<"now enter elements"<<"\n";
    for(int i=0;i<n;i++) {
    	cin>>array[i];
    }    
    cout<<"enter the number Which your try to find => ";
    cin>>key;
}

void BinarySearch::sort() {
    int temp,i,j,min;
    for(i=0;i<n-1;i++) {
        min=i;                     
        for(j=i+1;j<n;j++) {
            if(array[j]<array[min]) {
                min=j;
        	}
        }
		temp=array[min];                        
		array[min]=array[i];
		array[i]=temp;
    }
    
         cout<<"the sorted numbers are"<<"\n";
     for(int i=0;i<n;i++)
     cout<<array[i]<<"\t";
     cout<<endl;

}


void BinarySearch::search() {
	int index = -1;
	
	int start = 0;  
	int end = n - 1;  
	int mid;
	while ( start <= end)  {  
		mid = (start + end) / 2;  
		if(array[mid] == key)  {  
			index = mid;  
			break;
		}  else if (array[mid] > key)  {  
		    end = mid - 1;  
		} else if (array [mid] < key) {  
		    start = mid + 1;  
		}  
	}  
	
	cout<<"element find at index => "<<index;
}
//int main() {
//    
//	BinarySearch obj;
//    obj.insert();
//    obj.sort();
//    obj.search();
//    getch();
//    return 0;
//}




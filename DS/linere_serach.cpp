#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class LinereSearch {
      private:
              int array[10];
              int n;
              int key;
      public:
             void insert();
             void search();
 };

void LinereSearch::insert() {
    cout<<"enter the number of array => ";
    cin>>n;
    cout<<"now enter elements"<<"\n";
    for(int i=0;i<n;i++) {
    	cin>>array[i];
    }    
    cout<<"enter the number Which your try to find => ";
    cin>>key;
}

void LinereSearch::search() {
	int index = -1;
	for(int i=0;i<n-1;i++){
	    if(array[i] == key) {
        	index = i;
        	break;
		}
    }
    cout<<"element find index => "<<index;
}
//int main() {
//    
//	LinereSearch obj;
//    obj.insert();
//    obj.search();
//    getch();
//    return 0;
//}




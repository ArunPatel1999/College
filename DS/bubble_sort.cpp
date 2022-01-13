#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class bubble
{
	private:
		int array[10];
		int n;
	public:
		
            void insert() { 
				cout<<"enter the number of array:";
				cin>>n;
				 
				cout<<"now enter elements"<<"\n";
				for(int i=0;i<n;i++)  {
				  cin>>array[i];	
				}			  
			}
            void sort() {
			    int i,k,temp;
			    for(i=0;i<n-1;i++) {
			        for(k=0;k<n-i-1;k++)  {
			            if(array[k]>array[k+1])	{
			                temp=array[k];
			                array[k]=array[k+1];
			                array[k+1]=temp;
			            }
			        }
     			}
			}
            void display();
};

void bubble::display(){
	for(int i=0;i<n;i++) {
		cout<<array[i]<<"\t";
	}
};

//int main()
//{
//	bubble obj;
//    obj.insert();
//    
//    //Display after inserting
////    cout<<"\nInserted elements are:";
////    obj.display();
//    
//    //Display after sort
//    cout<<"\nSorted elements are:";
//    obj.sort();
//    obj.display();
//    
//}


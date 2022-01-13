#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class selection {
      private:
              int array[10];
              int n;
      public:
             void insert();
             void sort();
             void display();
};

void selection::insert() {
    cout<<"enter the number of array";
    cin>>n;
    cout<<"now enter elements"<<"\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
     }
}

void selection::sort()
{
    int temp,i,j,min;
    for(i=0;i<n-1;i++)
   {
           min=i;                     
                 for(j=i+1;j<n;j++)            
                           {
                               if(array[j]<array[min])
                                  {
                                      min=j;
                                  }
                           }
temp=array[min];                        
array[min]=array[i];
array[i]=temp;
    }
}
void selection::display()
{
     cout<<"the sorted numbers are"<<"\n";
     for(int i=0;i<n;i++)
     cout<<array[i]<<"\t";
     cout<<endl;
}
//int main()
//{
//    selection obj;
//    obj.insert();
//    obj.sort();
//    obj.display();
//    getch();
//    return 0;
//}




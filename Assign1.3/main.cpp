#include <iostream>

using namespace std;
//9
void putLargestFirst(double a[],int size){
int i;
double num=0;
        for (i=0; i<size; i++){
                if (a[0]<a[i]){
                a[0]= a[i];
        }
        }
a[4]= 3.1;
cout<< "{";
for (i=0; i<size; i++){
cout <<" "<<a[i]<<",";}
cout <<"}";
}
//10
bool isUnique(int a[],int size){
    int i,j;
    int unq1=0;
    int unq2=0;

    for(i=0; i<size; i++){
            unq1=a[i];
            for (j=i+1; j<size; j++){
        if(unq1==a[j]){
            unq2 = 1;
        }
            }
    }
    if (unq2 == 1){
        cout <<"False";
        }
        else{
            cout <<"True";
        }
    }


int main()
{
    system("COLOR 0C");

   double arr[] = {3.1, 9.2, 4.0, 6.7, 12.1, 8.9, 1.4};
   putLargestFirst(arr, 7);
   cout<<"\n";

   int a[] = { 1, 2, 3, 4, 5, 6 };
   isUnique(a,6);
    return 0;
}

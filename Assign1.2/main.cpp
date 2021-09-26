#include <iostream>
using namespace std;
// Q6
void printArray(int arr[],int size){
int i;
for (i=0; i<size; i++){
cout << " " << arr[i]<<",";
}
}
//7
void printMemory(int mem [], int size) {
int i;
cout<< "\nAddress     Contents"<<endl;
for (i=0; i<size; i++){
        int*mem_ptr=&mem[i];
cout << " " << &mem[i]<<endl;
cout << "\t     " << mem[i]<<endl;

}
}
//8
void printNumberPattern(int n){
int i,j;
for(i=1; i<=n; i++){
   for(j=i; j<=n; j++){
    cout<<" "<<j;
   }
   cout <<"\n";
                }
}
//9
void putLargestFirst(double a[],int size){
int i;
for (i=0; i<=size-1; i++){
        int j=0;
while (j==0){
        if(a[i]>a[i+1]){
         int temp = a[i];
         a[i] = a[i+1];
         a[i+1] = temp;
         j=1;
        }

}

}
for (i=0; i<=size; i++){
cout <<" "<<a[i];}
}
//10
int main()
{
system("COLOR 0C");

int arr[]={3,9,4,6,7,8,5};
printArray(arr,7);
cout<<"\n";

int mem[] = {3, 9, 4, 6, 7, 8, 1};
   printMemory(mem, 7);


   printNumberPattern(9);
   cout<<"\n";

   double arr[] = {3.1, 9.2, 4.0, 6.7, 12.1, 8.9, 1.4};
   putLargestFirst(arr, 7);



    return 0;
}

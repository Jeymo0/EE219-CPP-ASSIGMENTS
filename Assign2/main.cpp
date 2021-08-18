#include <iostream>

using namespace std;

//1
  void reverseArray(double a[], int size) {
  int i,j,temp;
  for (i=0; i<size; i++){
        for (j=i+1; j<size; j++){
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;

        }
  }

            }
  }
  // arrays start with element 0

  /* 1. Declares the array name arr with the double variable type and the elements within the array.

2. Points the double type variable to the first element of arr array.

3. Sets the pointer variable address of the fifth element within the array to the double variable ptr2.

4. Ptr1 points to arr and Ptr2 points to the address of element 5. You cant reassign an address of element within an array.

5. This sets the second element within the array to 5.0 as ptr1 points the the arr, and the value is pre incremented by 1 and the pointer is dereferenced.

6. Once again the address of an element within an array cant be altered so the decrementation is invalid.*/

//5 The parameters of the function are the argument variables passed through the function, which are called by reference,this is done so any changes to the variables will only be made to both the parameters variables and,a and b.
void swap(int& a,int& b)
{
    int temp=0;
    temp = a;
    a = b;
    b = temp;

}
//4
unsigned int getByte(unsigned int num, unsigned int byteIndex) {
    int i;
    int x=0;
    for(i=1; i<5; i++){
        return (((1 <<(8*(byteIndex+i)))-1) & (num >>(byteIndex*8)+x));
            x+=8;}
}


int main()
{
    system("COLOR 0C");
    double array[] = {1.2, 2.3, 3.4, 4.9, 5.3};
   reverseArray(array,5);
   cout<<"\n";
   for (int i=0; i<5; i++){
    cout << array[i] << ",";
   }

   int a = 1, b = 2;
   swap(a, b);
    cout << " " <<a << "," << " " << b << endl;

    cout << hex << getByte(0x87654321, 0) << endl;
    cout << hex << getByte(0x87654321, 1) << endl;
    cout << hex << getByte(0x87654321, 2) << endl;
    cout << hex << getByte(0x87654321, 3) << endl;


    return 0;
}

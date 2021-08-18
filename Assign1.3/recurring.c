#include <iostream>

using namespace std;

void putLargestFirst1(double b[],int size){
// if the problem had to keep looping
int i,j;
    while(1){
        j=0;
        for (i=0; i<size-1; i++){
                if (b[i]>b[0]){
                    double temp = b[i];
                    b[i]= b[0];
                    b[0] = temp;
                    j=1;
                }

        }
        if(j==0){
            break;
        }


}

for (i=0; i<size; i++){
cout <<" "<<b[i]<<",";}
}

int main()
{
    system("COLOR 0C");

    double brr[] = {3.1, 9.2, 4.0, 6.7, 12.1, 8.9, 1.4};
   putLargestFirst1(brr, 7);
   cout <<"\n"<<endl;

    return 0;
}

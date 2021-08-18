#include <iostream>
using namespace std;
//1
void printOdds(int num){
int i;
for (i=0; i<=num; i++){
    if(i%2==1){
        cout <<" "<<i<<",";
    }
}
}
//2
void countOdds(int arr[], int size){
int i;
int sum=0;
    for (i=0; i<=size; i++){
        if(arr[i]%2==1){
                sum++;
           }
    }
    cout <<""<<sum;
}
//3
void getAndPrintNameChars(){
string NameChars;
int i;
cout << " "<<endl;
cout << "Input your string"<<endl;
getline (cin,NameChars);
int n=NameChars.length();
for(i=0; i<n; i++){
    cout<<""<<i+1<< "."<<""<<NameChars[i]<<endl;
                    }

}
//4
double frac(double d){
     return (d-(int(d)));

}
//5
void printBinary(int a){
    //Integer size must be within 2^31-1 integer range (signed type)
int i=0;
int j;
    int num[32]={0};
    while (a>0){
        if (a%2!=0){
            a=(a-1)/2;
            num[i]=1;
            i++;
    }else{
            a=a/2;
            num[i]=0;
            i++;
    }
}
    for (j=31;j>-1;j--){
        if ((j+1)%8==0){
                cout<<" ";
        }
        cout<<num[j];
    }
}


int main()
{
    system("COLOR 0C");
printOdds(11);

cout <<" "<<endl;

int arr[] = {3,9,4,6,7,8,1};
countOdds(arr,7);

getAndPrintNameChars();
cout <<"\n";

printBinary(1234);
cout << "\n\n";
cout << "The fractional part is: " <<frac(4.32) << endl;

    return 0;

}

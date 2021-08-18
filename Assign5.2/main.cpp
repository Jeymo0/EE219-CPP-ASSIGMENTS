#include <iostream>

using namespace std;
//4
void printPattern(int size) {
    if (size > 0) {
        printPattern(size - 1);
        printf("*");
    }
}
    int pattern(int size) {
        if (size > 0) {
            pattern(size - 1);
        }
        printPattern(size);
        printf("\n");
    }

//5
double pow(double a, unsigned int n) {
    if (n == 0)
        return 1;
    else
        return (a*pow(a,n-1));
}


int main() {

    system("COLOR 0C");
    int size=10;
    pattern(10);

    pow(5,2);
    cout<<""<<pow(5,2);
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

//6 Cyclic swap
void sortAscending(int& a, int& b, int& c) {
int temp=0;
temp = b;
b=a;
a=c;
c=temp;



}

class Complex{
    private: double Real;
             double Imagin;
    public:
        Complex(){Real=0,Imagin=0;}
        Complex(double x, double y){x=Real,y=Imagin;}
        Complex(const Complex &src ){Real=src.r1,Imagin=src.r2;}

            void setvalue(double x,double y){
                double &r=x;
                double &i=y;
            cout <<r<< "+"<<i<<"j"<<endl;}
            void print(double x, double y);
            void quadraticRoots(double a,double b,double c,Complex& r1,Complex& r2);

        };

void Complex::print(double x, double y){
    if(y<0){
        cout <<x<<y<<"j";
                }
            else if(y==0){
                cout <<x;
                    }
                else{
            cout <<x<< "+"<<y<<"j";}
            }
//10

void Complex::quadraticRoots(double a, double b, double c,Complex &r1,Complex &r2) {
                double discrim;
                discrim=(b*b)-(4*a*c);
                if (discrim>0) {
                r1=(-b+sqrt((discrim)/(2*a)));
                r2=(-b-sqrt((discrim))/(2*a));
                void r1.print(r1) {cout << "" << r1;}
                void r2.print(r2) {cout << "" << r2;}

                }
}
int main()
{
    system("COLOR 0C");
    int a=8, b=24, c=2;
    sortAscending(a,b,c);
    cout << a << "," << b << "," << c << endl;

    Complex R1;
    R1.setvalue(6,3);

Complex c1(4,5), c2(2,-4), c3(3,0);
   c1.print(4,5);
   cout << endl;
   c2.print(2,-4);
   cout << endl;
   c3.print(3,0);
   cout << endl;

   Complex r1, r2;
   r1.print();
   int num_roots = quadraticRoots(11, 3, 10, r1, r2);
   cout << "The quadratic has " << num_roots << " root(s): ";
   if (num_roots == 2) { cout << " and "; r2.print(); }
   cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
//1
string cipher(string s, int n) {
    string encry="";
    string decry="";
    int i;
    cout<< "The inputted string is: "<<s<<endl;
    for (i=0; i<s.length(); i++) {
        encry+=char(int(s[i]+n-97)%26+97);// 97 for lowercase on ascii table
    }
    cout << "Encrypted: string: "<<encry;
    for (i=0; i<s.length(); i++) {
        decry+=char(int(s[i]-(+n)-97)%26+97);
    }
    cout << "\nDecrypted string: "<<decry<<endl;
}

//2
string prefixMatch(const string & a, const string & b) {

    int str1[26] = {0};
    int str2[26] = {0};
    int i, j;
    char res;
    char asciic = 'a';
    int ac = (int) asciic;// turn char into ascii value = 97
    cout << "The shared letters between: " <<a<<" and "<< b<<" are: ";
        for (i=0; i<a.length(); i++) {
        str1[(int) a[i] - ac]++;// turning string array to ascii value
         }
         for (i=0; i< b.length(); i++) {
        str2[(int) b[i] - 97]++;
         } // increment count for each letter present within the string
         for (i = 0; i < 26; i++) {
            if (str1[i] !=0&&str2[i] !=0) {
                for (j = 0; j < min(str1[i], str2[i]); j++) {
                    res= (char) (ac + i);
                 cout << res;//printing the characters for the number of times they are present in both strings,if present in array
                    }
                        }
                                }
                cout<<"\n";
                                            }
//3
char frequentChar(const string & s){
    int count[256] = {0};
    int max = 0;
    char result;

    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
        if (max < count[s[i]]) {
            max = count[s[i]];
            result = s[i];
        }
    }

    return result;
}
//4
class Circle{
private:
    double x;
    double y;
    double radius;
public:
    Circle( double x_c, double radius,double y_c):x(x_c),y(y_c),radius(radius){};
    void contain(double x_c,double y_c, double radius){
        if (x_c<=0 ||y_c<=0 || radius<=0){
            cout<<"False";
        }
        else{
            cout << "True";
        }
    }

};


int main() {
    system("COLOR 0C");
    cipher("[]qr|)r|)j)wx})|x)|nl{n})vn||jpn*",2);

    prefixMatch("program","progress");
    cout <<""<<frequentChar("test");
    cout<<"\n";
    Circle c1(2,0,2);
    c1.contain(2,2,0);
    cout<<""<<endl;

    return 0;
}

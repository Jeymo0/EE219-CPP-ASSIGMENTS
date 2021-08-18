#include <iostream>
#include <string.h>
#include  <sstream>
#include <cstring>
using namespace std;

//5
class Song {
private:
    string artist;
    string title;
    int playCounter=0;
    static int MP;
    int value=rand() %8+1;


public:
    Song() { (artist="Freelancer");( title="New Tune"); playCounter=value;}

    Song(string art, string tit, int pC) : artist(art), title(tit), playCounter(
            pC = 0) {};// parenthesis need to initialise constructor for class
    Song(Song &copy);// prototype must be declared within class
    void play() {
        playCounter++;
    }

    void print() {
        cout << " " << artist << endl;
        cout << " " << title << endl;
        cout << " " << playCounter << endl;

    }
    int returnPc(){
    cout<<" "<<value<<endl;
    return value;
    }

//7
   static int MostPopular( int arr[], int n) {
      //  for(int i=0; i<n; i++){
            // if(MP<arr[i].returnPc){
         //       MP=arr[i].returnPc;
        //    }
        int const &MPc=MP;
        //
     //  }

     cout<<"The most played song is: "<<" "<<MPc;
    };
};
int Song::MP=0;
//6
Song::Song(Song &copy){
    artist=copy.artist;
    title=copy.title;
    playCounter=copy.playCounter=0;// New value must be on the same line!!!
    cout<<" "<<copy.artist<<endl<<" "<<copy.title<<endl<<" "<<copy.playCounter<<endl;

}
//8
class SalesItem {
private:
    string descrip;
    double price;
    static double VATRate;
public:
    SalesItem(string dp, double p) : descrip(dp), price(p) {}
    void print2(){
        cout << " " << descrip << endl;
        cout << "The price is: " << price << endl;
    }
    static void setVATRate(double newVAT) { VATRate = newVAT; }

    void getPriceWithVAT(){
        double postVAT=0;
       postVAT= price +(price*VATRate);
        cout<<" "<< descrip <<endl;
        cout << "The price is: " << postVAT << endl;

    }
    };
//9
//Create an array of objects with 2,1(must have a name) or no parameters
class People{
    private:
    char name[80];
    double age;
    public:
    People() {strcpy(name,"Rando");age=2;}
    People(char* name,double age=18){
        strcpy(this->name,name);
        this->age=age;
    }
    void show(){
        cout<<name<<"\t"<<age<<endl;
    }

};
//10
class Test{
    private: int i;
    public: Test(int _i) : i(_i) {}

    int get() { return i; }
};
// If there is no destructor and new command is used there is a memory leak, as the memory the pointer would not be deallocated outside of scope, data member will be deallocated out of scope though.

double SalesItem::VATRate=0.23;
int main()
{
    system("COLOR 0C");
    Song a1("ROLLIN N CONTROLLIN FREESTYLE","DUSTY LOCANE",0);
    Song a2("Pop Out(feat. Lil Tjay)","Polo G & Lil Tjay",0);
    Song a3("Baby Pluto","Lil Uzi Vert",0);
    Song a4("Lil Boat","88 Glam",0);
    Song a5("All I want is a Yacht","SAINt JHN",0);
    // all done as title then artist name
    a1.play();
    a1.play();
    a1.play();
    a1.print();

    Song copy=a1;
    copy.print();

 SalesItem a7("This is a shirt",40000.69);
 a7.print2();
 SalesItem::setVATRate(0.88);
 a7.getPriceWithVAT();

    People per[4]={People("Kate",21),People("Biscuit"),People("TomTom",30)};

    per[0].show();
    per[1].show();
    per[2].show();
    per[3].show();


    Test* arr[10];
    for (int i=0; i<10; i++){
        arr[i]=new Test(i);
    }
        // add a Test object for each array element
        for (int i=0; i<10; i++){
            arr[i]->get();
            cout<<" "<<arr[i];
        }
            // call get() on each object and print out the value
            cout<<"\n";
            Song arrSongs[5];
            for(int i=0; i<5; i++){
                arrSongs[i].print();
                arrSongs[i].returnPc();
            }
            Song::MostPopular(reinterpret_cast<int *>(arrSongs), 5);
    return 0;
}

#include <iostream>
#include <string>

using namespace std;
//2
class Student{
private:
    string firstname;
    string lastname;
    int StudentID;

public:
    Student(int id,string fn, string ln): StudentID(id),firstname(fn),lastname(ln){}

    virtual string getType()=0;
    virtual void printInfo(){
        cout << "Student ID:" <<" "<<StudentID<< endl;
        cout << "Student Name:" <<" "<< firstname <<" "<< lastname << endl;

    }
};


//Q3
class ResearchStudent:
        public Student{
        private:
        string supervisorName;
        string thesisTitle;

public:

    ResearchStudent(int id, string fn, string ln, string sup, string thes): Student(id,fn,ln){ supervisorName=sup; thesisTitle=thes;}

    string getType(){
        return ("ResearchStudent");
    }
    void printInfo(){
        Student::printInfo();
        cout<<"Supervisor name:"<<" "<<supervisorName<< endl;
        cout<< "Thesis name:" <<" "<< thesisTitle<< endl;

    }

};
//Q4
class TaughtStudent:
        public Student{
            private:
            string modNames[10];
            int numRegisteredModules;
        public:
            TaughtStudent(int id, string fn, string ln):Student(id,fn,ln){
            numRegisteredModules=0;
            }

    bool registerFor(const string & moduleNames){

        if(numRegisteredModules<=10) {
            this->modNames[numRegisteredModules++] = moduleNames;
            return true;
        }
        else {return false;}

    }

    void printInfo(){

        Student::printInfo();
        cout<<"Number of Registered Modules: "<<numRegisteredModules<<endl;
        cout<<"Their registered modules are:"<<endl;

        for(int i=0;i<numRegisteredModules;i++){
            cout<<modNames[i] << endl;
        }
    }

    string getType() {
        return ("Taught Student");
    }

};
//Q5
void studentTester() {

    ResearchStudent Adeyemo(18359056,"Adeyemo","Sobowale","Leon Ncube","Optical Communications & RF Waves");
    ResearchStudent David(18456565,"David","Sheridan","Kristina","Project Management");
    TaughtStudent Kate(17654321,"Kate","Shortal");
    TaughtStudent Conor(17735383,"Conor","Keogh");


    Kate.registerFor("Administrative Law");
    Kate.registerFor("Criminal Law");
    Kate.registerFor("Law & Technology");

    Conor.registerFor("Air conditioning & ventilation");
    Conor.registerFor("Acoustics");
    Conor.registerFor("Renewable energy technologies");

    Student* stud[4];
    stud[0] = &Adeyemo;
    stud[1] = &David;
    stud[2] = &Kate;
    stud[3] = &Conor;


    cout << "Student information: "<<endl;
    for (int i=0; i<4; i++) {
        string SgetType = stud[i]->getType();
        cout << "Student Type: " << SgetType << endl;
        cout<<"This student has the following details: "<<endl;
        stud[i]->printInfo();
        cout <<endl;
    }
}

int main(){
    system("COLOR 0C");
    studentTester();
    return 0;
}
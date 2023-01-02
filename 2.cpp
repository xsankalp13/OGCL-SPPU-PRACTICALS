/*
Experiment Number 2 : Develop a program in C++ to create a database of
student’s information system
containing the following information: Name, Roll number, Class, Division,
Date of Birth, Blood group,
Contactaddress, Telephone number, Driving license no. and other. Construct
the database with
suitable member functions. Make use of constructor, default constructor,
copy constructor,
destructor, static member functions, friend class, this pointer, inline
code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/

#include<iostream>
using namespace std;
using std::cout;


class studentData;

class student{
    public:
    string name;
    int rollNumber;
    char* cls;
    static int count;
    student(){
        name = "";
        rollNumber = 0;
        cls = new char[2];
    }
    ~student(){
        delete []cls;
    }
    static int getcount(){
        return count;
    }
    void getstudentData(studentData*);
    void showstudentData(studentData*);

};


class studentData{
    long int* mobileNumber;
    long int* driviglincenseNumber;
    friend student;
    public:
    studentData(){
        mobileNumber = new long;
        driviglincenseNumber = new long;
    }
    ~studentData(){
        delete mobileNumber;
        delete driviglincenseNumber;
    }
    void getData(){
        cout<<"Enter mobile number of Student: ";
        cin>>*mobileNumber;
        cout<<"Enter driving lincense of student: ";
        cin>>*driviglincenseNumber;
    }
    void showData(){
        cout<<"Mobile number of Student is :"<<*mobileNumber;
        cout<<"Driving lincese number of Student is: "<<*driviglincenseNumber;
    }
};

void student::getstudentData(studentData* i){
    cout<<"Enter the student's Name: ";
    cin.get();
    getline(cin,name);
    cout<<"Enter the roll number of student: ";
    cin>>rollNumber;
    cout<<"Enter the class of the student";
    cin>>*cls;
    i->getData();
    count++;
}

void student::showstudentData(studentData* i){
    cout<<"Name of the student: "<<name<<endl;
    cout<<"Roll number of the student: "<<rollNumber<<endl;
    cout<<"Class of the student: "<<*cls<<endl;
    i->showData();
}

int student::count;

int main(){

    student* a[100];
    studentData* b[100];
    int n=0;
    while(true){
        a[n]->getstudentData(b[n]);
        n++;
        cout<<"Do you want to continue(y/n): ";
        char ch;
        cin>>ch;
        if(ch=='y'||ch=='Y'){
            continue;
        }else{
            break;
        }

    }
    for(int i = 0 ; i< n; i++){
        cout<<"-------------------------------------"<<endl;
        a[i]->showstudentData(b[i]);
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"Total count: "<<student::getcount();
    cout<<"-------------------------------------"<<endl;
    for(int i = 0; i<n; i++){
        delete a[i];
        delete b[i];
    }
    cout<<"Program ended!!"<<endl;
    return 0;
}

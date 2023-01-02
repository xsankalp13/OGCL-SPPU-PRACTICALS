#include<iostream>
#include<fstream>
using namespace std;

class fileOprations{
    private:
    string name;
    int roll_number;
    public:
    void add_student(){
        fstream fp;
        fp.open("C:\\Users\\salve\\OneDrive\\Documents\\OOPs\\sample.txt ",ios::app);
        if(!fp){
            cout<<"File opening Error"<<endl;
        }else{
            cout<<"Enter the Name of the student: ";
            cin>>name;
            cout<<"Enter "<<name<<"'s roll number: ";
            cin>>roll_number;
            fp << name<<' ';
            fp << roll_number<<"\n";
            fp.close();
        }
    }
    void display_students(){
        fstream fp;
        fp.open("C:\\Users\\salve\\OneDrive\\Documents\\OOPs\\sample.txt",ios::in);
        if(!fp)
            cout<<"File Reading Error!"<<endl;
        else{
            while(!fp.eof()){
                fp>>name;
                fp>>roll_number;
                cout<<"Name of the student is : "<<name<<" and Roll number is "<<roll_number<<endl;

            }
            fp.close();
        }
    }
};
int main(){

    fileOprations f;
    bool flag = true;
    while(flag){
        cout<<"****WELCOME TO MAIN MENU****\n1.ADD STUDENT\n2.DISPLAY ALL STUDENTS\n3.EXIT\nEnter Your Choice: ";
        int ch;
        cin>>ch;
        switch(ch){
            case 1:
            f.add_student();
            break;
            case 2:
            f.display_students();
            break;
            case 3:
            cout<<"Exiting success!!"<<endl;
            flag = false;
            break;
            default:
            cout<<"Invalid Input Forced Shut Down!"<<endl;
            flag = false;
            break;
        }
    }
    cout<<"****THANK YOU FOR USING THE PROGRAM****"<<endl;
    remove("C:\\Users\\salve\\OneDrive\\Documents\\OOPs\\sample.txt");

    return 0;
}
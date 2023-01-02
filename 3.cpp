#include<iostream>
using namespace std;

class publication{
    private:
    string title;
    int price;
    public:
    publication(){
        title = "";
        price =0;
    }
    void add(){
        cout<<"\nEnter the Publication Information: ";
        cout<<"\nEnter the Title of Publication: ";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter Price of "<<title<<": ";
        cin>>price;
    }
    void display(){
        cout<<"Title of the Publication: "<<title<<endl;
        cout<<"Price of the "<<title<<" is: "<<price<<endl;
    }
};

class book:public publication{
    int page_count;
    public:
    void book_data(){
        cout<<"****Welcome to Book Data Entry Page****"<<endl;
        add();
        cout<<"Enter the Page count: ";
        cin>>page_count;
        try{
            if(page_count <=0){
                throw page_count;
            }
            
        }catch(...){
            page_count = 0;
        }

    }
    void display_book(){
        //cout<<"****Welcome to Book Data Display Page****"<<endl;
        display();
        cout<<"Total number of pages: "<<page_count<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
    }
};

class tape:public publication{
    int time;
    public:
    void tape_data(){
        cout<<"****Welcome to Tape Data Entry Page****"<<endl;
        add();
        cout<<"Enter the Time(min): ";
        cin>>time;
        try{
            if(time<=0){
                throw time;
            }
        }catch(...){
            time = 0;
        }
    }
    void display_tape(){
        display();
        cout<<"Total time of the tape is: "<<time<<" min"<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
    }
};




int main(){

    book books[100];
    tape tapes[100];
    int ch, book_count=0, tape_count=0;
    do{
        cout<<"\n**************WELCOME TO MAIN MENU**************\n";
        cout<<"1.Add Book\n2.Add Tape\n3.Display All Books\n4.Display All Tapes\n5.Exit\nEnter Your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            books[book_count++].book_data();
            break;
            case 2:
            tapes[tape_count++].tape_data();
            break;
            case 3:
            cout<<"****Welcome to Book Data Display Page****"<<endl;
            for(int i = 0;i<book_count;i++){
                books[i].display_book();
            }
            break;
            case 4:
            cout<<"****Welcome to Tape Data Display Page****"<<endl;
            for(int i = 0; i< tape_count;i++){
                tapes[i].display_tape();
            }
            break;
            case 5:
            exit(0);
            break;
            default:
            cout<<"Invalid Input***"<<endl;
            cout<<"****Forced Shut Down****"<<endl;
            ch = 5;
            break;
        }
    }while(ch != 5);
    cout<<"*****THANK YOU FOR USING THE PROGRAM*****"<<endl;
    return 0;
}
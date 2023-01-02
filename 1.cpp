#include<iostream>
using namespace std;
// complex obj;
// obj.real ;
//obj.img
// real img
class complex{
    private:
    int real;
    int img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    friend istream & operator >>(istream &,complex &);
    friend ostream & operator <<(ostream &, complex &);
    complex operator+(complex);
    complex operator*(complex);     //2 + i4, 3 + i5 = 
};

istream & operator >>(istream& , complex& i){
    cin>>i.real>>i.img;
    return cin;
}
ostream & operator <<(ostream&, complex& j){
    cout<<j.real<<"+ i"<<j.img<<endl;
    return cout;
}

complex complex::operator+(complex n){
    complex temp;
    temp.real = real + n.real;
    temp.img = img + n.img;
    return temp;
}

complex complex::operator*(complex n){
    complex temp;
    temp.real = (real*n.real) - (img*n.img);
    temp.img = (real * n.img) + (img * n.real);
    return temp;
}


int main(){

    bool flag = true;
    while(flag){
        int ch;
        complex n1;
        complex n2;
        cout<<"\n******MENU******\n1.Add\n2.Multiply\n3.Exit\n==> ";
        cin>>ch;
        if(ch == 1){
            cout<<"Enter 1st Complex number: ";
            cin>>n1;
            cout<<"Enter 2nd Complex Number: ";
            cin>>n2;
            complex ans = n1+n2;
            cout<<ans;
        }else if(ch == 2){
            cout<<"Enter 1st Complex number: ";
            cin>>n1;
            cout<<"Enter 2nd Complex Number: ";
            cin>>n2;
            complex ans = n1*n2;
            cout<<ans;
        }
        else if(ch == 3){
            cout<<"\nExit success!";
            break;
        }
        else{
            cout<<"Invalid Input!!";
        }
        cout<<"Do you want to continue(y/n): ";
        char a;
        cin>>a;
        if(a == 'y' || a == 'Y'){
            continue;
        }else if(a == 'n'||a=='N'){
            flag = false;
        }else{
            cout<<"Invalid input Exit****";
            flag = false;
        }

    }


    return 0;
}
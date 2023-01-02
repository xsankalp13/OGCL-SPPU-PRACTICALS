#include<iostream>
using namespace std;
template<typename T>

void sort(T *a,int n){
    for(int i = 0; i< n; i++){
        for(int j = 0; j<n;j++){
            if(a[i]>a[j]){
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}



int main(){
    int n;

    int* a = new int[100];
    float* b = new float[100];
    bool flag = true;
    while(flag){
        int ch;
        cout<<"\n****WELCOME TO MAIN MENU****\n1.Interger Array\n2.Float Array\n3.Exit\nEnter Your Choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter the number of elements: ";
            cin>>n;
            for(int i = 0; i<n; i++){
                cout<<"Enter "<<i+1<<"th element: ";
                cin>>a[i];
            }
            sort<int>(a,n);
            break;
            case 2:
            cout<<"Enter the number of elements: ";
            cin>>n;
            for(int i = 0; i<n; i++){
                cout<<"Enter "<<i+1<<"th element: ";
                cin>>b[i];
            }
            sort<float>(b,n);
            break;
            case 3:
            cout<<"Exiting Program!"<<endl;
            flag = false;
            break;
            default:
            cout<<"****Invaild input****"<<endl;
            cout<<"****Forced Exit****"<<endl;
            flag = false;
            break;
        }
    }
    cout<<"*****THANK YOU FOR USING THE PROGRAM*****"<<endl;
    return 0;
}
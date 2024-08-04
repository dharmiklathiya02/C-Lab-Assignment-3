#include<iostream>
using namespace std;
class student
{
public:
    int Id,age;
    char name[20];
public:
    void getData(void);
    void display(void);
};

void student::getData(void){
    cout<<"Enter your id: ";
    cin>>Id;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
}

void student::display(void){
    cout<<"Your Name Is "<<name<<endl;
    cout<<"Your Id Is "<<Id<<endl;
    cout<<"Your Age Is "<<age<<endl;
}

int main(){
    student s[10];
    cout<<"Enter Value Here:"<<endl;
    for(int i=0;i<5;i++){
        s[i].getData();
        cout<<endl;
    }
    cout<<"\n Your Output:"<<endl;
    for(int i=0;i<5;i++){
        s[i].display();
        cout<<endl;
    }
    return 0;
}
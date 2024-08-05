#include<iostream>
using namespace std;
class mark{
    private:
        int marks[3];
        int total=0;
        float average;
        char grade[5];
    public:
        int calculateTotal(){
            total=marks[1]+marks[2]+marks[3];
         return total;
        }
        float calculateAverage(){
            total=calculateTotal();
            cout<<"main Total"<<total;
            average=total/3;
            cout<<"\nYour Average Is"<<average<<endl;
            return average;
        }
        void accept(void);
        void calculateGrade(void);
};


void mark::accept(){
    for(int i=1;i<4;i++){
        cout<<"Enter "<<i<<" Marks ";
        cin>>marks[i];
        cout<<endl;
    }
}
void mark::calculateGrade(void){
    cout<<"Grade Avg"<<average;
    if(average>=90){
        cout<<"Your Grade Is A";
    }
    else if(average>=80){
        cout<<"Your Grade Is B";
    }
    else if(average>=70){
        cout<<"your Grade Is C";
    }
    else if(average>=60){
        cout<<"your Grade Is D";
    }
    else if(average>=50){
        cout<<"your Grade Is E";
    }
    else if(average>=40){
        cout<<"your Grade Is F";
    }
    else{
        cout<<"Your Fail";
    }
}

int main(){
    mark m;
    m.accept();
    m.calculateAverage();
    m.calculateGrade();
    return 0;
}

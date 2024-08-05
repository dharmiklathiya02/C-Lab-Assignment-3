#include<iostream>
using namespace std;
class mark{
    private:
        int marks[3];
        float total=0;
        float average;
        char grade[5];
    public:
        int calculateTotal(){
            total=marks[1]+marks[2]+marks[3];
         return total;
        }
        float calculateAverage(){
            total=calculateTotal();
            average=total/3;
            return average;
        }
        void accept(void);
        void calculateGrade(void);
        void display();
};
void mark::accept(){
    for(int i=1;i<4;i++){
        cout<<"Enter "<<i<<" Subject Marks :";
        cin>>marks[i];
        cout<<endl;
    }
}
void mark::calculateGrade(void){

    if(average>=90){
        cout<<"Your Grade Is A";
    }
    else if(average>=80){
        cout<<"Your Grade Is B";
    }
    else if(average>=70){
        cout<<"Your Grade Is C";
    }
    else if(average>=60){
        cout<<"Your Grade Is D";
    }
    else if(average>=50){
        cout<<"Your Grade Is E";
    }
    else if(average>=40){
        cout<<"Your Grade Is F";
    }
    else{
        cout<<"Your Fail";
    }
}
void mark::display(void){
    cout<<"Your Total Marks Is:"<<total<<endl;
    cout<<"Your Average Of Marks Is:"<<average<<endl;
}
int main(){
    mark m;
    m.accept();
    m.calculateAverage();
    m.display();
    m.calculateGrade();
    return 0;
}

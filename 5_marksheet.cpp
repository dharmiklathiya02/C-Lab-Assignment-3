#include<iostream>
using namespace std;
class mark{
    private:
        int marks[3];
        int total=0;
        float average;
        char grade[5];
    public:
        void accept(void);
        void calculateGrade(void);
        int calculateTotal(void);
        int calculateAverage(void);
};
int mark::calculateTotal(){
    for(int i=0;i<3;i++){
        total=total+marks[i];
    }
    cout<<"Your Total"<<total;
    return total;
}
int mark::calculateAverage(){
    int avgg=calculateTotal();
    cout<<"\nYour Average Is"<<avgg/3;
    return avgg;
}
void mark::accept(){
    for(int i=0;i<3;i++){
        cout<<"Enter "<<i<<" Marks ";
        cin>>marks[i];
        cout<<endl;
    }
}
void mark::calculateGrade(){
    int avg=calculateAverage();
    cout<<"Grade Avg"<<avg;
}

int main(){
    mark m;
    m.accept();
    m.calculateTotal();
    m.calculateAverage();
    m.calculateGrade();
    return 0;

}
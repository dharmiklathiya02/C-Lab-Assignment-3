#include<iostream>
using namespace std;
class sum{
    private:
        int i,j;
    public:
        void sumValue(int a,int b);
        void sumValue(double a,double b);
};
void sum::sumValue(int a,int b){
    cout<<"Sum Of This Value Is "<<a+b<<endl;
}
void sum::sumValue(double a,double b){
    cout<<"Sum Of This Value Is "<<a+b;
}
int main(){
    sum s;
    s.sumValue(2,5);
    s.sumValue(2.78,9.09);
    return 0;
}
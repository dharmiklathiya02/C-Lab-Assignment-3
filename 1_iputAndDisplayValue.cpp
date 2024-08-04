#include<iostream>
using namespace std;
class item{
    private:
        int a,b;
    public:
        void getData(void);
        void display(void);
};
void item::getData(){
    cout<<"Enter Two Values";
    cin>>a>>b;
}
void item::display(){
    cout<<"You Enter a='"<<a<<"' and b='"<<b<<"'.";
}
int main(){
    item i;
    i.getData();
    i.display();
    return 0;
}
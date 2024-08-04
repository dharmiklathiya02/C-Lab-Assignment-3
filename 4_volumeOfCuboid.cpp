#include<iostream>
using namespace std;
class cube{
    private:
        int l,b,h;
    public:
        void volume(void);
};
void cube::volume(void){
    cout<<"Enter Value To Calculate Volume Of Cuboid "<<endl;
    cout<<"Enter Lenght Of Cuboid:";
    cin>>l;
    cout<<"\nEnter Breadth of cuboid:";
    cin>>b;
    cout<<"\nEnter Height of Cuboid:";
    cin>>h;
    cout<<"\nVolume Of Cuboid Is "<<l*b*h;
}
int main(){
    cube c;
    c.volume();
    return 0;
}
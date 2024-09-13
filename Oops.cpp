#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    
};
int main(){
    student a;
    a.name="himani";
    a.age=21;
    a.gender=1;
    cout<<name<<" "<<age<<" "<<gender<<endl;
    return 0;
}
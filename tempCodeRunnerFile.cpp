#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> names = {{"himani", 21}, {"bittu", 22}};
    names.insert({"kumar", 25})
    for(auto name:names){
cout<<name.first<<" is "<<name.second<<endl;
}

    return 0;
}
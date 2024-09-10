//     ------       Access a Map     ------
// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     cout<<names["himani"]<<endl;
//     cout<<names.at("bittu")<<endl;
//     return 0;
// }

//     ------       Change Values     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     cout<<names["himani"]<<endl;
//     cout<<names.at("bittu")<<endl;
//     names["bittu"]=17;
//     names.at("himani")=16;
//     cout<<names["himani"]<<endl;
//     cout<<names.at("bittu")<<endl;
//     return 0;
// }

//     ------       Add Elements     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     names.insert({"kumar", 23});
//     names["sharma"]=22;
//     cout<<names.at("sharma")<<endl;
//     cout<<names.at("kumar")<<endl;
//     return 0;
// }

//     ------       Elements with Equal Keys     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     names.insert({"kumar", 23});
//     names.insert({"kumar", 255});
//     cout<<names.at("kumar")<<endl;
//     return 0;
// }

//     ------       Remove Elements     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     names.erase("kumar");
//     cout<<names.at("kumar")<<endl;
//     return 0;
// }

//     ------       Remove all Elements     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     names.clear();
//     cout<<names.at("bittu")<<endl;
//     return 0;
// }

//     ------       Loop Through a Map     ------

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int> names = {{"himani", 21}, {"bittu", 22}};
//     names.insert({"kumar", 25});
//     for(auto name:names){
// cout<<name.first<<" is "<<name.second<<endl;
// }

//     return 0;
// }
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"himani", "Bittu", "kumar", "sharma"};
  
//    for (string name : names) {
//      cout << name << "\n";
//    }
   
//     return 0;
// }

//      -----      THE .front() and .back() functions     -----

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"himani", "Bittu", "kumar", "sharma"};
//     cout<<names.front()<<endl;
//     cout<<names.back()<<endl;
//     return 0;
// }

//     -----    Change a List Element    -------

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"himani", "Bittu", "kumar", "sharma"};
//     names.front()="HIMANI";
//     names.back()="SHARMA";
//     cout<<names.front()<<endl;
//     cout<<names.back()<<endl;
//     return 0;
// }

//     ------     Add List Elements      ------

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"himani", "Bittu", "kumar", "sharma"};
//     names.push_front("himbit");
//     names.push_back("bithim");
//     for(string name:names){
//         cout<<name<<endl;
//     }
//     return 0;
// }

//      ------       Remove List Elements       ------

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"hini", "himani", "Bittu", "Biu"};
//     names.pop_front();
//     names.pop_back();
//     for(string name:names){
//         cout<<name<<endl;
//     }

//     return 0;
// }

//      ------      List Size     ------

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> names = {"hini", "himani", "Bittu", "Biu"};
//     cout<<names.size()<<endl;
//     cout<<names.empty()<<endl;
//     return 0;
// }

//    ------    Loop Through a List     -----

// You cannot loop through the list elements with a traditional for loop combined with the .size() function,
//  since it is not possible to access elements in a list by index:

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// for (int i = 0; i < cars.size(); i++) {
//   cout << cars[i] << "\n";
// }
//     return 0;
// }

// output:-error

//       -------        FOR EACH LOOP      -------

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// for (string car : cars) {
//   cout << car << "\n";
// }
//     return 0;
// }
//        ---------  FOR EACH LOOP      -------

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> cars={"volvo", "bmw", "ford", "mazda"};
//     for(string car:cars){
//         cout<<car<<endl;
//     }
//     return 0;
// }


//                 ------    INDEX se ACCESS    -----

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> cars = {"volvo", "bmw", "ford", "mazda"};
//     cout<<cars[0]<<endl;
//     cout<<cars[1]<<endl;
//     cout<<cars[2]<<endl;
//      cout<<cars[3]<<endl;
//     return 0;
// }

 // ------    .front() function and .back():     -------

//  #include<iostream>
//  #include<vector>
//  using namespace std;

//  int main(){
//     vector<string> cars = {"volvo", "bmw", "ford", "mazda"};
//     cout<<cars.back()<<endl;
//     cout<<cars.front()<<endl;
//     return 0;
//  }

   //      -------         .at()  FUNCTION      ------

//    #include<iostream>
//    #include<vector>
//    using namespace std;

//    int main(){
//     vector<string> cars = {"volvo", "bmw", "ford", "mazda"};
//     cout<<cars.at(2)<<"\n";
//     cout<<cars.at(0)<<"\n";
//     return 0;
//    }

//      ------     Change a Vector Element      ------

//     #include<iostream>
//    #include<vector>
//    using namespace std;

//    int main(){
//     vector<string> cars = {"volvo", "bmw", "ford", "mazda"};
//     cars[0]="bittu";
//     cars[2]="himani";
//     cars.at(3)="himanibittu";
//     cout<<cars.at(2)<<"\n";
//     cout<<cars.at(0)<<"\n";
//     cout<<cars[3]<<endl;
//     return 0;
//    }


//      --------      Add Vector Elements       -------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   vector<string> names = {"himani", "Bittu", "kumar", "sharma"};
//   names.push_back("loves");
  
//   for (string name : names) {
//     cout << name << "\n";
//   }
//   return 0;
// }

//        ------     Remove Vector Elements         ------

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> names = {"himani", "Bittu", "kumar", "sharma"};
//    names.pop_back();
  
//    for (string name : names) {
//      cout << name << "\n";
//    }
//     return 0;
// }

//    -------    Vector Size        ------

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> names = {"himani", "Bittu", "kumar", "sharma"};
  
//    for (string name : names) {
//      cout << name << "\n";
//    }
//    cout<<names.size();
//     return 0;
// }

//     -------      Check if a Vector is Empty      -------

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> names = {"himani", "Bittu", "kumar", "sharma"};
  
//    for (string name : names) {
//      cout << name << "\n";
//    }
//    cout<<names.empty();
//     return 0;
// }

//        -------       Loop Through a Vector       -------

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> names = {"himani", "Bittu", "kumar", "sharma"};
  
//    for (int i=0; i<names.size(); i++ ) {
//      cout << names[i] << "\n";
//    }
   
//     return 0;
// }
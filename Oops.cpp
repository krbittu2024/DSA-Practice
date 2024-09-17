// #include<iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     int age;
//     bool gender;
    
// };
// int main(){
//     student a;
//     a.name="himani";
//     a.age=21;
//     a.gender=1;

//     student c;
//     c.name="bittu";
//     c.age=22;
//     c.gender=0;

//     cout<<a.name<<" "<<a.age<<" "<<a.gender<<endl;
//     cout<<c.name<<" "<<c.age<<" "<<c.gender<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myclass{
//     public:
//     void myMethod(){
//         cout<<"I LOVE YOU";
//     }
// };
// int main(){
//     myclass hero;
//     hero.myMethod();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//     void myMethod();
// };
// void myClass::myMethod(){
//     cout<<"I LOVE YOU";
// }
// int main(){
//     myClass hero;
//     hero.myMethod();
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class myClass{
//     public:
//     int speed(int maxSpeed);
// };
// int myClass::speed(int maxSpeed){
//     return maxSpeed;
// }
// int main(){
//     myClass car;
//     cout<<car.speed(250)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//         myClass(){
//             cout<<"i LOVE you";
//         }
// };
// int main(){
//     myClass hero;

//     return 0;
// }

//Constructors Example:-
// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//     string name;
//     string gender;
//     int age;
//     myClass(string x, string y, int z){
//         name = x;
//         gender = y;
//         age = z;
//     }
// };
// int main(){
//     myClass hero1("Himani", "female", 21);
//     myClass hero2("Bittu", "male", 22);

//     cout<<hero1.name<<" "<<hero1.gender<<" "<<hero1.age<<endl;
//     cout<<hero2.name<<" "<<hero2.gender<<" "<<hero2.age<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//         string name;
//         string gender;
//         int age;
//         myClass(string x, string y, int z);
// };
//     myClass::myClass(string x, string y, int z){
//         name=x;
//         gender=y;
//         age=z;
//     }
// int main(){
//     myClass hero1("Himani","female",21);
//     myClass hero2("Bittu", "male", 22);
//     cout<<hero2.name<<" "<<hero2.gender<<" "<<hero2.age<<endl;
//     cout<<hero1.name<<" "<<hero1.gender<<" "<<hero1.age<<endl;
//     return 0;
// }

//  Access Specifiers:-
// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//     int x;
//     private:
//     int y;
// };
// int main(){
//     myClass hero;
//     hero.x=21;
//     hero.y=22;
//     cout<<hero.x<<endl;
//     cout<<hero.y<<endl;
//     return 0;
// }

//    Encapsulation  :-
// #include<iostream>
// using namespace std;

// class employee{
//     private:
//         int salary;
//     public:
//         void setSalary(int s){
//             salary = s;
//         }
//         int getSalary(){
//             return salary;
//         }
// };
// int main(){
//     employee hero;
//     hero.setSalary(250000);
//     cout<<hero.getSalary();
//     return 0;
// }

//    Inheritance   :-
// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//         string brand="BMW";
//     void hock(){
//         cout<<"i love speed"<<endl;
//     }
// };
// class car: public vehicle{
//     public:
//         string model="cd220"; 
// };
// int main(){
//     car mycar;
//     mycar.hock();
    
//     cout<<mycar.brand<<" "<<mycar.model<<endl;
//     return 0;
// }

//    Multilevel Inheritance   :-
// #include<iostream>
// using namespace std;

// class myClass{
//   public:
//     void myfunction(){
//         cout<<"some content in parent class";
//     }  
// };

// class myChild: public myClass{

// };

// class myGrandchild: public myChild{

// };
// int main(){
//     myGrandchild hero;
//     hero.myfunction();
//     return 0;
// }

//    Multiple Inheritance   :-
// #include<iostream>
// using namespace std;

// class myClass{
//     public:
//         void myfunnction(){
//             cout<<"some cotent in parent class"<<endl;
//         }
// };
// class myOtherClass{
//     public:
//         void myotherfuction(){
//             cout<<"some content in other class";
//         }
// };

// class myChildClass: public myClass, public myOtherClass{

// };

// int main(){
//     myChildClass hero;
//     hero.myfunnction();
//     hero.myotherfuction();
//     return 0;
// }

//   Inheritance Access  :- 
// #include<iostream>
// using namespace std;

// class employee{
//     protected:
//         int salary;
// };

// class programmer: public employee{
//     public:
//         int bonus;
//     void setSalary(int s){
//         salary = s;
//     }
//     int getSalary(){
//         return salary;
//     }
// };
// int main(){
//     programmer hero;
//     hero.setSalary(25000);
//     hero.bonus=5000;
//     cout<<hero.getSalary()<<endl;
//     cout<<hero.bonus<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *aptr;
//     aptr=&a;

//     cout<<*aptr<<endl;
//     cout<<aptr<<endl;
//     cout<<&a<<endl;
//     *aptr=20;
//     cout<<a<<endl;
//     aptr++;
//     cout<<aptr<<endl;
//     return 0;
// }
// output:-
// 10
// 0x61ff08
// 0x61ff08
// 20
// 0x61ff0c

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch='a';
//     char *cptr;
//     cptr=&ch;
//     cout<<*cptr<<endl;
//     cout<<cptr<<endl;
//     cout<<&ch<<endl;
//     cptr++;
//     cout<<cptr<<endl;
//     return 0;
// }
// output:-
// a
// a♂ a
// a♂ a
// ♀ a

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     cout<<*arr<<endl;
//     int *ptr=arr;
//     for(int i=0; i<3; i++){
//         cout<<*ptr<<endl;
//         ptr++;
//     }
//     return 0;
// }


// Pointer to Pointer

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<*p<<endl;
//     int **q=&p;
//     cout<<*q<<endl;
//     cout<<**q<<endl;
//     return 0;
// }

// output:-10
//         0x61ff08
//         10
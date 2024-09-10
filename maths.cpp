//  PRIME NUMBER
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag=0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             cout<<"Not prime no."<<endl;
//             flag=1;
//             break;
//         }
//     }
//         if(flag==0){
//             cout<<"Prime No."<<endl;
        
//     }
//     return 0;
// }

//                ------              REVERSE NUMBER               -------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit=n%10;
//         reverse=reverse*10+lastdigit;
//         n=n/10;

//     }
//     cout<<reverse<<endl;
//     return 0;
// }

//                    -----             Armstrong Number            ------

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int OriginalN=n;
//     int sum=0;
//     while(n>0){
//         int lastdigit = n%10;
//         sum=sum+pow(lastdigit,3);
//         n=n/10;
//     }
//     if(sum==OriginalN){
//         cout<<"Armstrong No."<<endl;
//     }
//     else{
//         cout<<"Not Armstrong No."<<endl;
//     }
//     return 0;
// }

//                -----       FACTORIAL OF NUMBER      -------

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=2; i<=n; i++){
//         fact=fact*i;

//     }
//     cout<<fact<<endl;
//     return 0;
// }
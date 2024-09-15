// Q1->
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             cout<<"* ";            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q2->
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }           
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q3->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q4->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q5->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q6->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 1;
//     for(int i=1; i<=n; i++){
        
//         for(int j=1; j<=i; j++){
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q7->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1; j<=space; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1; j<=space; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q8->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q9->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if((i+j)%2==0){
//                 cout<<"1 ";
//             }else{
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q10->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q11->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<" "<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q12->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int j;
//         for(j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         int k=i;
//         for(; j<=n; j++){
//             cout<<k--;
//         }
//          k=2;
//         for(;j<=n+i-1; j++){
//             cout<<k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q13->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int j;
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         int j;
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

// Q14->
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if(((i+j)%4==0) || (i==2 && (j%4==0)) ){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
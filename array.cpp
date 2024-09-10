//             -------     MAXIMUM MINIMUM NUMBER IN AN ARRAY      --------

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//     for(int i=0; i<n; i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<"maxNo:-"<<maxNo<<endl;
//     cout<<"minNo:-"<<minNo<<endl;
//     return 0;
// }

//           -----          REVERSE AN ARRAY      -----
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//      ------        GET THE SIZE OF AN ARRAY       -------
// #include<iostream>
// using namespace std;
// int main(){
//     int myNumbers[5]={3,2,5,41,65};
//     int getLength=sizeof(myNumbers)/sizeof(int);
//     cout<<getLength;
//     return 0;
// }

// output:-5

//         -------      MAX TILL I.       --------
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int mx=-199999;
//     for(int i=0; i<n; i++){
//         mx=max(arr[i],mx);
//         cout<<mx<<" "; 

//     }
//     return 0;
// }

//       -------       SUM OF ALL SUBARRAY      ------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int sum;
//     for(int i=0; i<n; i++){
//         sum=0;
//         for(int j=i; j<n; j++){
//             sum=sum+arr[j];
//             cout<<sum<<" ";
            
//         }
//     }
    
//     return 0;
// }

// -----     print all subarray      ------

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<arr[j]<<endl;;
        }cout<<endl;
    }
    return 0;
}

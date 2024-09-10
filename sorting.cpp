//       -----   SELECTION SORT    ------
//Def:-find the minimum element in unsorted array and swap it with element at begining.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }


//        -------         BUBBLE  SORT       -------
//Def :- Reapetedly swap two adjacent elemets if they are in wrong order.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0; i<n-counter; i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i+1];
//                 arr[i+1]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         counter++;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//        --------        INSERTION SORT      -------
// Def :- insert an element from unsorted array to its correct position in sorted array.


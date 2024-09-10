    // FUNCTION:-  function is a piece of code that performs a specific task.

    // Syntax of a function:-  
    //                     returntype functionName (para1, para2, ...){
    //                         function body
    //                     }

    // Write a function to add two integers.

    // #include<iostream>
    // using namespace std;
    // int add(int x, int y){
    //     int sum = x+y;
    //     return sum;
    // }
    // int main(){
    //     int a , b ;
    //     cin>>a>>b;
    //     cout<<add(a,b)<<endl;

    //     return 0;
    // }

    // Print all prime no. b/w two given numbers.

    // #include<iostream>
    // #include<cmath>
    // using namespace std;
    // bool isPrime(int num){
    //     for(int i=2; i<=sqrt(num); i++){
    //         if(num%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // int main(){
    //     int a,b;
    //     cin>>a>>b;
    //     for(int i=a; i<=b; i++){
    //         if(isPrime(i)){
    //             cout<<i;
    //         }
    //     }
    //     return 0;
    // }

    // -----        Fiboacci Series      --------
    // #include<iostream>
    // using namespace std;
    // void fib(int n){
    //     int t1=0;
    //     int t2=1;
    //      int nextTerm ;
    //      for(int i=1; i<=n; i++){
    //         cout<<t1<<" ";
    //         nextTerm=t1+t2;
    //         t1=t2;
    //         t2=nextTerm;
    //      }
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     fib(n);
    //     return 0;
    // }

    //      ------------      Factorial of Number          --------
    // #include<iostream>
    // using namespace std;
    // int fact(int n){
    //     int factorial=1;
    //     for(int i=2; i<=n; i++){
    //         factorial=factorial*i;

    //     }
    //     return factorial;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     int ans=fact(n);
    //     cout<<ans<<endl;
    //     return 0;
    // }

    //   ------------      nCr=n/r!(n-r)!           --------
    // #include<iostream>
    // using namespace std;
    // int fact(int n){
    //     int factorial=1;
    //     for(int i=2; i<=n; i++){
    //         factorial=factorial*i;
    //     }
    //     return factorial;
    // }
    // int main(){
    //     int n,r;
    //     cin>>n>>r;
    //     int ans=fact(n)/(fact(r)*fact(n-r));
    //     cout<<ans<<endl;
    //     return 0;
    // }

    //           ----------        PASCAL TRIANGLE        -------
    // #include<iostream>
    // using namespace std;
    // int fact(int n){
    //     int factorial=1;
    //     for(int i=2; i<=n; i++){
    //         factorial=factorial*i;
    //     }
    //     return factorial;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<=i; j++){
    //             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     return 0;
    // }

    //            -----------       Linear Search           ---------
    // #include<iostream>
    // using namespace std;
    // int linearSearch(int n, int arr[], int key){
    //     for(int i=0; i<n; i++){
    //         if(arr[i]==key)
    //         {
    //             return i;
    //         }
    //     }return -1;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     int key;
    //     cin>>key;
    //     int arr[n];
    //     for(int i=0; i<n; i++){
    //         cin>>arr[i];
    //     }
    //     cout<<linearSearch(n, arr, key)<<endl;
    //     return 0;
    // }

    //         ------       Binary Search         -------
    // #include<iostream>
    // using namespace std;
    // int binarySearch(int n, int arr[], int key){
    //     int s=0;
    //     int e=n;
    //     while(s<=e){
    //         int mid=(s+e)/2;
    //         if(arr[mid]==key){
    //             return mid;
    //         }
    //         else if(arr[mid]>key){
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }

    //     }
    //     return -1;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     int key;
    //     cin>>key;
    //     int arr[n];
    //     for(int i=0; i<n; i++){
    //         cin>>arr[i];
    //     }
    //     cout<<binarySearch(n, arr, key)<<endl;
    //     return 0;
    // }
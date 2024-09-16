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
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=3; i++){
//         for(int j=1; j<=n; j++){
//             if(((i+j)%4==0) || (i==2 && (j%4==0)) ){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q15->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse = 0;
//     while(n>0){
//         int lastDigit = n%10;
//         reverse = reverse*10 + lastDigit;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
//     return 0;
// }

// Q16->
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int originalN = n;
//     int sum = 0;
//     while(n>0){
//         int lastDigit = n%10;
//         sum = sum+pow(lastDigit,3);
//         n=n/10;
//     }
//     if(originalN == sum){
//         cout<<"Armstrong"<<endl;
//     }
//     else{
//         cout<<"Not Armstrong"<<endl;
//     }
//     return 0;
// }

// Q17->
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag = 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             cout<<"Not prime"<<endl;
//             flag = 1;
//             break;
//         }
//         }if(flag == 0){
//             cout<<"prime"<<endl;
//         }
    
//     return 0;
// }

// Q18->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact = 1;
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

// Q19->
// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,c;
//     cin>>a>>c;
//     for(int i=a; i<=c; i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//Q20->
// #include<iostream>
// using namespace std;

// void fibo(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     for(int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nextTerm = t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     fibo(n);
//     return 0;
// }

// Q21->
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial = factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }

// Q22->
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial = factorial * i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;
//     return 0;
// }

// Q23->
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial = factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<fact(i)/(fact(i-j)*fact(j));
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q24->
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
//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;
//     for(int i=0; i<n; i++){
//         maxNo = max(arr[i], maxNo);
//         minNo = min(arr[i], minNo);
//     }
//     cout<<maxNo<<endl;
//     cout<<minNo<<endl;
    
//     return 0;
// }

// Q25->
// #include<iostream>
// using namespace std;
// int linearSearch(int n, int arr[], int key){
//     for(int i=0; i<n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(n,arr,key)<<endl;
//     return 0;
// }

// Q26->
// #include<iostream>
// using namespace std;
// int binarySearch(int n, int arr[], int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid =(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]>key){
//             e=mid-1;
//         }else if(arr[mid]<key){
//             s=mid+1;
//         }
//     }
    
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binarySearch(n,arr,key)<<endl;
//     return 0;
// }

// Q27->
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1;
//     getline(cin,str1);
//     string str2;
//     getline(cin,str2);
//     cout<<str2.append(str1)<<endl;
//     return 0;
// }

// Q28->
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//    for(int i=0; i<str.size(); i++){
//        if(str[i]>='a' && str[i]<='z'){
//            str[i]=str[i]-32;
//        }
       
//    }
//    cout<<str<<endl;
    
//     return 0;
// }

// Q29->
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//    for(int i=0; i<str.size(); i++){
//        if(str[i]>='A' && str[i]<='Z'){
//            str[i]=str[i]+32;
//        }
       
//    }
//    cout<<str<<endl;
    
//     return 0;
// }

// Q30->
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
    
//    sort(str.begin(), str.end());
//    cout<<str<<endl;
    
//     return 0;
// }

// Q31->
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     transform(str.begin(), str.end(), str.begin(),::toupper);
//     cout<<str<<endl;
//      transform(str.begin(), str.end(), str.begin(),::tolower);
//     cout<<str<<endl;
    
//     return 0;
// }

// Q32->
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin, str);
//     sort(str.begin(),str.end(), greater<int>());
//     cout<<str<<endl;
//     return 0;
// }

// Q33->
// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     string str="iloveyou";
//     getline(cin, str);
   
//     for(int i=str.size(); i>=0; i--){
//       cout<<str[i];  
//     }
    
//     return 0;
// }

// Q34->

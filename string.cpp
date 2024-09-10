// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin , str);
//     cout<<str<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     cout<<str<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="i love my bestfriend";
//     cout<<str<<endl;
//     return 0;

// }

//      ------     length of a string      ------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string txt;
//     getline(cin , txt);
//     cout<<txt.size()<<endl;
//     return 0;
// }
// output:-
// my name is bittu
// 16


//         --------         Access the characters in a string  -----

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin , str);
//     cout<<str[5];
//     return 0;
// }
// output:-
// i love you
// e

//          ------     last character of a string     -----

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin , str);
//     cout<<str[str.length()-1];
//     return 0;
// }
// output:-
// ritik is my dost
// t


//   --------      Change string characters        --------
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="bittu";
//     str[0]='h';
//     cout<<str;
//     return 0;
// }
// output:- hittu

//         -----         The at() function        ------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="bittu";
//     cout<<str.at(0)<<endl;
//     cout<<str.at(str.length()-1)<<endl;
//     str.at(0)='h';
//     cout<<str;
//     return 0;
// }
// output:-
// b
// u
// hittu

//        ----------       Special characters      -------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="we are the so-called "vikings" from the north.";
//     cout<<str;
//     return 0;
// }
// output:-error_category
// unable to find string literal operator 'operator""vikings' with 'const char [38]', 'unsigned int' arguments
//      string str="we are the so-called "vikings" from the north.";

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="we are the so-called \"vikings\" from the north.";
//     cout<<str;
//     return 0;
// }
// output:-
// we are the so-called "vikings" from the north.

// #include<iostream>
// #include<string>
// int main(){
//     std :: string str="hello";
//     std :: cout<<str;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="bittu";
//     char str2[]="hittu";
//     cout<<str<<" "<<str2<<endl;
//     return 0;
// }


//          --------      Sort Function         -------
// #include<iostream>
// #include <algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str="himanibittu";
//     sort(str.begin() , str.end());
//     cout<<str<<endl;
//     return 0;
// }

// output:-abhiiimnttu

//        ---------          Upper Case   OR      Lower Case          -------
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str="iloveyou";
//     for(int i=0; i<str.size(); i++){
//         if(str[i]>='a' && str[i]<='z')
//         str[i]=str[i]-32;
//             }
//             cout<<str;
//     return 0;
// }
// output:-
// ILOVEYOU

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str="ILOVEYOU";
//     for(int i=0; i<str.size(); i++){
//         if(str[i]>='A' && str[i]<='Z')
//         str[i]=str[i]+32;
//             }
//             cout<<str;
//     return 0;
// }
// output:-
// iloveyou


             
//        ---------        Alternative  Upper Case   OR      Lower Case          -------

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cctype> 
// using namespace std;
// int main() {
//     string s1 = "iloveyou";
//     transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//     string s2 = "BITTU";
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
//     cout << s1 << s2 << endl;
//     return 0;
// }

// output:-ILOVEYOUbittu


//      -----   FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING   ------

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="53124";
//     sort(s.begin(), s.end(),greater<int>());
//     cout<<s<<endl;
//     return 0;
// }

//output:-54321

//     -----   REVERSE A STRING     -------
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="bittu";
//     for(int i=s.size(); i>=0; i--){
//         cout<<s[i];
//     }
//     return 0;
// }

// output:-uttib

//         -----        COUNT MAXIMUM NO. OF ALPHABET PRESENT IN THE STRING        ------
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="bhiitmtanui";
//     int freq[26];
//     for(int i=0; i<26; i++)
//         freq[i]=0;
//     for(int i=0; i<str.size(); i++){
//         freq[s[i]-'a']++;
//     char ans='a';
//         int maxF=0;
    
//         for(int i=0; i<26; i++){
//             if(freq[i]>maxF)
//           {   maxF=freq[i];
//             ans=i+'a';
//         }
//         }
    
//         cout<<maxF<<" "<<ans<<endl;
    
//     return 0;
// }

//       ------      REVERSE WORDS        -------
#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{

	reverse(str.begin(), str.end());

	str.insert(str.end(), ' ');

	int n = str.length();

	int j = 0;

	for (int i = 0; i < n; i++) {

		if (str[i] == ' ') {
			reverse(str.begin() + j, str.begin() + i);

			j = i + 1;
		}
	}

	str.pop_back();

	return str;
}

int main()
{
	string str = "i love my bestfriend";

	string rev = reverseString(str);

	cout << rev;
	return 0;
}


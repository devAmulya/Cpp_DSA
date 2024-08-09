#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    /*Manual Convertion
    string str = "Gdhjofhjkdls;";
    //convert into upper case
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    //convert into lower case
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout<<str<<endl;*/

    /*Inbuilt function for above
    string s = "fakeionesw";
    transform(s.begin(),s.end(),s.begin()+2, ::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;*/

    /*FORM BIGGEST NUMBER FROM NUMNERIC STRING
    string s = "51243";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;*/

    /*Highest repeating character*/
    string s = "fajdkhdfslfhpaoifgd";
    int freq[26];
    for(int i = 0; i<26; i++){
        freq[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] > maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    }
    cout<<ans<<" - Frequency : "<<maxF<<endl;



    return 0;
}
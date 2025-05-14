#include<iostream>
#include<string>
#include<vector>
using namespace std;

void RevPrintString(string s){
    if(s.empty()){
        return;
    }
    RevPrintString(s.substr(1));
    cout<<s[0]<<" ";
}

void RevString(string &s, int index){
    if(index == s.size()/2 ){
        return;
    }
    char temp = s[index];
    s[index] = s[s.size() - index - 1];
    s[s.size() - index - 1] = temp;
}

void pi(string s){
    if(s.length() == 0){
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        pi(s.substr(2));
    }else{
        cout<<s[0];
        pi(s.substr(1));
    }    
}

void towerofhanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}

void removeDupprint(string s){
    if(s.length() == 0){
        return;
    }
    if(s[0] == s[1]){
        removeDupprint(s.substr(1));
    }else{
        cout<<s[0];
        removeDupprint(s.substr(1));
    }
}

string removeDup(string s){
    if(s.length() == 0){
        return "";
    }
    char ch =  s[0];
    string ans = removeDup(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return ch+ans;
}

string moveX(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = moveX(s.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }else{
        return ch+ans;
    }

}

void subs(string s, string ans){
    //base case
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    //exclude
    subs(ros,ans);
    //include
    subs(ros,ans+ch);

}

void subs_ascii(string s,string ans){
    //base case
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    int c = ch;
    

    //exclude
    subs_ascii(ros,ans);
    //include char
    subs_ascii(ros,ans+ch);
    //include ascii
    subs_ascii(ros,ans+to_string(c));

}

void phone_digits(string s1, string s2, int index){
    if(s1.length() == 0){
        return;
    }
    if(index == s2.size()){
        string ros = s1.substr(1);
        phone_digits(ros,s2,0);
        return;
    }
    cout<<s1[0]<<s2[index]<<endl;
    phone_digits(s1,s2,index+1);
}

vector<string> digits_arr = {" ","./","abc","def","ghi","jkl","mno","pqrs","tuvw","xyz"};
//more than 2 digits
void phone_digits2(string s,string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = digits_arr[ch-'0'];
    string ros = s.substr(1);
    for(int i = 0; i < code.size(); i++){
        phone_digits2(ros,ans+code[i]);
    }
}

int main(){

    /*
    //Printing reverse string
    RevPrintString("hello");
    cout<<endl;
    //reverse a string in real
    string s = "hello";
    RevString(s,0);
    cout<<s<<endl;
    //Replace pi with 3.14 in string
    string s1 = "pippppiiiipi";
    pi(s1);
    cout<<endl;

    //tower of hanoi
    towerofhanoi(4,'A','c','B');
    */


    //Remove all duplicates from string
    removeDupprint("aaaabbbeeecdddd");
    cout<<endl;
    cout<<removeDup("aaaabbbeeecdddd")<<endl;

    //move x to end
    cout<<moveX("axxbdxcefxhix");

    //substring subs + ascii
    subs_ascii("BA","");

    //print all possible words from phone digits
    phone_digits("pqrs","./",0);

    //more than 3
    phone_digits2("234","");



    return 0;
}
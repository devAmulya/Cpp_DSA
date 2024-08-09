#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;

    /*cin >> str;
    cout<<str<<endl;

    string str1(5,'n');
    cout<<str1<<endl;

    string str2 = "Apni kaksha";
    cout<<str2<<endl;*/

    /*getline(cin,str);
    cout<<str;*/

    /*APPEND
    string s1 = "fam";
    string s2 = "ily";
    //append using +
    string s3 = s1+s2;
    //append in s1
    s1.append(s2);
    cout<<s3<<" "<<s1<<endl;
    cout<<s1[2];*/

    /*CLEAR FUNCTION
    string abc = "Hello everybody today i am learning string";
    abc.clear();
    cout<<abc;*/


    /*COMPARE 1-bigger, 0-equal, -1:lesser
    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl;*/

    /*EMPTY : 0,1
    string s1 = "abc";
    cout<<s1<<endl;
    s1.clear();
    if(cout<<s1.empty()){
        cout<<"String is empty";
    }*/

    string s1 = "nincompoop";

    /*ERASE
    s1.erase(3,3);
    cout<<s1;*/

    /*FIND givs index as return
    cout<<s1.find("com");*/

    /*Insert Function
    s1.insert(2,"lol");
    cout<<s1;*/

    /*Size/Length
    cout<<s1.length()<<endl;*/

    /*SUBSTRING
    string s = s1.substr(6,4);
    cout<<s;*/

    /*Convert to int , int to string
    string s1 = "786";
    int x = stoi(s1);
    cout<<x+2<<endl;
    cout<<to_string(x)+"2"<<endl;*/

    /*Sort String
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;*/

    return 0;
}
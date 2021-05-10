#include <bits/stdc++.h>
using namespace std;

bool winnerOne(string s1, string s2, string s3){
    if(s1[0]=='X' && s1[1]=='X' && s1[2]=='X'){return true;}
    if(s2[0]=='X' && s2[1]=='X' && s2[2]=='X'){return true;}
    if(s3[0]=='X' && s3[1]=='X' && s3[2]=='X'){return true;}
    if(s1[0]=='X' && s2[0]=='X' && s3[0]=='X'){return true;}
    if(s1[1]=='X' && s2[1]=='X' && s3[1]=='X'){return true;}
    if(s1[2]=='X' && s2[2]=='X' && s3[2]=='X'){return true;}
    if(s1[0]=='X' && s2[1]=='X' && s3[2]=='X'){return true;}
    if(s1[2]=='X' && s2[1]=='X' && s3[0]=='X'){return true;}
    return false;
}

bool winnerTwo(string s1, string s2, string s3){
    if(s1[0]=='O' && s1[1]=='O' && s1[2]=='O'){return true;}
    if(s2[0]=='O' && s2[1]=='O' && s2[2]=='O'){return true;}
    if(s3[0]=='O' && s3[1]=='O' && s3[2]=='O'){return true;}
    if(s1[0]=='O' && s2[0]=='O' && s3[0]=='O'){return true;}
    if(s1[1]=='O' && s2[1]=='O' && s3[1]=='O'){return true;}
    if(s1[2]=='O' && s2[2]=='O' && s3[2]=='O'){return true;}
    if(s1[0]=='O' && s2[1]=='O' && s3[2]=='O'){return true;}
    if(s1[2]=='O' && s2[1]=='O' && s3[0]=='O'){return true;}
    return false;
}

int countBlank(string s1, string s2, string s3){
    int count=0;
    for(int i=0 ; i<3 ; i++){
        if(s1[i]=='_'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s2[i]=='_'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s3[i]=='_'){
            count++;
        }
    }

    return count;
}

int countFirst(string s1, string s2, string s3){
    int count=0;
    for(int i=0 ; i<3 ; i++){
        if(s1[i]=='X'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s2[i]=='X'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s3[i]=='X'){
            count++;
        }
    }

    return count;
}

int countSecond(string s1, string s2, string s3){
   int count=0;
    for(int i=0 ; i<3 ; i++){
        if(s1[i]=='O'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s2[i]=='O'){
            count++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(s3[i]=='O'){
            count++;
        }
    }

    return count; 
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int tt;
    cin >> tt ;
    while(tt--){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3 ;
        bool win1 = winnerOne(s1,s2,s3);
        bool win2 = winnerTwo(s1,s2,s3);
        int blank = countBlank(s1,s2,s3);
        int countX = countFirst(s1,s2,s3);
        int countO = countSecond(s1,s2,s3);

        if((win1==true) && (win2==false) && (countX==(countO+1))){
            cout << "1\n";
        }
        else if((win1==false) && (win2==true) && (countX==countO)){
            cout << "1\n";
        }
        else if((win1==false) && (win2==false) && (countX==(countO+1)) && (blank==0)){
            cout << "1\n";
        }
        else if((win1==false) && (win2==false) && (blank!=0) && (((blank%2==0) && (countX==countO+1)) || ((blank%2!=0) && (countX==countO)))){
            // if((blank%2==0) && ((countX==countO+1))){
                cout << "2\n";
            // }
            // else if((blank%2!=0) && (countX==countO)){
            //     cout << "2\n";
            // }
        }
        else{
            cout << "3\n";
        }
    }
}
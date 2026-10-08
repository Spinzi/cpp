#include <iostream>
using namespace std;

char text[101];

int main(){
    char* t;
    cin.getline(text, 100);

    t = strtok(text, " ");
    bool r=false;
    while(t){

        int c, v;
        c = v = 0;
        for(int i = 0; t[i] != '\0'; i++)
            if(strchr("aeiou", t[i]))
                v++;
            else 
                c++;
        
        if(c>v) {cout<<t<<endl;r=true;}

        t = strtok(NULL, " ");
    }
    if(!r)cout<<"nu exista";
}

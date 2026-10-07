#include <iostream>
using namespace std;

char text[101];
int resp = 0;

bool isN(char a){
    return a>='0' && a <= '9';
}

int main(){
    cin.getline(text, 100);
    for(int i = 0; i < 100; i++){

        if( isN(text[i]) && (i == 0 || text[i-1] == ' '))
            {
                i++; bool whole = true;
                while((isN(text[i]) || text[i] == ',' ) && text[i] != '\0' ) {
                    if(text[i] == ',') whole = false;
                    i++;
                }
                resp += whole;
            }
    }
    cout<<resp;
}
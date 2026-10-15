#include <iostream>
#include <fstream>
using namespace std;

ifstream IN("bac.txt");

int k, c, m, m_m, m_c, s_c;

int main(){

    IN>>k;

    int t;
    while(IN>>t){
        if(t % k == 0){
            s_c++;
            cout<<t<<" is div w "<<k<<"\n";
            cout<<"sc "<<s_c<<endl;
            if(m<s_c){
                m=s_c; c=1;
            }
            if(m_m<s_c) m_m = s_c;
        }else if(s_c){
            if(s_c == m_m)c++;
            s_c=0;
        }
    }
    if(s_c){
        if(s_c==m_m)c++;
        s_c=0;
    }

    cout<< m << ' ' << c;

}
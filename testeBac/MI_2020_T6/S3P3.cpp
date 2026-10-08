#include <iostream>
#include <fstream>
using namespace std;

//in problem we dont use bin
ofstream OUT("bin/bac.out");

int p1, p2;

int main(){
	cin>>p1>>p2;

	for(int p11 = 1; p11 <= p1; p11++){
		if( !(p1 % p11 == 0 && p11 < 10 && p1 / p11 < 10 ) ) continue;
		int p12 = p1 / p11;
		
		//p12 will always be bigger than p11

		for(int ti = 9; ti >= 0; ti--){
		
			for(int p21 = 1; p21 <= p2; p21++){
				if( !( p2 % p21 == 0 && p21 < 10 && p2 / p21 < 10 ) ) continue;
				
				int p22 = p2 / p21;
				
				//p22 will be bigger than p21
				
				int number = 0;

				number = number * 10 + p12;
				number = number * 10 + p11;
				for(int i = 0; i < 3; i++) number = number * 10 + ti;
				number = number * 10 + p22;
				number = number * 10 + p21;

				OUT<<number<<' ';

			}
				
		}

	}
	
	OUT.close();
}

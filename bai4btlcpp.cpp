#include<iostream>
#include<math.h> 
#include<iomanip>
using namespace std;
int main(){
	int tram,chuc,donvi;
	cout<<"Day cac so co 3 chu so ma tong cac chu so bang 0 la: "<<endl;
	for(int i=100;i<1000;i++){
		tram=i/100;
		donvi=i%10;
		chuc=(i-tram*100)/10;
		if (tram+chuc+donvi==10) {
			cout<<setw(6)<<i;
		}
	} 
	return 0;
}

#include <iostream>
using namespace std;
int main (){
	int n,b;
	for (n=0;n<5;n++){
		for (b=0;b<10;b++){
			cout<<n<<"-"<<b<<endl;
			
			if (n==4 && b==9){
				cout<<n+1<<"-"<<b-9<<endl;
				
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}

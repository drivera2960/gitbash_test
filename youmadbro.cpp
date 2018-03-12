#include <iostream>
using namespace std;

int answer;
int main(){
	cout << "On a scale of 1-10, How mad are you bro? ";
	cin >> answer;
	cout << endl;

	if(answer < 1)
		cout << "What a cupcake fairy"<<endl;
	if(answer >= 1 && answer <=5)
		cout << "Take a walk bro"<<"\n";
	if(answer < 10 && answer >5)
		cout << "You got beef? YOU GOT BEEF!"<<"\n";
	if(answer >= 10)
		cout << "LET'S GO RIGHT NOW BRO!" << endl;

return 0;		
}
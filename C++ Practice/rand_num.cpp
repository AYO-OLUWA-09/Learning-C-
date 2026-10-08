#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main(){
	
	system("chcp 65001");
	srand(time(NULL));
	
	int num_1 = rand()%(9 - 0 + 1) + 0;
	int num_2 = rand()%(9 - 0 + 1) + 0;
	
	if (num_1 < num_2){
		
		int exc;
		exc = num_1;
		num_1 = num_2;
		num_2 = exc;
		
	};
	
	
	//num calc
	int solution;
	
	cout<<"What is "<<num_1<< "-"<<num_2<<" ? ";
	cin>>solution;
	
	if (solution == num_1 - num_2){
	
	
	cout<<"Correcttt!!!"<<endl<<"The answer is: "<<solution;
	
	}else{
		cout<<"The answer is not quite correct??"<<endl<< "Do well to check again????";
	};
	
}
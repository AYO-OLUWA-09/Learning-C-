#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
	
	cout<<"-----------------------------------"<<endl;
	cout<<"     SMART ENERGY METER SYSTEM     "<<endl;
	cout<<"-----------------------------------"<<endl;
	
	string name;
	cout<<"Customer Name: ";
	cin>>name;
	
	bool isenrolled;
	int enrolled;
	cout<<"Enrolled in Green Rewards(1-Yes, 0-No): "<<endl;
	cin>> enrolled;
	isenrolled = (enrolled == 1);
//	if (enrolled ==1 ){
//		cout<<"Yes";
//		
//	}else{
//		cout<<"No";
//	}
	
	int a_energy;
	cout<<"Actual Energy Usage: ";
	cin>>a_energy;
	
	system("chcp 65001");
	srand(time(NULL));
	int target_energy = rand()%(50 - 10 + 1) + 10;
	cout<<"Target Energy Limit: "<<target_energy<<endls;
	
	
	//part b
	cout<<"-------------------------------------";
	cout<<"       USAGE EVALUATION              ";
	cout<<"-------------------------------------";
	
	string status;
	
	if (a_energy < target_energy){
		cout<<"Status:                UNDER LIMIT";
	}else if(a_energy == target_energy){
		cout<<"Status:                EXACT LIMIT";
	}else{
		cout<<"Status:                OVER LIMIT";
	}
}
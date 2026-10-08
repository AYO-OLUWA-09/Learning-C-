#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main(){
	
	cout<<"---------------------------------"<<endl;
	cout<<"  SMART HOME DIAGNOSTIC SYSTEM   "<<endl;
	cout<<"---------------------------------"<<endl;
	
	string d_name;
	cout<<"Device Name:                      ";
	getline(cin, d_name);
	
	int battery_level;
	cout<<"Battery Level:                    ";
	cin>>battery_level;
	
	bool isconnected;
	
	int con_status;
	cout<<"Wi-Fi Status:(1 for connected, 0 for disconnected)";
	cin>>con_status;
	
	isconnected = (con_status == 1);
	
	int no_error;
	cout<<"Error Logs:                       ";
	cin>>no_error;
	
	
	// Part B
	srand(time(0));
	int dia_score = rand()%(100 - 40 + 1) + 40;
	cout<<"Diagnotic Score:   "<<dia_score<<endl;
	
	if(dia_score >= 90){
		cout<<"Score Classification:  Optimal "<<endl;
	}else if(dia_score>= 70){
		cout<<"Diagnotic score: Stable "<<endl;
	}else if(dia_score >= 50){
		cout<<"Score Classification:   Unstable"<<endl;
	}else{
		cout<<"Score Classification:    Critical"<<endl;
	}
	
	// Part C
	int device_id = rand()%(9999 - 1000 + 1) + 1000;
	cout<<"Device ID: "<<device_id<<endl;
	
	if(device_id % 2 == 0){
		cout<<"Device ID Type:              EVEN"<<endl;
	}else{
		cout<<"Device ID Type:              ODD"<<endl;
	}
	
	//PART D
	
	cout<<"--------------------------------------"<<endl;
	cout<<"     DEVICE HEALTH DECISION           "<<endl;
	cout<<"--------------------------------------"<<endl;
	
	if(isconnected == 1 && dia_score >= 70 && no_error < 5){
		cout<<"Device Status:          OPERATIONAL"<<endl;
	
	
	//PART E
	int incen_code = rand()%(10 - 1 + 1) + 1;
	
	if(isconnected == 1 && dia_score >= 70 && no_error < 5 &&incen_code == 5){
		cout<<"Bonus Point:                    20"<<endl;
	}else if(isconnected == 1 && dia_score >= 70 && no_error < 5 &&incen_code % 2){
		cout<<"Bonus Point:                    10"<<endl;
	}else{
		cout<<"Bonus Point:                    5"<<endl;
	}
}else{
		cout<<"Device Status:          NEED REPAIR"<<endl;
	}

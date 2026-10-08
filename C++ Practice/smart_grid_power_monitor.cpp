#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main(){
	
	//part A
	cout<<"----------------------------------"<<endl;
	cout<<"      SMART GRID POWER MONITOR    "<<endl;
	cout<<"----------------------------------"<<endl;
	
	string trans_id;
	cout<<"Transformer ID:                     ";
	cin>>trans_id;
	
	int curr_load;
	cout<<"Current Load:                       ";
	cin>>curr_load;
	
	double temp;
	cout<<"Temperature(in Celsius):            ";
	cin>>temp;
	
	bool isconnected;
	
	int con_status;
	cout<<"Grid Status(1-Online, 0-offline):                        ";
	cin>>con_status;
	
	isconnected = (con_status == 1);
	
	// part b
	srand(time(0));
	int eff_score = rand()%(80 - 20 + 1) + 20;
	cout<<"Efficiency Score:                 "<<eff_score<<endl;
	if(eff_score >= 70){
		cout<<"Efficiency Class:         High Efficiency"<<endl;
	}else if(eff_score >= 50){
		cout<<"Efficiency Class:         Normal Efficiency"<<endl;
	}else if(eff_score >= 30){
		cout<<"Efficiency Class:         Low Efficiency"<<endl;
	}else{
		cout<<"Efficiency Class:         Critial Efficiency";
	}
	
	//part C
	int phase_num = rand()%(500 - 100 + 1) + 100;
	cout<<"Phase Number:                               "<<phase_num<<endl;
	
	if(phase_num % 2 == 0){
		cout<<"Phase Type:                    EVEN PHASE"<<endl;
	}else{
		cout<<"Phase Type:                     ODD PHASE"<<endl;
	}
	
	//part d
	cout<<"------------------------------------------"<<endl;
	cout<<"           GRID SAFETY DECISION            "<<endl;
	cout<<"-------------------------------------------"<<endl;
	
	if(isconnected == 1 && eff_score >= 50 && curr_load < 85 && temp<40){
		cout<<"Grid Status:                       SAFE"<<endl;
		
		//bonus
		int main_code = rand()%(5 - 1 + 1) + 1;
		if(main_code == 3){
			cout<<"Bonus Point:                     50"<<endl;
			
		}else if(main_code % 2 == 0){
			cout<<"Bonus Point:                     20"<<endl;
		}else{
			cout<<"Bonus Point:                     10"<<endl;
		}
	}else{
		cout<<"Grid Status:                         NOT SAFE"<<endl;
	}
}
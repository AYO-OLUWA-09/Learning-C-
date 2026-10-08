#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void inv(){
	cout<<"Invalid score";
}

int main(){
	
	// students input
	
	cout<<"==============================="<<endl;
	cout<<"    STUDENT RESULT SYSTEM      "<<endl;
	cout<<"==============================="<<endl;
	
	string s_name;
	cout<<"Name:                          ";
	cin>>s_name;
	
	string mat_no;
	cout<<"Matric Number:                 ";
	cin>>mat_no;
	
	double test_1;
	cout<<"Test 1                         ";
	cin>>test_1;
	if (test_1 > 10){
		//cout<<"Impossible test score";
		inv();
		
		return 0;
		
	} 
	
	int test_2;
	cout<<"Test 2:                        ";
	cin>>test_2;
	if (test_2 > 10){
		//cout<<"Impossible test score";
		inv();
		return 0;
	}   
	          
	int ass;
	cout<<"Assingnment:                   ";
	cin>>ass;
	if (ass > 10){
		//cout<<"Impossible Assignment  score";
		inv();
		return 0;
	} 
	
	int practical;
	cout<<"Practical:                     ";
	cin>>practical;
	if (practical > 10){
		//cout<<"Impossible Practical score";
		inv();
		return 0;
	} 
	
//	cout<<"------------------------------"<<endl;
	cout<<"------------------------------"<<endl;
	//ca
	int ca;
	ca = test_1 + test_2 + ass + practical;
	cout<<"CA Score:                     "<<ca<<endl;

	int exam;
	cout<<"Exam Score:                   ";
	cin>>exam;
	if (exam > 60){
		//cout<<"Impossible exam score";
		inv();
		return 0;
	} 
	
	cout<<"-----------------------------"<<endl;
	
	int total;
	total = ca + exam;
	cout<<"Total Score:                  "<<total<<endl;

	string grade;
	if(total>= 70){
		cout<<"Grade:                    A"<<endl;
		cout<<"Remark:                   Excellent"<<endl;
		if(total >= 80){
			cout<<"Outstanding Performance";
		}
	}else if(total>= 60 & total <= 69){
		cout<<"Grade:                    B"<<endl;
		cout<<"Remark:                   Very Good"<<endl;
	}else if(total>=50 & total <= 59){
		cout<<"Grade:                    C"<<endl;
		cout<<"Remark:                   Good"<<endl;
	}else if(total>= 45 & total <= 49){
		cout<<"Grade:                    D"<<endl;
		cout<<"Remark:                   Fair"<<endl;
	}else if(total >= 40 & total <= 44){
		cout<<"Grade:                    E"<<endl;
		cout<<"Remark:                   Pass"<<endl;
	}else{
		cout<<"Grade:                    F"<<endl;
		cout<<"Remark:                   Fail"<<endl;
		if(total< 40){
			cout<<"Student needs academic improvement."<<endl;
		}else if(total == 38 & total == 39){
			cout<<"Borderline Failure??";
		}
}
}
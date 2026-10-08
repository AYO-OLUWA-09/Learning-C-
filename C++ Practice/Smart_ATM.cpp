#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main(){
	
	//input 
	cout<<"======================"<<endl;
	cout<<"        SMART ATM     "<<endl;
	cout<<"======================"<<endl;
	
	string c_name;
	cout<<"Enter customer name: ";

	getline(cin, c_name);
	
	string acct_no;
	cout<<"Enter Account Number: ";
	cin>>acct_no;
	
	double cur_bal;
	cout<<"Enter Current Account Balance: ";
	cin>>cur_bal;
	
	
	int pin;
	cout<<"Enter PIN: ";
	cin>>pin;
	
	int w_amount;
	cout<<"Enter Withdrawal Amount: ";
	cin>>w_amount;
	cout<<""<<endl;
	//random trasction ID
	srand(time(NULL));
	int tra_id = rand()%(9999 - 1000)+ 1000;
	
	
	//if w_amount is 50,000mor above
	
	if(w_amount>= 50000){
		cout<<"Large amount detected."<<endl;
		cout<<"You about to make a large transaction"<<endl<<endl;
	};
	
	if(pin==2026){
		if(w_amount <=100000){
			double bank_charge;
			bank_charge = w_amount * 0.01;
			//cout<<"Bank Charge: "<<bank_charge<<endl;
			
			//total debit
			double total_debit;
			total_debit = w_amount + bank_charge;
			//cout<<"Total Debit: "<<total_debit<<endl;
			
			double new_bal;
			new_bal = cur_bal - total_debit;
			
			if(new_bal>= 5000){
				
				cout<<"========================"<<endl;
				cout<<"  TRANSACTION APPROVED  "<<endl;
				cout<<"========================"<<endl;
				
				cout<<"Transaction ID: "<<tra_id<<endl;
				cout<<"Customer: "<<c_name<<endl;
				cout<<"Account Number: "<<acct_no<<endl;
				cout<<"Previous Balance: "<<cur_bal<<endl;
				cout<<"Withdrawal:"<<w_amount<<endl;
				cout<<"Bank Charge: "<<bank_charge<<endl;
				cout<<"Total Debit: "<<total_debit<<endl;
				cout<<"New balance: "<<new_bal<<endl;
				cout<<"=======================";
			}else{
				cout<<"Insufficent Funds"<<endl;
			}			
		}else{
			cout<<"Transaction Declined."<<endl;
			cout<<"Exceeded transaction limit."<<endl;
			
		}
	}else{
		cout<<"Pin Incorrect"<<endl;
		cout<<"Restart transaction with new pin"<<endl;
	}
}
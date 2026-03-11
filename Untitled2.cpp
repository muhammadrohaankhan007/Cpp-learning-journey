#include <iostream>
using namespace std;

class Customer{
    string name;
    int accNo, balance;
    string location;
    int helpline;
    
    public:
    	Customer(string a, int b, int c){
    		name= a;
    		accNo = b;
    		balance = c;
		}
		
		Customer(string location, int helpline){
			this->location = location;
			this->helpline = helpline;
		}
		
		void CustomerDetails(){
			cout<<"Customer name: "<<name<<endl;
			cout<<"Customer ACC No: "<<accNo<<endl;
			cout<<"Customer Balance: "<<balance<<endl;
		}
		void BankDetails(){
			cout<<"Location: "<<location<<endl;
			cout<<"Helpline: "<<helpline<<endl;
		}
};

int main(){
	Customer obj1("Rohaan", 12344, 4000);
	Customer obj2("Gulshan branch", 19072601);
	
	obj1.CustomerDetails();
	obj2.BankDetails();
	
}



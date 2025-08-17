#include <iostream> 
#include<string>
#include <cmath>
using namespace std;

class event{
	private:
		const double CostPerHour = 18.50; 
	 	const double CostPerMinute = .40; 
		const double CostOfDinner = 20.70;
	public:
		string ev_name,cus_fname,cus_lname;
		int guest_num, minute, server;
		double cost1,cost2, CostForOneServer, TotalFoodCost, AverageCost, TotalCost, DepositAmount;
		event()
		{
			//Event Information
			cout<<"**************Event Management System**************"<<endl;
			cout<<"Enter the name of the event"<<endl;
			cin>>ev_name;
			cout<<"Enter the customer's first and last name"<<endl;
			cin>>cus_fname>>cus_lname;
			cout<<"Enter the number of guests"<<endl;
			cin>>guest_num;
			cout<<endl<<"Enter the number of minutes in the event"<<endl;
			cin>>minute;
			for(int i=0;i<12;i++){
				cout<<"=";
			}
			cout<<" Event estimate for :"<<cus_fname<<" "<<cus_lname<<" "<<endl;
			for(int i=0;i<12;i++){
				cout<<"=";
			}
			cout<<endl;			
		}
		void servercost() {
			//Server Cost
			server = ceil(guest_num/20);
			cout<<"The Number of Server: "<<server<<endl;
			cost1 = (minute/60)*CostPerHour;
			cost2 = (minute%60)*CostPerMinute;
			CostForOneServer = cost1 + cost2;
			cout<<"The Cost for the Servers: "<<CostForOneServer<<endl;
		}
		void Total_Cost() {
			TotalFoodCost = guest_num * CostOfDinner;
			cout<<"The Cost for the food is: "<<TotalFoodCost<<endl;
			AverageCost = TotalFoodCost / guest_num;
			cout<<"Average Cost Per Person: "<<AverageCost<<endl;

			//Total Cost
			TotalCost = TotalFoodCost + (CostForOneServer * server);
			cout<<"Total Cost is: "<<TotalCost<<endl;
		}
		void Total_Cost() {
			TotalFoodCost = guest_num * CostOfDinner;
			cout<<"The Cost for the food is: "<<TotalFoodCost<<endl;
			AverageCost = TotalFoodCost / guest_num;
			cout<<"Average Cost Per Person: "<<AverageCost<<endl;

			//Total Cost
			TotalCost = TotalFoodCost + (CostForOneServer * server);
			cout<<"Total Cost is: "<<TotalCost<<endl;
		}
		void deposit(){
			//Deposit Amount
			DepositAmount = TotalCost * .25; 
			cout<<"Please deposit a 25%% deposit to reserve the event"<<endl;
			cout<<"The deposit needed is: "<<DepositAmount<<endl;
		}
		~event();
};

int main()
{
	event ab;
	ab.servercost();
	ab.Total_Cost();
	ab.deposit();
	return 0; 
}
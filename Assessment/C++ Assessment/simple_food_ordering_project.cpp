#include<iostream>

using namespace std;
int main(){
	string cust_name;
	int pizza = 110, veg_pizza = 240, cheese_pizza = 210, margherita = 290;
	int burgers= 60, double_patty = 89, periperi = 120;
	int sandwich = 30, club_sandwich = 240, veg_crispy_sanwich = 160, extra_veg_sandwich = 100;
	int rolls= 20, spring_roll = 69, egg_roll = 99;
	int biryani = 130, veg_biryani = 99, Hydrabadi_biryani = 130;
	int amount = 0;
	int sub_total;
	int price=0;
	int sub_menu_no=0;
	int menu_no=0, qty;
	char exit;
	cout<<"\n----------Tops Tech. Fast Food-------------";
	cout <<"\nEnter Your Name : ";
	cin >>cust_name;  //user input customer name
	cout<<"\nHello "<<cust_name;
	cout<<"\nWhat Would You Like to Order!";
	cout<<"\n\n--------------Menu-------------------";
	cout<<"\n1. Pizza ";
	cout<<"\n2. Burgers ";
	cout<<"\n3. Sandich ";
	cout<<"\n4. Rolls ";
	cout<<"\n5. Biryani ";
	
	while(1){  // Loop for Menu Selection Until Order Submition
		cout<<"\nPlease Enter Your Choose: ";
		cin>>sub_menu_no;
		switch(sub_menu_no){  // Switch statement for Menu Selections
			case 1:
				cout<<"\n1. Veg Pizza ..........240rs/pcs";
				cout<<"\n2. Cheese Pizza .......210rs/pcs";
				cout<<"\n3. Margherita Pizza ...290rs/pcs\n";
				cout<<"\n\n Please Enter Which Pizza Would You Like to Have? ";
				cin >>sub_menu_no;  //user input menu number
				if (sub_menu_no==1){  // for sub_menu_selections
					cout<<"\nYou Have Selected Veg Pizza";
					
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = veg_pizza*qty;
				}
				else if (sub_menu_no==2){
					cout<<"\nYou Have Selected Veg Cheese Pizza";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;   // user input quantity
					price = cheese_pizza*qty;
				}
				else if (sub_menu_no==3){
					cout<<"\n You have Selected Margherita Pizza";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = margherita*qty;
				}
				else{
					cout<<"\nExiting! Menu Selection Wrong\n";
					return 0;
				}
				break;
			case 2:
				cout<<"\n1. Burger with Double patty ..........89rs/pcs";
				cout<<"\n2. Burger with Periperi Masala .......120rs/pcs\n";
				cout<<"\n\n Please Enter Which Burgers Would You Like to Have? ";
				cin>>sub_menu_no; //user input menu number
				if (sub_menu_no==1){   // for sub_menu_selections
					cout<<"\nYou Have Selected Burger with Double patty";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = double_patty*qty;
				}
				else if (sub_menu_no==2){
					cout<<"\nYou Have Selected Burger with Periperi Masala";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = periperi*qty;
				}
				else{
					cout<<"\nExiting! Menu Selection Wrong\n";
					return 0;
				}
				break;
			case 3:
				cout<<"\n1. Club Sandwich ...........240rs/pcs";
				cout<<"\n2. Veg Crispy Sandwich .....160rs/pcs";
				cout<<"\n3. Extreaam Veg Sandwich ...100rs/pcs\n";
				cout<<"\n\n Please Enter Which Sandwich Would You Like to Have? ";
				cin >>sub_menu_no; //user input menu number
				if (sub_menu_no==1){   // for sub_menu_selections
					cout<<"\nYou Have Selected Club Sandwich";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = club_sandwich*qty;
				}
				else if (sub_menu_no==2){
					cout<<"\nYou Have Selected Veg Crispy Sandwich";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = veg_crispy_sanwich*qty;
				}
				else if (sub_menu_no==3){
					cout<<"\nYou Have Selected Extra Veg Sandwich";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = extra_veg_sandwich*qty;
				}
				else{
					cout<<"\nExiting! Menu Selection Wrong\n";
					return 0;
				}
				break;
			case 4:
				cout<<"\n1. Spring Roll ..........69rs/pcs";
				cout<<"\n2. Egg Roll .............99rs/pcs\n";
				cout<<"\n\n Please Enter Which Roll Would You Like to Have? ";
				cin>>sub_menu_no; //user input menu number
				if (sub_menu_no==1){   // for sub_menu_selections
					cout<<"\nYou Have Selected Spring Roll";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = spring_roll*qty;
				}
				else if (sub_menu_no==2){
					cout<<"\nYou Have Selected Egg Roll";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = egg_roll*qty;
				}
				else{
					cout<<"\nExiting! Menu Selection Wrong\n";
					return 0;
				}
				break;
			case 5:
				cout<<"\n1. Veg biryani ...................99rs/pcs";
				cout<<"\n2. Hydrabadi biryani .............130rs/pcs\n";
				cout<<"\n\n Please Enter Which Biryani Would You Like to Have? ";
				cin>>sub_menu_no; //user input menu number
				if (sub_menu_no==1){   // for sub_menu_selections
					cout<<"\nYou Have Selected Veg biryani";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = veg_biryani*qty;
				}
				else if (sub_menu_no==2){
					cout<<"\nYou Have Selected Hydrabadi biryani";
					cout<<"\nPlease Enter Quantity : ";
					cin>>qty;
					price = Hydrabadi_biryani*qty;
				}
				else{
					cout<<"\nExiting! Menu Selection Wrong\n";
					return 0;
				}
				break;
				
		}
		sub_total +=price; //total price before cust want more!
		cout <<"\nPrice : "<<price;
		cout <<"\nSub Total : "<<sub_total;
		cout<<"\nDo You Want To Place More ORder? y/n : ";
		cin>>exit;
		if (exit=='n'){
			break;
		}
	}
	
	amount += sub_total; // final price after cust submit order.
	cout<<"\nFor "<<cust_name<<"\nTotal Bill "<<amount;  // final amount
	cout<<"\nThank You for Order. Visit Again"; //greeting
	return 0;
	
}

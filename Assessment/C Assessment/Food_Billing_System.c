#include<stdio.h>


int main(){
	int Amount=0;
	int price=0;
	int pizza = 110;
	int Chole_Bhature = 60;
	int Samosa = 30;
	int Aloo_Puri = 20; 
	int menu_num;
	int qty=0;
	char exit;
	printf("Menu No_");
	printf("\n1. Pizza...............price=110rs/pcs");
	printf("\n2. Chole_bhature.......price=60rs/pcs");
	printf("\n3. Samosa..............price=30rs/pcs");
	printf("\n4. Aloo_Puri...........price=20rs/pcs");
	
	while(1){
		printf("\nPlease Enter Menu Numebr to Order...: ");
		scanf("%d", &menu_num);
		switch(menu_num){
			case 1:
				printf("\nYou Have Selected Pizza.");
				printf("\nSelect Quantity..: ");
				scanf("%d", &qty);
				price = pizza*qty;
				break;
			case 2:
				printf("\nYou have Selected Chole Bhature");
				printf("\nSelect Quantity..: ");
				scanf("%d", &qty);
				price = Chole_Bhature*qty;
				break;
			case 3:
				printf("\nYou have Selected Samosa");
				printf("\nSelect Quantity..: ");
				scanf("%d", &qty);
				price = Samosa*qty;
				break;
			case 4:
				printf("\nYou Have Selected Aloo Puri");
				printf("\nSelect Quantity..: ");
				scanf("%d", &qty);
				price = Aloo_Puri*qty;
				break;
			default:
				printf("\nMenu Doesn't Exist! Please Choose Again.'");
				continue;
		}
		
		Amount += price;
		printf("\nSubtotal Is: %d", price);
		printf("\nTotal is: %d", Amount );
		
		printf("\nDo You Want To Place More ORder? y/n : ");
		scanf(" %c", &exit);
		if (exit == 'n'){
			break;
		}
		
	}
	
	printf("\nThank You for Order. Visit Again");
	printf("\nTotal Bills : %d", Amount);
	return 0;
}

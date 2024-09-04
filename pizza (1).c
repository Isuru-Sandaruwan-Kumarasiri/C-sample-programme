#include<stdio.h>
#include<string.h>
void menu(){
	printf("\n--------Pizza Order Menue--------\n");
	printf("\t\t\t1.Order Pizza.\n\t\t\t2.tView Pizza Menu\n\t\t\t3.View Toppings Menu.\n\t\t\t4.Exit\n");
};
void pizza_menu(){
	printf("\n--------Pizza Prices--------\n");
	printf("1.Hot & Spicy\t500.00\n2.Cheesy\t650.00\n3.veggie\t500.00\n4.Meat\t700.00\n5.BBQ Chicken\t750\n----------------");
};
void topping_menu(){
	printf("\n--------Topping Menu--------\n");
	printf("1.Pepperoni\t100.00\n2.Mushroom\t150.00\n3.Extra Cheese\t200.00\n5Green Pepper\t100.00\n\n");
};
typedef struct{
	char p_name[20];
	char top[20];
	char size[20];
	int qty;
	int price;
}pizza;
typedef struct{
	char  cus_name[20];
        int  cus_id;
        int cus_phone;
	pizza order[10];
}custmer;
int user;
int user_input(user){
	printf("Select Your Choice-");
	scanf("%d",&user);
	return user;
};

custmer cus[20];
int count1=0;
int count2=0;

void main(){
	menu();
	int u;
	u=user_input(u);
	switch(u){
		case 1:
			int k=0;
			while (k!=9){
				printf("Enter Your Name-");
				scanf("%s",cus[count1].cus_name);
				printf("Insert ID Number ");
				scanf("%d",&cus[count1].cus_id);
				printf("Insert Phone NUmber");
				scanf("%d",&cus[count1].cus_phone);
                                pizza_menu();
				int p;
                          	p=user_input(p);
				switch(p){
					case 1:
						strcpy(cus[count1].order[count2].p_name,"hot and spycy");
						topping_menu();
					        int q;
						q=user_input(q);
						switch(q){
							case 1:	
						                strcpy(cus[count1].order[count2].top,"Pepperoni");
								printf(cus[count1].order[count2].top);
							        break;
							case 2:
						                strcpy(cus[count1].order[count2].top,"Mushroom");
								printf(cus[count1].order[count2].top);
								break;
							case 3:
						                strcpy(cus[count1].order[count2].top,"Extra Cheese");
								printf(cus[count1].order[count2].top);
								break;
							case 4:
						                strcpy(cus[count1].order[count2].top,"Onion");
								printf(cus[count1].order[count2].top);
								break;
							case 5:
						                strcpy(cus[count1].order[count2].top,"Green Paper");
								printf(cus[count1].order[count2].top);
								break;
						        default:
								printf("\n-----enter correct Input!!!!------\n");
								break;





						}







				}

			
			}

			break;
		case 2:
			pizza_menu();
			break;
		case 3:
			topping_menu();
			break;
		case 4:
			break;
	}
}

#include<stdio.h>
#include<string.h>
void menu(){
	printf("--------Pizza Order Menue--------\n");
	printf("\t\t\t1.Order Pizza.\n\t\t\t2.tView Pizza Menu\n\t\t\t3.View Toppings Menu.\n\t\t\t4.Exit\n");
};
void pizza_menu(){
	printf("--------Pizza Prices--------\n");
	printf("1.Hot & Spicy\t500.00\n2.Cheesy\t650.00\n3.veggie\t500.00\n4.Meat\t700.00\n5.BBQ Chicken\t750\n----------------");
};
void topping_menu(){
	printf("--------Topping Menu--------\n");
	printf("1.Pepperoni\t100.00\n2.Mushroom\t150.00\n3.Extra Cheese\t200.00\n5Green Pepper\t100.00\n");
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



custmer cus[20];
int count1=0;
int count2=0;
void main(){
	menu();
	int user;
	printf("Select Your Choice-");
	scanf("%d",&user);
	switch(user){
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
				printf("Select your Choice_");
				scanf("%d",&p);

				switch(p){
					case 1:
						strcpy(cus[count1].order[count2].p_name,"hot and spycy");
					        printf(cus[0].order[0].P_name);


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

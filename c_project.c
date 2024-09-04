#include <stdio.h>
#include <string.h>

typedef struct{
	int price;
	int qty;
}Ticket;

typedef struct{
	char id_no[15];
	char name[20];
	Ticket tickets[6];

}Booking;

int count = 0;
Booking bookings[20];

void print_ticket_types(){

	printf("-----------------------\n");
	printf("1. Rs.5000\n");
	printf("2. Rs.2000\n");
	printf("3. Rs.1000\n");
	printf("4. Rs.500\n");
	printf("5. Rs.200\n");
	printf("6. Rs.50\n");
	printf("-----------------------\n");
}

void ticketing_summary(){

	int t5000=0,t2000=0,t1000=0,t500=0,t200=0,t50=0;

	if(count==0){
		printf("\nNo Booking in the list!\n");
		return;
	}

	int j;
	for(j=0; j<count; j++){
		t5000 += bookings[j].tickets[0].qty;
		t2000 += bookings[j].tickets[1].qty;
		t1000 += bookings[j].tickets[2].qty;
		t500  += bookings[j].tickets[3].qty;
		t200  += bookings[j].tickets[4].qty;
		t50   += bookings[j].tickets[5].qty;
	}

	printf("\n********* Booking list ************\n");
	printf("\nTicket \t Quantity\n");
	printf("\nRs.5000 \t %5d",t5000);
	printf("\nRs.2000 \t %5d",t2000);
	printf("\nRs.1000 \t %5d",t1000);
	printf("\nRs.500  \t %5d",t500);
	printf("\nRs.200  \t %5d",t200);
	printf("\nRs.50   \t %5d\n",t50);
	printf("\n***** Total Income :  \t Rs. %llu",(long long int)(t5000*5000+t2000*2000+t1000*1000+t500*500+t200*200+t50*50));
}


int main(){
	int i=0;
	int l = 0;

	int ticket=0;
	int qty=0;

	while(i != 9){

		printf("\n\n\t\t Musical Show ticket booking. \n");
		printf("********** select an option from the menu. **********\n");
		printf("\t 1.Buy tickets.\n");
		printf("\t 2.Show Total Income & Number of tickets sold.\n");
		printf("\t 3.Show Ticket Category.\n");
		printf("\t 9.Exit.\n");
		printf("option:");
		scanf("%d", &i);

		Booking temp;

		switch(i){

			case 1:

			    printf("insert national id number : ");
				scanf("%s",temp.id_no);
				printf("insert name: ");
				scanf("%s", temp.name);

				temp.tickets[0].price=5000;
				temp.tickets[1].price=2000;
				temp.tickets[2].price=1000;
				temp.tickets[3].price=500;
				temp.tickets[4].price=200;
				temp.tickets[5].price=50;

				temp.tickets[0].qty=0;
				temp.tickets[1].qty=0;
				temp.tickets[2].qty=0;
				temp.tickets[3].qty=0;
				temp.tickets[4].qty=0;
				temp.tickets[5].qty=0;

				while(l != 9){
					printf("select a ticket : \n");
					print_ticket_types();
					printf("Ticket category : ");
					scanf("%d", &ticket);
					printf("Insert quantity : ");
					scanf("%d", &qty);

					switch(ticket){
						case 1:
							temp.tickets[0].qty += qty;
							break;
						case 2:
							temp.tickets[1].qty += qty;
							break;
						case 3:
							temp.tickets[2].qty += qty;
							break;
						case 4:
							temp.tickets[3].qty += qty;
							break;
						case 5:
							temp.tickets[4].qty += qty;
							break;
						case 6:
							temp.tickets[5].qty += qty;
							break;
						default:
						    printf("\n Invalid Input \n");
					}
					printf("to continue press 1 to exit press 9 : ");
					scanf("%d", &l);
				}
				bookings[count] = temp;
				printf("temp is %d",temp);
				count++;
				printf("Booking added successfully....\n\n");
				l=0;
				break;

			case 2:
			    ticketing_summary();
			    break;

			case 3:
			    print_ticket_types();
			    break;

			case 9:
			    i = 9;
			    break;
		}
	}
	return 0;
}

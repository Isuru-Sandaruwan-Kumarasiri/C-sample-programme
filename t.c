#include<stdio.h>

// ticket price
typedef struct{
    int qty;
    int price;
}qatorgery_of_ticket;


//user details
typedef struct{
    char name;
    int id;
    qatorgery_of_ticket u_ticket[6]; //we must include how many tickets are there
}booking_details;


//menu
char menue(){
        printf("\n\t\t\t\t\tMusicle Show Ticket Booking \n\n\n");
        printf("\t\t\t************Select an Option Form the Menu************\n\n");
        printf("\t\t\t\t1.Buy Tickets\n\t\t\t\t2.Show Total Income &Total number of tickets Sold\n\t\t\t\t3.Show Ticket Catergories.\n\t\t\t\t9.Exit.\n\n");
        printf("\t--------------------------------------------------------------------------------------------------------\n\n ");

};

//Qatergeroy of tickets
char tickets(){
    printf("\n\t\t\t\tType of Tickets\n\n");
    printf("\t\t\t1.5000\n\t\t\t2.2000\n\t\t\t3.1000\n\t\t\t4.500\n\t\t\t5.200\n\t\t\t6.50\n");
};

int count=0;
booking_details bookings[20];

void main(){
    int l=1;

    while(l!=0){
        char user;
        menue();
        printf("Option- ");
        scanf("%s",&user);



        //what are the options
        switch(user){
        //buying ticket section
        case '1':
            printf("Enter Your Name-");
            scanf("%s",&bookings[count].name);
            printf("Enter your ID-");
            scanf("%d",&bookings[count].id);

            bookings[count].u_ticket[0].price=5000;
            bookings[count].u_ticket[1].price=2000;
            bookings[count].u_ticket[2].price=1000;
            bookings[count].u_ticket[3].price=500;
            bookings[count].u_ticket[4].price=200;
            bookings[count].u_ticket[5].price=50;

            bookings[count].u_ticket[0].qty=0;
            bookings[count].u_ticket[1].qty=0;
            bookings[count].u_ticket[2].qty=0;
            bookings[count].u_ticket[3].qty=0;
            bookings[count].u_ticket[4].qty=0;
            bookings[count].u_ticket[5].qty=0;

            int k=1;
            while (k!=0){
                tickets();
                int q;
                printf("print ticket type()- ");
                scanf("%d",&q);
                int j;
                printf("quantitiy- ");
                scanf("%d",&j);


                switch(q){
						case 1:
							bookings[count].u_ticket[0].qty += j;
							break;
						case 2:
							bookings[count].u_ticket[1].qty += j;
							break;
						case 3:
							bookings[count].u_ticket[2].qty += j;
							break;
						case 4:
							bookings[count].u_ticket[3].qty += j;
							break;
						case 5:
							bookings[count].u_ticket[4].qty += j;
							break;
						case 6:
							bookings[count].u_ticket[5].qty += j;
							break;
						default:
						    printf("\n Invalid Input \n");
					}
                printf("if you want to exit press No-0 or for buying press No-1   -");
                scanf("%d",&k);
                if(k==0){
                printf("Buying  is done succesfully !");
                }

                count++;

            }
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        default:
            printf("Pleace enter the value charecter");



        }

        continue;

    }

}


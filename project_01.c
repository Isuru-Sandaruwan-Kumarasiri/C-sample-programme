#include<stdio.h>

struct time {
    int hour;
    int minute;
};

struct user {
    char u_name[64];
    int u_id;
    struct time u_time;
    int u_ticket[6];

    // 0 - 5000
    // 1 - 2000
    // 2 - 1000
    // 3 - 500
    // 4 - 200
    // 5 - 50
};

//users la 20k inna hinda

struct user user_array[20];


void user_input(int i){
    printf("Enter your name: ");
    scanf("%s", user_array[i].u_name);
    printf("Enter your ID: ");
    scanf("%d", &user_array[i].u_id);
    printf("Enter Time(hour): ");
    scanf("%d", &user_array[i].u_time.hour);
    printf("Enter Time(Minute): ");
    scanf("%d", &user_array[i].u_time.minute);

    // but ticket kotasak
    buy_ticket(i);
}


void buy_ticket(int i){
    int type;
    int amount;
    int con;
    print_ticket_types();

    printf("Enter ticket type: ");
    scanf("%d", &type);
    printf("Enter amount: ");
    scanf("%d", &amount);

    user_array[i].u_ticket[type-1] = amount;

    printf("Do you want to continue buying (Y=>1 & N=>0): ");
    scanf("%d", &con);

    if(con != 0){
        printf("Buying Again");
        buy_ticket(i);
    }
}

void print_ticket_types(){
        printf("Ticket Price Categories\n");
        printf("\t 1. Rs.5000/=\n");
        printf("\t 2. Rs.2000/=\n");
        printf("\t 3. Rs.1000/=\n");
        printf("\t 4. Rs.500/=\n");
        printf("\t 5. Rs.200/=\n");
        printf("\t 6. Rs.50/=\n");
}

void show_total(int count){

    int total_array[6]={0};
    int total;

    for(int x=0;x<count;x++){
            for(int y=0;y<6;y++){
                 total_array[y] = total_array[y] + user_array[x].u_ticket[y];
                 }
    }

    printf("********* Booking list ************\n");
    printf("Ticket  \t Quantity \n");
    printf("Rs.5000 \t %d       \n", total_array[0]);
    printf("Rs.2000 \t %d       \n", total_array[1]);
    printf("Rs.1000 \t %d       \n", total_array[2]);
    printf("Rs.500  \t %d       \n", total_array[3]);
    printf("Rs.200  \t %d       \n", total_array[4]);
    printf("Rs.50   \t %d       \n", total_array[5]);
    printf("\n");

    total = total_array[0]*5000+total_array[1]*2000+total_array[2]*1000+total_array[3]*500+total_array[4]*200+total_array[5]*50;

    printf("***** Total Income : Rs. %d\n", total);
}

void main(){
    int choice;
    int count=0;
    while(choice!=9 || count < 20){
        printf("\t\t Musical Show Ticket Booking.\n");
        printf("********** select an option from the menu. **********\n");
        printf("\t 1. Buy Tickets.\n");
        printf("\t 2. Show Total Income & Total Number of tickets sold.\n");
        printf("\t 3. Show Ticket Categories\n");
        printf("\t 9. Exit.\n\n");

        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                user_input(count);
                count++;
                getch();
                system("cls");
                break;
            case 2:
                show_total(count);
                getch();
                system("cls");
                break;
            case 3:
                print_ticket_types();
                getch();
                system("cls");
                break;
            case 9:
                exit(1);
            default:
                printf("ERROR!!!!!!!!!!!!");
                getch();

        }

    }
}

/*#include<stdio.h>
int main ()
{
    int op;
    printf("1 head massage cost =1000\n 2 leg massage cost=5000\n 3 neck massage cost=4000\n 4 thigh  massage cost =10000 \n 5 tuk tuk massage\n cost =100\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("head massage\n cost =1000");
        break;
        case 2:
        printf("leg massage\n cost=5000 ");
        break;
        case 3:
        printf("neck massage \n cost=4000 ");
        break;
        case 4:
        printf("thigh  massage\n cost =10000");
        break;
        case 5:
        printf("tuk tuk massage\n cost =100");
        break;
        default:
        printf("this massage is not here");
        break;

    }
}
 calculater 
#include<stdio.h>
int main (){

int a, b;
char c;

    printf("enter the expression\n");
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        if (b!=0)
        {
        printf("%1f\n",(float)a/b);
        }
        else{
            printf("the is zeero enter the  non zero value ");
            scanf("%d",&b);
             printf("%d\n",a/b);
        }
        break;
        default:
        printf("this massage is not here");
        break;

    }
}
#include<stdio.h>
int main()
{
    int floor;
    int store_num; //First floor shops number
    int n; //Number of clothes
    int c_price=100; //For every clothes, price is 100 (c_price->cloth price)
    int screen_no; //Theatre
    int ticket; //Movie ticket
    int mt_price=200; //Movie ticket price
    int variety_no; //Third floor food variety number
    int dish_no; //Food dish number
    int fd_price=200; //Food dish price
    int variety1_no; //Fourth floor game variety number
    int no_of_players; // Number of players who want to play the game
    int g_price=300; //Game price

    printf("1. First floor\n2. Second floor\n3. Third floor\n4. Fourth floor\n5. Exit\n");
    printf("Enter floor number: ");
    scanf("%d", &floor);

    switch (floor)
    {
        case 1: 
          printf("First floor\n"); 
          printf("1. Zudio\n2. Max\n3. Trends\n4. H & M\n");
          printf("Enter store number from 1 to 4\n");     
          scanf("%d", &store_num);
          switch (store_num)
          {
            case 1:
              printf("Zudio\n");                         
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 2: 
              printf("Max\n");                         
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 3: 
              printf("Trends\n");                           
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 4: 
              printf("H & M\n");              
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n); 
              break;
            default:
              printf("There are only 1 to 4 shops, please re-enter store number\n");
              scanf("%d", &store_num);
              break;
          }
        case 2:
          printf("Second floor\n"); 
          printf("PVR Theatre\n");
          printf("There are 4 screens,\n1. KGF1\n2. KGF2\n3. Toxic\n4. Googly\n");
          printf("Enter which screen you want from 1 to 4\n");     
          scanf("%d", &screen_no);
          switch (screen_no)
          {
            case 1:
              printf("KGF1 Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 2:
              printf("KGF2 Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 3:
              printf("Toxic Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 4:
              printf("Googly Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            default:
              printf("There are only 1 to 4 screens, please re-enter screen number\n");
              scanf("%d", &screen_no);
              break;
          }
        case 3:
          printf("Third floor\n"); 
          printf("Food Court\n");
          printf("There are 3 varieties,\n1. North\n2. South\n3. Chinese\n");
          printf("Enter which variety you want from 1 to 3\n");     
          scanf("%d", &variety_no);
          switch (variety_no)
          {
            case 1:
              printf("North type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            case 2:
              printf("South type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            case 3:
              printf("Chinese type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            default:
              printf("There are only three varieties of food\n");
          }
        case 4:
          printf("Fourth floor\n"); 
          printf("Game zone\n");
          printf("There are 3 varieties of games,\n1. Bowling\n2. Cricket\n3. Kids section\n");
          printf("Enter which variety of game you want to play from 1 to 3\n");     
          scanf("%d", &variety1_no);
          switch (variety1_no)
          {
            case 1:
              printf("Bowling\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            case 2:
              printf("Cricket\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            case 3:
              printf("Kids section\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            default:
              printf("There are only three varieties of games to play here\n");
              
          }       
    }
}*/
#include<stdio.h>
int main()
{
  int start;
  int N,day;
  printf("enter the N and start:");
  scanf("%d %d",&start,&N);
  if((start<8 && N<366)&&(start<0 && N<0))
  {

 day = ((start+N-1) % 7);
  
  switch(day)
  
  {
  case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednsday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
    break;
    case 0:
    printf("satrday");
    break;

  }

}


printf("enter the number in range ");
}

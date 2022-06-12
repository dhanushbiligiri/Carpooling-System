#include<stdio.h>
#include<conio.h>
char persona[40];
char personb[40];
char aphno[20];
char bphno[20];
int ch= 0, pass1= 0, pass2= 0, car1= 0, car2= 0, dest1= 0, dest2= 0, i=0;
int main()
{
	start:
	clrscr();
	printf("\n\t\t\t\t\tCAR POOLING");
	printf("\n\n\t\tEnter \n\t\t\t1.For Booking \n\t\t\t2.For Exit \n\t\tEnter Option: ");
	scanf("%d", &ch);
	switch(ch)
	{
	       case 1:
		{
                             for(i=1; i<=2; i++)
			{
			       if(i==1)
				{
					printf("\n\t\tEnter Name: ");
					scanf("%s", persona);
					printf("\n\t\tEnter Phone no: ");
					scanf("%s", aphno);
					printf("\n\t\tEnter number of passengers: ");
					scanf("%d", &pass1);
					carr1:
					printf("\n\t\t\t\t\tSelect Car \n\t\tEnter \n\t\t\t1.Dzire \n\t\t\t2.Etios \n\t\t\t3.Ritz \n\t\t\t4.Ertiga \n\t\t\t5.Benz \n\t\t\t6.BMW \n\t\t\t7.Audi \n\t\t\t8.Accord \n\t\tEnter option: ");
					scanf("%d", &car1);
					switch(car1)
					     {
						case 1: printf("\n\t\tDzire is the chosen car");
							break;
						case 2: printf("\n\t\tEtios is the chosen car");
                                                                                   break;
						case 3: printf("\n\t\tRitz is the chosen car");
                                                                                   break;
					           case 4: printf("\n\t\tErtiga is the chosen car");
                                                                                  break;
						case 5: printf("\n\t\tBenz is the chosen car");
                                                                                   break;
					           case 6: printf("\n\t\tBMW is the chosen car");
                                                                                   break;
					          case 7: printf("\n\t\tAudi is the chosen car");
                                                                                break;
					       case 8: printf("\n\t\tAccord is the chosen car");
                                                                               break;
					      default : printf("\n\t\tInvalid option");
						        goto carr1;
				                }
					destt1:
					printf("\n\t\t\t\t\tSelect Destination \n\t\tEnter \n\t\t\t1.Mysore \n\t\t\t2.Chennai \n\t\t\t3.Mumabi \n\t\t\t4.Hydrabad \n\t\t\t5.Kochi \n\t\t\tEnter option: ");
        					scanf("%d", &dest1);
        			switch(dest1)
        			{
               	              case 1: if(car1<=4)
                                      printf("\n\t\tMysore is the chosen destination. Price is ₹ 2338");
                                      else
                                      printf("\n\t\tMysore is the chosen destination. Price is ₹ 6462");
                                      break;
			 case 2: if(car1<=4)
                                     printf("\n\t\tChennai is the chosen destination. Price is ₹ 6643");
                                     else
                                     printf("\n\t\tChennai is the chosen destination. Price is ₹ 11310");
                                     break;
			 case 3: if(car1<=4)
                                     printf("\n\t\tMumbai is the chosen destination. Price is ₹ 10771");
                                     else
                                     printf("\n\t\tMumbai is the chosen destination. Price is ₹ 16101");
                                     break;
			 case 4: if(car1<=4)
                                     printf("\n\t\tHydrabad is the chosen destination. Price is ₹ 4969");
                                     else
                                    printf("\n\t\tHydrabad is the chosen destination. Price is ₹ 9778");
                                    break;
			case 5: if(car1<=4)
                                    printf("\n\t\tKochi is the chosen destination. Price is ₹ 5289");
                                    else
                                    printf("\n\t\tKochi is the chosen destination. Price is ₹ 11286");
                                    break;
                                    default :
		            printf("\n\t\tInvalid option");
                        					goto destt1;
						}
					}
					if(i==2)
                			{
                        			printf("\n\t\tEnter Name: ");
                        			scanf("%s", personb);
                        			printf("\n\t\tEnter Phone no: ");
                        			scanf("%s", bphno);
                        			printf("\n\t\tEnter number of passengers: ");
                        			scanf("%d", &pass2);
                        			carr2:
						 printf("\n\t\t\t\t\tSelect Car \n\t\tEnter \n\t\t\t1.Dzire \n\t\t\t2.Etios \n\t\t\t3.Ritz \n\t\t\t4.Ertiga \n\t\t\t5.Benz \n\t\t\t6.BMW \n\t\t\t7.Audi \n\t\t\t8.Accord \n\t\tEnter option: ");
                                                scanf("%d", &car2);
                                                switch(car2)
                                                {
                                                        case 1: printf("\n\t\tDzire is the chosen car");
                                                                break;
                                                        case 2: printf("\n\t\tEtios is the chosen car");
                                                                break;
                                                        case 3: printf("\n\t\tRitz is the chosen car");
                                                                break;
                                                        case 4: printf("\n\t\tErtiga is the chosen car");
                                                                break;
                                                        case 5: printf("\n\t\tBenz is the chosen car");
                                                                break;
                                                        case 6: printf("\n\t\tBMW is the chosen car");
                                                                break;
                                                        case 7: printf("\n\t\tAudi is the chosen car");
                                                                break;
                                                        case 8: printf("\n\t\tAccord is the chosen car");
                                                                break;
                                                        default : printf("\n\t\tInvalid option");
                                                                goto carr2;
                                                }
                                                destt2:
                                                printf("\n\t\t\t\t\tSelect Destination \n\t\tEnter \n\t\t\t1.Mysore \n\t\t\t2.Chennai \n\t\t\t3.Mumabi \n\t\t\t4.Hydrabad \n\t\t\t5.Kochi \n\t\t\tEnter option: ");
                                                scanf("%d", &dest2);
                                                switch(dest2)
                                                {
                                                        case 1:
                                                        if(car2<=4)
                                                                printf("\n\t\tMysore is the chosen destination. Price is ₹ 2338\n");
                                                        else
                                                                printf("\n\t\tMysore is the chosen destination. Price is ₹ 6462\n");
                                                                break;
                                                        case 2:
                                                        if(car2<=4)
                                                                printf("\n\t\tChennai is the chosen destination. Price is ₹ 6643\n");
                                                        else
                                                                printf("\n\t\tChennai is the chosen destination. Price is ₹ 11310\n");
                                                                break;
                                                        case 3:
                                                        if(car2<=4)
                                                                printf("\n\t\tMumbai is the chosen destination. Price is ₹ 10771\n");
                                                        else
                                                                printf("\n\t\tMumbai is the chosen destination. Price is ₹ 16101\n");
                                                                break;
                                                        case 4:
                                                        if(car2<=4)
                                                                printf("\n\t\tHydrabad is the chosen destination. Price is ₹ 4969\n");
                                                        else
                                                                printf("\n\t\tHydrabad is the chosen destination. Price is ₹ 9778\n");
                                                                break;
                                                        case 5:
                                                        if(car2<=4)
                                                                printf("\n\t\tKochi is the chosen destination. Price is ₹ 5289\n");
                                                        else
                                                                printf("\n\t\tKochi is the chosen destination. Price is ₹ 11286\n");
                                                                break;
                                                        default :
                                                                printf("\n\t\tInvalid option");
                                                                goto destt2;
                        			}
                			}
				}
				if (car1 == car2 && dest1 == dest2)
				{
					if(pass1 <=2 && pass2 <=2)
					{
						printf("\n\t\t Pool car %s and %s are going together\n\n", persona, personb);
					}
				}
				else
				{
					printf("\n\t\t %s has booked car %d to %d", persona, car1, dest1);
					printf("\n\t\t %s has booked car %d to %d\n", personb, car2, dest2);
				}
			}
		case 2:
			return 0;
		default:
			printf("\n\t\tInvalid option\n");
			goto start;
	}
	return 0;
}

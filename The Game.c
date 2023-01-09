#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void print(int box[12][12])
{
	char table[12][12];
	short int i , j;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			table[i][j]=box[i][j] + '0';
		}
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(box[i][j]==0)
			table[i][j]=box[i][j] + ' ';
			else if(box[i][j]==999)
			table[i][j]='*';
			else if(box[i][j]==1)
			table[i][j]='A';
			else if(box[i][j]==150)
			table[i][j]='o';
		}
	}			
	fprintf(stderr , "\n\t 1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10\t 11\t 12\n\n") ;
	fprintf(stderr ,"      ");
	for(j=0 ; j<12 ; j++)
	{
		for(i=0 ; i<95;i++)
		fprintf(stderr ,"-");
		fprintf(stderr ,"\n    ");
		for(i=0;i<90;i++)
		{
			fprintf(stderr ," ");
			if(i%7==0)
			fprintf(stderr ,"|");
		}
		if(j>8)
		fprintf(stderr ,"\n");
		else
		fprintf(stderr ,"\n ");
		fprintf(stderr ,"%d   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |   %c   |\n",j+1,table[j][0],table[j][1],table[j][2],table[j][3],table[j][4],table[j][5],table[j][6],table[j][7],table[j][8],table[j][9],table[j][10],table[j][11]);
		fprintf(stderr ,"    ");
		for(i=0;i<90;i++)
		{
			fprintf(stderr ," ");
			if(i%7==0)
			fprintf(stderr ,"|");
		}
		fprintf(stderr ,"\n      ");
	}
	for(i=0 ; i<95;i++)
	fprintf(stderr ,"-");
	fprintf(stderr ,"\n\n");
	return;
}
void start(int box[12][12])
{
	int k;
	srand(time(0));
	k = rand()%4;
	if(k==0)
	box[5][5]=999;
	else if(k==1)
	box[5][6]=999;
	else if(k==2)
	box[6][5]=999;
	else if(k==3)
	box[6][6]=999;
}
void A(int box[12][12] , int Probability)
{
	int l;
	srand(time(0));
	l = rand()%10000;
	if(l%Probability==0)
	{
		if(l%2==0 && box[0][0]==0)
		box[0][0]=1;
		else if(l%3==0 && box[0][1]==0)
		box[0][1]=1;
		else if(l%5==0 && box[0][2]==0)
		box[0][2]=1;
		else if(l%7==0 && box[0][3]==0)
		box[0][3]=1;
		else if(l%11==0 && box[0][4]==0)
		box[0][4]=1;
		else if(box[0][5]==0)
		box[0][5]=1;
	}
	else if(l%Probability==1)
	{
		if(l%2==0 && box[0][11]==0)
		box[0][11]=1;
		else if(l%3==0 && box[0][10]==0)
		box[0][10]=1;
		else if(l%5==0 && box[0][9]==0)
		box[0][9]=1;
		else if(l%7==0 && box[0][8]==0)
		box[0][8]=1;
		else if(l%11==0 && box[0][7]==0)
		box[0][7]=1;
		else if (box[0][6]==0)
		box[0][6]=1;
	}
	else if(l%Probability==2)
	{
		if(l%2==0 && box[11][11]==0)
		box[11][11]=1;
		else if(l%3==0 && box[11][10]==0)
		box[11][10]=1;
		else if(l%5==0 && box[11][9]==0)
		box[11][9]=1;
		else if(l%7==0 && box[11][8]==0)
		box[11][8]=1;
		else if(l%11==0 && box[11][7]==0)
		box[11][7]=1;
		else if(box[11][6]==0)
		box[11][6]=1;
	}
	else if(l%Probability==3)
	{
		if(l%2==0 && box[11][0]==0)
		box[11][0]=1;
		else if(l%3==0 && box[11][1]==0)
		box[11][1]=1;
		else if(l%5==0 && box[11][2]==0)
		box[11][2]=1;
		else if(l%7==0 && box[11][3]==0)
		box[11][3]=1;
		else if(l%11==0 && box[11][4]==0)
		box[11][4]=1;
		else if (box[11][5]==0)
		box[11][5]=1;
	}
	else if(l%Probability==4)
	{
		if(l%2==0 && box[0][0]==0)
		box[0][0]=1;
		else if(l%3==0 && box[1][0]==0)
		box[1][0]=1;
		else if(l%5==0 && box[2][0]==0)
		box[2][0]=1;
		else if(l%7==0 && box[3][0]==0)
		box[3][0]=1;
		else if(l%11==0 && box[4][0]==0)
		box[4][0]=1;
		else if(box[5][0]==0)
		box[5][0]=1;
	}
	else if(l%Probability==5)
	{
		if(l%2==0 && box[0][11]==0)
		box[0][11]=1;
		else if(l%3==0 && box[1][11]==0)
		box[1][11]=1;
		else if(l%5==0 && box[2][11]==0)
		box[2][11]=1;
		else if(l%7==0 && box[3][11]==0)
		box[3][11]=1;
		else if(l%11==0 && box[3][11]==0)
		box[4][11]=1;
		else if (box[5][11]==0)
		box[5][11]=1;
	}
	else if(l%Probability==6)
	{
		if(l%2==0 && box[11][11]==0)
		box[11][11]=1;
		else if(l%3==0 && box[10][11]==0)
		box[10][11]=1;
		else if(l%5==0 && box[9][11]==0)
		box[9][11]=1;
		else if(l%7==0 && box[8][11]==0)
		box[8][11]=1;
		else if(l%11==0 && box[7][11]==0)
		box[7][11]=1;
		else if(box[6][11]==0)
		box[6][11]=1;
	}
	else if(l%Probability==7)
	{
		if(l%2==0 && box[11][0]==0)
		box[11][0]=1;
		else if(l%3==0 && box[10][0]==0)
		box[10][0]=1;
		else if(l%5==0 && box[9][0]==0)
		box[9][0]=1;
		else if(l%7==0 && box[8][0]==0)
		box[8][0]=1;
		else if(l%11==0 && box[7][0]==0)
		box[7][0]=1;
		else if(box[6][0]==0)
		box[6][0]=1;
	}
}	
void moveA(int box[12][12] , int rowofstar , int colofstar , int rowofA[144] , int colofA[144])
{
	int i ;
	for(i=0 ; i<144 ; i++)
	{

		if(rowofA[i]==0 && rowofA[i+1]==0 && colofA[i]==0 && colofA[i+1]==0 && i>=1)
		break;
		srand(time(0));
		int k = rand()%4;
		if(rowofstar>=rowofA[i] && colofstar>=colofA[i] && rowofA[i]!=0 && colofA[i]!=11)
		{
			if((k==0 || k==1) && (box[rowofA[i]+1][colofA[i]+1]==0))
			{
				box[rowofA[i]+1][colofA[i]+1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
				
			}
			else if(k==2 && (box[rowofA[i]][colofA[i]+1]==0))
			{
				box[rowofA[i]][colofA[i]+1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==3 && (box[rowofA[i]+1][colofA[i]]==0))
			{
				box[rowofA[i]+1][colofA[i]]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
		}
		else if(rowofstar<=rowofA[i] && colofstar<=colofA[i] && rowofA[i]!=0 && colofA[i]!=0)
		{
			if((k==0 || k==1) && (box[rowofA[i]-1][colofA[i]-1]==0))
			{
				box[rowofA[i]-1][colofA[i]-1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==2 && (box[rowofA[i]][colofA[i]-1]==0))
			{
				box[rowofA[i]][colofA[i]-1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==3 && (box[rowofA[i]-1][colofA[i]]==0))
			{
				box[rowofA[i]-1][colofA[i]]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
		}
		else if(rowofstar<=rowofA[i] && colofstar>=colofA[i] && rowofA[i]!=0 && colofA[i]!=11)
		{
			if((k==0 || k==1) && (box[rowofA[i]-1][colofA[i]+1]==0))
			{
				box[rowofA[i]-1][colofA[i]+1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;

			}
			else if(k==2 && (box[rowofA[i]][colofA[i]+1]==0))
			{
				box[rowofA[i]][colofA[i]+1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==3 && (box[rowofA[i]-1][colofA[i]]==0))
			{
				box[rowofA[i]-1][colofA[i]]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
		}
		else if(rowofstar>=rowofA[i] && colofstar<=colofA[i] && rowofA[i]!=11 && colofA[i]!=0)
		{
			if((k==0 || k==1) && (box[rowofA[i]+1][colofA[i]-1]==0))
			{
				box[rowofA[i]+1][colofA[i]-1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==2 && (box[rowofA[i]][colofA[i]-1]==0))
			{
				box[rowofA[i]][colofA[i]-1]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
			else if(k==3 && (box[rowofA[i]+1][colofA[i]]==0))
			{
				box[rowofA[i]+1][colofA[i]]=box[rowofA[i]][colofA[i]];
				box[rowofA[i]][colofA[i]]=0;
			}
		}
	}
}

int main()
{
	int box[12][12]={} , health=100 , cash=10 , fuel=50 , rowofstar , colofstar , rowofA[144]={} , colofA[144]={} , i , j , k=0 , t;
	int prompt , revolvershovels=3 , revolverbullets=6 , singlekillcheckerbyrevolve ;
	start(box);
	A(box , 8);
	k=0;
	for(i=0 ; i<12 ; i++){
	for(j=0;j<12;j++){
	if(box[i][j]==1){
	rowofA[k]=i;
	colofA[k]=j;
	k++;}
	if(box[i][j]==999){
	rowofstar=i;
	colofstar=j;
	}	}	}
	goto FirstRound;	
	
	NextRound:
	system("cls");
	k=0;
	for(i=0 ; i<12 ; i++){
	for(j=0;j<12;j++){
	if(box[i][j]==1){
	rowofA[k]=i;
	colofA[k]=j;
	k++;}
	if(box[i][j]==999){
	rowofstar=i;
	colofstar=j;
	}	}	}
	moveA(box , rowofstar , colofstar , rowofA , colofA);
	A(box , 12);
	
	FirstRound:
	for(i=rowofstar-1 ; i<=rowofstar+1 ; i++)
	{
		for(j=colofstar-1 ; j<=colofstar+1 ; j++)
		{
			if(box[i][j]==1)
			health--;
			if(health==0)
			{
				printf("Game Over!");
				return;
			}
		}
	}
	print(box);
	printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
	printf("Press 'N' for Next Round    Press 'WASD' to Move    Press 'Q' for Shop    'R' : Revolver\n");
	printf("Your Order : ");
	prompt = getch();
	if(prompt==110)
	goto NextRound;
	else if(prompt==119 && fuel>0 && rowofstar>0)
	{
		if(box[rowofstar-1][colofstar]==0)
		{
			box[rowofstar-1][colofstar]=999;
			box[rowofstar][colofstar]=0;
			system("cls");
			rowofstar=rowofstar-1;
			fuel--;
			goto FirstRound;
		}
		else
		{
			printf("Invalid Movement");
			system("cls");
			goto FirstRound;
		}
		
	}
	else if(prompt==115 && fuel>0 && rowofstar<11)
	{
		if(box[rowofstar+1][colofstar]==0)
		{
			box[rowofstar+1][colofstar]=999;
			box[rowofstar][colofstar]=0;
			rowofstar=rowofstar+1;
			system("cls");
			fuel--;
			goto FirstRound;
		}
		else
		{
			printf("Invalid Movement");
			system("cls");
			goto FirstRound;
		}
	}
	else if(prompt==100 && fuel>0 && colofstar<11)
	{
		if(box[rowofstar][colofstar+1]==0)
		{
			box[rowofstar][colofstar+1]=999;
			box[rowofstar][colofstar]=0;
			colofstar=colofstar+1;
			system("cls");
			fuel--;
			goto FirstRound;
		}
		else
		{
			printf("Invalid Movement");
			system("cls");
			goto FirstRound;
		}
	}
	else if(prompt==97 && fuel>0 && colofstar>0)
	{
		if(box[rowofstar][colofstar-1]==0)
		{
			box[rowofstar][colofstar-1]=999;
			box[rowofstar][colofstar]=0;
			colofstar=colofstar-1;
			system("cls");
			fuel--;
			goto FirstRound;
		}
		else
		{
			printf("Invalid Movement");
			system("cls");
			goto FirstRound;
		}
	}
	else if(prompt==113)
	{
		shopline:
		system("cls");
		print(box);
		printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
		printf("SHOP :  1.Ammo    2.Fuel\n");
		int shop = getch();
		if(shop==49)
		{
			ammoweaponline:
			system("cls");
			print(box);
			printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
			printf("1.Revolver\n");
			int shopammo;
			shopammoweapon :
			shopammo = getch();
			if(shopammo==49)
			{
				shopammorevolverline:
				system("cls");
				print(box);
				printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
				printf("REVOLVER SHOVEL :  1. 1 [2$]     2. 3 [6$]     3. 8 [14$]<12%OFF>     4. 15 [24$]<20%OFF>     \n5. 25 [35$]<30%OFF>    6. 50 [55$]<45%OFF>       7. EXIT");
				int shopammorevolver;
				shopammorevolver = getch();
				if(shopammorevolver==49 && cash>=2)
				{
					cash=cash-2;
					revolvershovels+=1;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==50 && cash>=6)
				{
					cash=cash-6;
					revolvershovels+=3;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==51 && cash>=14)
				{
					cash=cash-14;
					revolvershovels+=8;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==52 && cash>=24)
				{
					cash=cash-24;
					revolvershovels+=15;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==53 && cash>=35)
				{
					cash=cash-35;
					revolvershovels+=25;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==54 && cash>=45)
				{
					cash=cash-60;
					revolvershovels+=50;
					system("cls");
					goto FirstRound;
				}
				else if(shopammorevolver==27)
				{
					system("cls");
					goto FirstRound;
				}
				else
				goto shopammorevolverline;
			}
			else if(shopammo==27)
			{
				system("cls");
				goto FirstRound;
			}
			else
			goto ammoweaponline;
		}
		else if(shop==50)
		{
			shopfuelline:
			system("cls");
			print(box);
			printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
			printf("FUEL :  1. 5[1$]    2. 10[2$]    3. 20[4$]    4. 50[9$]<10%OFF>    5. 100[15$]<25%OFF>    6. 250[25$]<50%OFF>");
			int shopfuel = getch();
			if(shopfuel==49 && cash>=1)
			{
				cash=cash-1;
				fuel=fuel+5;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==50 && cash>=2)
			{
				cash=cash-2;
				fuel=fuel+10;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==51 && cash>=4)
			{
				cash=cash-4;
				fuel=fuel+20;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==52 && cash>=9)
			{
				cash=cash-9;
				fuel=fuel+50;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==53 && cash>=15)
			{
				cash=cash-15;
				fuel=fuel+100;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==54 && cash>=25)
			{
				cash=cash-25;
				fuel=fuel+250;
				system("cls");
				goto FirstRound;
			}
			else if(shopfuel==27)
			{
				system("cls");
				goto FirstRound;
			}
			else 
			goto shopfuelline;
		}
		else if(shop==27)
		{
			system("cls");
			goto FirstRound;
		}
		else
		goto shopline;	
		
	}
	else if(prompt==114)
	{	
		int msec=0 , trigger=200 , shotdirection;
		int rowofshot , colofshot ;
		revolvershotline:
		if(revolvershovels==0 && revolverbullets==0)
		{
			system("cls");
			printf("Revolver Ran Out of Ammo!");
			goto FirstRound;
		}
		else if(revolvershovels>0 && revolverbullets==0)
		{
			revolvershovels--;
			revolverbullets=6;
			goto revolvershotline;
		}
		else if(revolverbullets>0 && revolvershovels>=0)
		{	
			system("cls");
			revolvershot:
			print(box);
			printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
			printf("Your Current Weapon : Revolver    Shovels : %d    Bullets : %d \n" , revolvershovels , revolverbullets);
			printf("Take Your Shot : ");
			shotdirection = getch();
			if(shotdirection==50 && rowofstar!=11)
			{
				rowofshot=11;
				colofshot=colofstar;
			}
			else if(shotdirection==52 && colofstar!=0)
			{
				rowofshot=rowofstar;
				colofshot=0;
			}
			else if(shotdirection==54 && colofstar !=11)
			{
				rowofshot=rowofstar;
				colofshot=11;
			}
			else if(shotdirection==56 && rowofstar!=0)
			{
				rowofshot=0;
				colofshot=colofstar;
			}
			else if(shotdirection==49 && rowofstar!=11 && colofstar!=0)
			{
				rowofshot=rowofstar;
				colofshot=colofstar;
				while(rowofshot<11 && colofshot>0)
				{
					rowofshot++;
					colofshot--;
				}
			}
			else if(shotdirection==51 && rowofstar!=11 && colofstar!=11)
			{
				rowofshot=rowofstar;
				colofshot=colofstar;
				while(rowofshot<11 && colofshot<11)
				{
					rowofshot++;
					colofshot++;
				}
			}
			else if(shotdirection==55 && rowofstar!=0 && colofstar!=0)
			{
				rowofshot=rowofstar;
				colofshot=colofstar;
				while(rowofshot>0 && colofshot>0)
				{
					rowofshot--;
					colofshot--;
				}
			}
			else if(shotdirection==57 && rowofstar!=0 && colofstar!=11)
			{
				rowofshot=rowofstar;
				colofshot=colofstar;
				while(rowofshot>0 && colofshot<11)
				{
					rowofshot--;
					colofshot++;
				}
			}
			else if(shotdirection==53 || shotdirection==101)
			{
				system("cls");
				goto FirstRound;
			}
			
			else if(shotdirection==119 && fuel>0 && rowofstar>0)
			{
				if(box[rowofstar-1][colofstar]==0)
				{
					box[rowofstar-1][colofstar]=999;
					box[rowofstar][colofstar]=0;
					system("cls");
					rowofstar=rowofstar-1;
					fuel--;
					goto revolvershotline;
				}
				else
				printf("Invalid Movement");
			}
			else if(shotdirection==115 && fuel>0 && rowofstar<11)
			{
				if(box[rowofstar+1][colofstar]==0)
				{
					box[rowofstar+1][colofstar]=999;
					box[rowofstar][colofstar]=0;
					rowofstar=rowofstar+1;
					system("cls");
					fuel--;
					for(i=rowofstar-1 ; i<=rowofstar+1 ; i++)
					{
						for(j=colofstar-1 ; j<=colofstar+1 ; j++)
						{
							if(box[i][j]==1)
							health--;
							if(health==0)
							{
								printf("Game Over!");
								return;
							}
						}
					}
					goto revolvershotline;
				}
				else
				{
					printf("Invalid Movement");
					system("cls");
					goto revolvershot;
				}
			}
			else if(shotdirection==100 && fuel>0 && colofstar<11)
			{
				if(box[rowofstar][colofstar+1]==0)
				{
					box[rowofstar][colofstar+1]=999;
					box[rowofstar][colofstar]=0;
					colofstar=colofstar+1;
					system("cls");
					fuel--;
					for(i=rowofstar-1 ; i<=rowofstar+1 ; i++)
					{
						for(j=colofstar-1 ; j<=colofstar+1 ; j++)
						{
							if(box[i][j]==1)
							health--;
							if(health==0)
							{
								printf("Game Over!");
								return;
							}
						}
					}
					goto revolvershotline;
				}
				else
				{
					printf("Invalid Movement");
					system("cls");
					goto revolvershot;
				}
			}
			else if(shotdirection==97 && fuel>0 && colofstar>0)
			{
				if(box[rowofstar][colofstar-1]==0)
				{
					box[rowofstar][colofstar-1]=999;
					box[rowofstar][colofstar]=0;
					colofstar=colofstar-1;
					system("cls");
					fuel--;
					for(i=rowofstar-1 ; i<=rowofstar+1 ; i++)
					{
						for(j=colofstar-1 ; j<=colofstar+1 ; j++)
						{
							if(box[i][j]==1)
							health--;
							if(health==0)
							{
								printf("Game Over!");
								return;
							}
						}
					}
					goto revolvershotline;
				}
				else
				{
					printf("Invalid Movement");
					system("cls");
					goto revolvershot;
				}
			}
			else if((shotdirection==97||shotdirection==100||shotdirection==115||shotdirection==119) && fuel==0)
			{
				system("cls");
				printf("You Don't Have Enough Fuel!");
				goto revolvershot;
			}
			else if((shotdirection==55||shotdirection==56||shotdirection==57)&&rowofstar==0)
			{
				system("cls");
				goto revolvershotline;
			}
			else if((shotdirection==49||shotdirection==50||shotdirection==51)&&rowofstar==11)
			{
				system("cls");
				goto revolvershotline;
			}
			else if((shotdirection==49||shotdirection==52||shotdirection==55)&&colofstar==0)
			{
				system("cls");
				goto revolvershotline;
			}
			else if((shotdirection==51||shotdirection==54||shotdirection==57)&&rowofstar==11)
			{
				system("cls");
				goto revolvershotline;
			}
			else if(shotdirection==110)
			{
				system("cls");
				k=0;
				for(i=0 ; i<12 ; i++){
				for(j=0;j<12;j++){
				if(box[i][j]==1){
				rowofA[k]=i;
				colofA[k]=j;
				k++;}
				if(box[i][j]==999){
				rowofstar=i;
				colofstar=j;
				}	}	}
				moveA(box , rowofstar , colofstar , rowofA , colofA);
				A(box , 12);
				for(i=rowofstar-1 ; i<=rowofstar+1 ; i++)
				{
					for(j=colofstar-1 ; j<=colofstar+1 ; j++)
					{
						if(box[i][j]==1)
						health--;
						if(health==0)
						{
							printf("Game Over!");
							return;
						}
					}
				}
				goto revolvershot;
			}
			else
			{
				system("cls");
				printf("Try Again!");
				goto revolvershot;
			}
			
			if(rowofshot>=0 && rowofshot<=11 && colofshot>=0 && colofshot<=11)
			{
				if(rowofshot==rowofstar)
				{
					if(colofshot>colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=colofstar+1 ; i<=colofshot ; i++)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[rowofshot][i-1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[rowofshot][i]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[rowofshot][i-1]!=999)
							box[rowofshot][i-1]=0;
							box[rowofshot][i]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
					else if(colofshot<colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=colofstar-1 ; i>=colofshot ; i--)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[rowofshot][i+1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[rowofshot][i]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[rowofshot][i+1]!=999)
							box[rowofshot][i+1]=0;
							box[rowofshot][i]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
				}
				else if(colofshot==colofstar)
				{
					if(rowofshot>rowofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar+1 ; i<=rowofshot ; i++)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i-1][colofshot]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][colofshot]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i-1][colofshot]!=999)
							box[i-1][colofshot]=0;
							box[i][colofshot]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
					else if(rowofshot<rowofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar-1 ; i>=rowofshot ; i--)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i+1][colofshot]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][colofshot]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i+1][colofshot]!=999)
							box[i+1][colofshot]=0;
							box[i][colofshot]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
				}
				else if(rowofshot-rowofstar==colofshot-colofstar)
				{
					if(rowofshot<rowofstar && colofshot<colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar-1 , j=colofstar-1 ; i>=rowofshot , j>=colofshot; i-- , j--)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i+1][j+1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][j]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i+1][j+1]!=999)
							box[i+1][j+1]=0;
							box[i][j]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
						
					else if(rowofshot>rowofstar && colofshot>colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar+1 , j=colofstar+1 ; i<=rowofshot , j<=colofshot; i++ , j++)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i-1][j-1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][j]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i-1][j-1]!=999)
							box[i-1][j-1]=0;
							box[i][j]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
				}
				else if(rowofshot-rowofstar==colofstar-colofshot)
				{
					if(rowofshot<rowofstar && colofshot>colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar-1 , j=colofstar+1 ; i>=rowofshot , j<=colofshot; i-- , j++)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i+1][j-1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][j]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i+1][j-1]!=999)
							box[i+1][j-1]=0;
							box[i][j]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
						
					else if(rowofshot>rowofstar && colofshot<colofstar)
					{
						singlekillcheckerbyrevolve=0;
						for(i=rowofstar+1 , j=colofstar-1 ; i<=rowofshot , j>=colofshot; i++ , j--)
						{
							if(singlekillcheckerbyrevolve==1)
							{
								box[i-1][j+1]=0;
								goto revolvershotline;
							}
							singlekillcheckerbyrevolve=0;
							if(box[i][j]==1)
							singlekillcheckerbyrevolve=1;
							
							msec=0 ;	trigger=100;
							clock_t before = clock();
							while(msec < trigger)
		  					{
		  						clock_t difference = clock() - before;
		  						msec = difference * 1000 / CLOCKS_PER_SEC;
							} 
							if(box[i-1][j+1]!=999)
							box[i-1][j+1]=0;
							box[i][j]=150;
							system("cls");
							print(box);
							printf("Health = %d    Cash = %d$    Fuel = %d\n" , health , cash , fuel);
						}
						revolverbullets--;
						box[rowofshot][colofshot]=0;
						goto revolvershotline;
					}
				}
				else
				{
					system("cls");
					printf("Try Again!");
					goto revolvershot;
				}
			}
			else
			{
				system("cls");
				printf("Try Again!");
				goto revolvershot;
			}
		}
		else
		{
			system("cls");
			goto FirstRound;
		}
	}
	
	else
	{
		system("cls");
		goto FirstRound;
	}
}

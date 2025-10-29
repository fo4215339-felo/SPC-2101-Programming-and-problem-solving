/*
Name : Felix Omondi 
Reg No: PA106/G/28817/25
Description ; A program to determine occupacy and vacancy 
Date ;27.Oct.2025
*/

#include<stdio.h> 



int main(){
	
int occupancy[5][10];
int floor,room;
int occupied ,vacant; 


printf("Enter 1(occupied) and 0(vacant):");

for(floor=0;floor<5;floor++){
printf("floor : %d\n",floor+1);	

for (room=0;room<10;room++){
	printf("Rooms :%d\n",room+1);
	scanf("%d\n",&occupancy[floor][room]);
}
}	

printf("\nRooms Occupancy report\n");
for(floor=0;floor<5;floor++){
	occupied=0;
	vacant=0;
	for(room=0;room<10;room++){
		if(occupancy[floor][room]==1)
			occupied++;
			
	else
	   vacant++;		

	}
	printf("Floor %d-occupied: %d vacant:%d\n",floor+1,occupied,vacant);	
   }	
	
	return 0;
}
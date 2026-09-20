#include<stdio.h>
int main() {
	int choice,quantity;
	float total=0;
	printf("===RESTAURANT BILLING SYSTEM===\n");
	
	for(;;) {
	
	printf("\n===MENU===\n\n");
	printf("1. Burger   -Rs:500\n");
	printf("2. Pizza   -Rs:800\n");
	printf("3. Mayo Garlic Fries   -Rs:400\n");
	printf("4. Honey Chicken   -Rs:1500\n");
	printf("5. Finish  \n\n");
	
	printf("Enter Your Choice=  "); 
	scanf("%d",&choice);
	if (choice==5) {
		break;
	}
	
	
	printf("Enter quantity=  ");
	scanf("%d",&quantity);
	 
	switch(choice) {  
	  
	  case 1:
	  	total=total+(500*quantity);
	  	  printf("Burger Added! \n");
	  	   break;
	  	   
	  	    case 2:
	  	total=total+(800*quantity);
	  	  printf("Pizza Added! \n");
	  	   break;
	
	 case 3:
	  	total=total+(400*quantity);
	  	  printf("Mayo Garlic Fries Added! \n");
	  	   break;
	
	 case 4:
	  	total=total+(1500*quantity);
	  	  printf("Honey Chicken Added! \n\n\n");
	  	   break;
	  	   
	  	   default:
	  	   	printf("INVALID CHOICE TRY AGAIN \n\n");
	  	   	
	
	} // switch curly bracket 
     }   // for curly bracket
     
     
     
     
     printf("===FINAL BILL===\n");
     printf("Total Bill: Rs: %.2f\n\n" , total);
     printf("THANKYOU FOR ORDERING");

} // main bracket 

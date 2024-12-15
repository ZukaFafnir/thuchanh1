#include<stdio.h>
int main(){
	int n;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
	printf("     1. USD to VND\n     2. EUR to VND\n     3. GBP to VND\n     4. JPY to VND\n     5. VND to USD\n     6. VND to EUR\n     7. VND to GBP\n     8. VND to JPY\n\n");
	printf("Nhap don vi tien te ban muon doi(1-8) ? ");
    scanf("%d",&n);
    switch(n){
    	case 1:  case 5:
    		printf("1USD = 23,500VND");
    		break;
    	case 2:  case 6:
    		printf("1EUR = 25000VND");
    		break;
    	case 3:  case 7:
		    printf("1GBP = 28000VND");
			break; 
    	case 4:  case 8: 
    	    printf("1JPY = 180VND");
    	    break;
    	default:
    		printf("Invalid data");	
	}
	return 0;
}

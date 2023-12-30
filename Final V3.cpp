#include <stdio.h>

int inputdataA( int A[] );
int inputdataB( int B[] );
void showdataA( int A[] );
void showdataB( int B[] );
void showAnswer(int Answer[],char numop);
void inputop(char*holdopnum ,char numop );
void showop(char numop);
int processAnswer( int Answer[] , int A[] , int B[] ,char numop );
void showAnswer(int Answer[],char numop);

int main(){
	
	int A[6];
	int B[6];
	int Answer[7];
	char numop;
	
	
	printf( " Enter Number A :  " );  // Input Data A from user
	inputdataA(A);
	
	printf( " Enter Number B :  " ); // Input Data B from user
	inputdataB(B); 
	
	inputop(&numop,numop);			// Input numop from user
	
	

	showdataA(A);					// show data A
	showop(numop);					//show numop
	showdataB(B);					//show data B
	
	processAnswer(Answer,A,B,numop);  // processs data a and b 
	showAnswer (Answer,numop); 			// show data after process
	
	
}




int inputdataA( int A[] )   {  
	
	int i = 0;
	printf("\n");
	
	do{  // input data in array A
		
		printf( " A[%d] : " , i);
		scanf( "%d" ,&A[i]);
		i++;
		
	}while(i < 6); //end do
	
	
}

int inputdataB( int B[] ) {  
	
	int i = 0;
	printf("\n");
	
	do{  // input data in array A
		
		printf( " B[%d] : " , i );
		scanf( "%d" , &B[i] );
		i++;
		
	}while(i < 6); //end do
	
	
}

void showdataA( int A[] ) {
	printf(" Index        x  0  1  2  3  4  5 \n " );
	
	printf("\n Number A : \t %d  %d  %d  %d  %d  %d  ",A[0],A[1],A[2],A[3],A[4],A[5]);
	
}
 
void showdataB( int B[] ) {

	printf(" \n Number B : \t %d  %d  %d  %d  %d  %d \n ",B[0],B[1],B[2],B[3],B[4],B[5]);
	printf("               -------------------");
	
}

void inputop(char*holdopnum ,char numop ){
	

	do{
		
		printf(" op = ");
		scanf("%s" , &numop);
		*holdopnum = numop;
	
	}while(numop != '+' && numop != '-');

}
	
void showop(char numop){
	
	printf(" \n Operator: \t \t \t  %c ",numop);
	
	
}

int processAnswer( int Answer[] , int A[] , int B[] ,char numop ) {
	
	
	int i = 5;
	int j = 4;
	int coutAns = 6 ;
	
	
	if(numop == '+'){  // if numop == + then A + B
		
	
	
		do{		// star loop A + B 
		
			Answer [ coutAns ] = A [ i ] + B [ i ] ; 
		
			if( Answer [coutAns] >= 10 ) {
			
				A [ j ] += 1 ;      // Array A next data then + 1
			
			}
		
		coutAns -- ;
		i -- ;
		j -- ;
		
		
		}while(coutAns >= 0) ;  //end loop A + B 
		
		
		
		
	}else if (numop == '-') {
		
		do {  //star loop A - B 
			
			if( A [ i ] < B [ i ] ){
				
				A[ i ] += 10 ;		// Array A  current data  then + 1
				A[ j ] -= 1 ;		 // Array A next data then + 1
				
			
				Answer [ coutAns ] = A [ i ] - B [ i ] ; 
				
				
			} else {
				
				Answer [ coutAns ] = A [ i ] - B [ i ] ; 
				
			} 
			
			
				
		coutAns -- ;
		i -- ;
		j -- ;
			
			

		}while(coutAns >= 0); // end loop A - B ;
		
	
		
	} // end if
	
	
} // end function

void showAnswer(int Answer[],char numop){
	
	int i = 6 ;
	

	
	if( numop == '+') {
		do{
		
			if( Answer[ i ] >= 10 ) {
			
				Answer[ i ] = Answer[ i ] % 10;  
			
			
			}
		
			i -- ;
		
		}while(i >= 0);
		
	
		
	}
	
	
	
		printf(" \n Answer :     %d  %d  %d  %d  %d  %d  %d \n ",Answer[0],Answer[1],Answer[2],Answer[3],Answer[4],Answer[5],Answer[6]);
		printf("               ===================");
		
}


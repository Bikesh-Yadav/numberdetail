//*** PROGRAM  FOR ANY POSITIVE   NUMBER  DETAIL***//////// 
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

double factorial (long int);
double armstrong(long int);
double pallindrome(long int);
double factor (long int);
int main()   //************************   MAIN   FUNCTION  DECLARATION  ******************************************////////////
{ 
	long int z,N; 
	double fact,arm,pall;   
	double fa ;                                         
	printf("enter the required  number to be tested \n\n");      //*****  DECLRATION OF N VALUE ****//
	scanf("%ld",&N);
	printf("THE POSITION OF NUMBER %ld IS LIKE THAT....\n\n",N);

if(N>0){                                                    //***** positive no.declaration ***////
printf("This is positive integer \n\n");}                  
else{
printf("This is negative integer \n\n");}
if(N%2==0)  {                                              //****  ODD OR EVEN NUMBER DECLARATIOM  *****//
printf("This is EVEN number \n\n");}
else{
printf("This is ODD nuber \n\n");}
    
  	       //*****  printing factorial number  ***////   
 	       fact=factorial(N);
            printf("factorial of the number %ld is %.0lf\n\n",N,fact);   
	
           ////*******  printing factor  *******///
           fa=factor(N);
           printf("...is the factor of %ld \n\n",N);
//for *******  PRIME  NUMBERS  **********///
     int  i,flag=1;
         for(i=2;i<N/2;i++)
         { if(N%i==0){
            flag=0;break;}}
		if(flag==1) {
        printf("The number is prime number\n\n");} 
         else{
          printf("The number is not a prime number \n\n");}
  ///**********  end of prime number  ********////
  
 arm=armstrong(N);  /////**********  CALLING  ARMSTRONG  NUMBERS  ****////
  pall=pallindrome(N); ///*********calling  PALLINDROME NUMBERS******////
  
/////***********  SUM   AND  MULTIPLICATION  OF DIGITS OF  NUMBERS  **********///////////
long  int t;
 int add;
  t=N;
	int rem,s=0,pr=1;
	while(t>0)  
	{ 
	rem=t%10;
	s=s+rem;
	pr=pr*rem;
	t=t/10;
	}
   printf("sum of digits of %ld is %ld \n\n",N,s);
  printf("product of digits of %ld is %ld \n\n",N,pr);	
/////***************  END  OF sum   and  PPRODUCT   LOGIC  **********************////////// 

printf("press 1 to continue \n");    ////////*****************FUNCTION   LOOP*********///////////////
   scanf("%d",&z);
   if(z==1)	
   return(main());
   
   getch();
return 0;
}        //***********************************  END  OF  MAIN  FUNCTION  *******************************************************---/////	 			 

double factorial (long int N)  //****  LOGIC 4 FACTORIAL OF NUMBERS  ****//
{
	double f,i; 
	f=1;
	for(i=1;i<=N;i++)
	{f=f*i;}
	return(f);
}
double factor(long int N)     //******  LOGIC FOR FACTORS OF  THE NUMBER  ****//
{
  int i;
  double fac;
  	for(i=1;i<=N;i++){  
    fac=(N%i);
    if(fac==0)
    printf(" %d",i);}
   return(i);
} 
double armstrong (long int N)   ////*********  LOGIC FOR  ARMSTRONG NUMBERS  ******////
{
long int t; int rem,s=0;	t=N;
	while(N>0) 
	{ 
	rem=N%10;
	s=s+rem*rem*rem;
	N=N/10;	}
	if(s==t){
	printf("%ld is an ARMSTRONG NUMBER \n\n",t);}
	else{
	printf("%ld is NOT an ARMSTRONG NUMBER \n\n",t);}
	return(t);	
}
double pallindrome (long int N)   //**********LOGIC  FOR   PALLINDROMR  NUMBER***//////
{
	long int t;int rev=0,r;t=N;
	while(N>0)  
	{ 
	r=N%10;
	rev=rev*10+r;
	N=N/10;
	}
	if(t==rev){
	printf("the number is PALLINDROME NUMBER \n\n");}
	else{
	printf("the number is  Not PALLINDROME NUMBER \n\n");
	return(t);
	}
}




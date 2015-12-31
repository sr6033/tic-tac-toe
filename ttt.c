#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
	int k,d=1,i,j,c=0,p,r=0;
	int matrix[9];
	for(i=0;i<9;i++)
	 matrix[i]=0;

	for(i=0;i<=2;i++)
	{
	 for(j=0;j<=2;j++)
	 { printf("%d ",c);c++;}
	printf("\n");
	}
	
       for(;;)
       { 
	input:  		
	//Inputing position
	printf("Enter Position for cross(X)\n");
	scanf("%d",&p);	
	
	if(matrix[p]!=100 && matrix[p]!=99)
	 matrix[p]=100;
	else
	 {
	  printf("Enter valid position\n");
	  goto input;
	 }
	
	random:
	//case 00
	if(p==0)
	{	
	 if((matrix[1]!=0 || matrix[2]!=0) && (matrix[1]!=0 && matrix[2]!=0))
	  {
		if(matrix[1]==0)
		 r=1;
		else
		 r=2;
	  }
	 else
	 if((matrix[3]!=0 || matrix[6]!=0) && (matrix[3]!=0 && matrix[6]!=0))
	  {
		if(matrix[3]==0)
		 r=3;
		else
		 r=6;
	  }
	 else
	  if((matrix[4]!=0 || matrix[8]!=0) && (matrix[4]!=0 && matrix[8]!=0))
	   {
		if(matrix[4]==0)
		 r=4;
		else
		 r=8;
	   }
	 else
	 {
	  for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==1 || r==3 || r==4)
                 break;
          }
        
	}
 	}
	//case 01
	if(p==1)
	{
         if((matrix[0]!=0 || matrix[2]!=0) && (matrix[0]!=0 && matrix[2]!=0))
          {
                if(matrix[0]==0)
		 r=0;
		else
		 r=2;
          }
         else
         if((matrix[4]!=0 || matrix[7]!=0) && (matrix[4]!=0 && matrix[7]!=0))
          {
                if(matrix[4]==0)
		 r=4;
		else
		 r=7;
          }
         else
         {
	  for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==0 || r==4 || r==2)
                 break;
          }
         }
	}

	//case 02
	if(p==2)
        {
	 if((matrix[0]!=0 || matrix[1]!=0) && (matrix[0]!=0 && matrix[1]!=0))
          {
                if(matrix[0]==0)
                 r=0;
                else
                 r=1;
          }
         else
         if((matrix[5]!=0 || matrix[8]!=0) && (matrix[5]!=0 && matrix[8]!=0))
          {
                if(matrix[5]==0)
                 r=5;
                else
                 r=8;
          }
	 else
          if((matrix[4]!=0 || matrix[6]!=0) && (matrix[4]!=0 && matrix[6]!=0))
           {
                if(matrix[4]==0)
                 r=4;
                else
                 r=6;
           }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==1 || r==4 || r==5)
                 break;
          }
	 }
	}
         
	//case 10
	if(p==3)
        {
	 if((matrix[0]!=0 || matrix[6]!=0) && (matrix[0]!=0 && matrix[6]!=0))
          {
                if(matrix[0]==0)
                 r=0;
                else
                 r=6;
          }
         else
         if((matrix[4]!=0 || matrix[5]!=0) && (matrix[4]!=0 && matrix[5]!=0))
          {
                if(matrix[4]==0)
                 r=4;
                else
                 r=5;
          }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==0 || r==6 || r==4)
                 break;
          }
	 }
        }
 	
	//case 11
	if(p==4)
        {
	 if((matrix[3]!=0 || matrix[5]!=0) && (matrix[3]!=0 && matrix[5]!=0))
          {
                if(matrix[3]==0)
                 r=3;
                else
                 r=5;
          }
         else
         if((matrix[1]!=0 || matrix[7]!=0) && (matrix[1]!=0 && matrix[7]!=0))
          {
                if(matrix[1]==0)
                 r=1;
                else
                 r=7;
          }
         else
	  if((matrix[0]!=0 || matrix[8]!=0) && (matrix[0]!=0 && matrix[8]!=0))
	   {
		if(matrix[0]==0)
		 r=0;
		else
		 r=8;
	   }
	 else
	  if((matrix[2]!=0 || matrix[6]!=0) && (matrix[0]!=0 && matrix[6]!=0))
	   {
		if(matrix[2]!=0)
		 r=2;
		else
		 r=6;
	   }
	 else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r!=4)
                 break;
          }
	 }
        }

	//case 12
	if(p==5)
        {
	 if((matrix[3]!=0 || matrix[4]!=0) && (matrix[3]!=0 && matrix[4]!=0))
          {
                if(matrix[3]==0)
                 r=3;
                else
                 r=4;
          }
         else
         if((matrix[2]!=0 || matrix[8]!=0) && (matrix[2]!=0 && matrix[8]!=0))
          {
                if(matrix[2]==0)
                 r=2;
                else
                 r=8;
          }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==2 || r==8 || r==4)
                 break;
          }
	 }
        }

	//case 20
	if(p==6)
        {
	 if((matrix[0]!=0 || matrix[3]!=0) && (matrix[0]!=0 && matrix[3]!=0))
          {
                if(matrix[0]==0)
                 r=0;
                else
                 r=3;
          }
         else
         if((matrix[8]!=0 || matrix[7]!=0) && (matrix[8]!=0 && matrix[7]!=0))
          {
                if(matrix[8]==0)
                 r=8;
                else
                 r=7;
          }
	 else
          if((matrix[4]!=0 || matrix[2]!=0) && (matrix[4]!=0 && matrix[2]!=0))
           {
                if(matrix[4]==0)
                 r=4;
                else
                 r=2;
           }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==7 || r==3 || r==4)
                 break;
          }
	 }
        }

	//case 21
	if(p==7)
        {
	 if((matrix[1]!=0 || matrix[4]!=0) && (matrix[1]!=0 && matrix[4]!=0))
          {
                if(matrix[1]==0)
                 r=1;
                else
                 r=4;
          }
         else
         if((matrix[6]!=0 || matrix[8]!=0) && (matrix[6]!=0 && matrix[8]!=0))
          {
                if(matrix[6]==0)
                 r=6;
                else
                 r=8;
          }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==6 || r==8 || r==4)
                 break;
          }
	 }
        }

	//case 22
	if(p==8)
        {
	 if((matrix[5]!=0 || matrix[2]!=0) && (matrix[5]!=0 && matrix[2]!=0))
          {
                if(matrix[5]==0)
                 r=5;
                else
                 r=2;
          }
         else
         if((matrix[6]!=0 || matrix[7]!=0) && (matrix[6]!=0 && matrix[7]!=0))
          {
                if(matrix[6]==0)
                 r=6;
                else
                 r=7;
          }
	 else
          if((matrix[4]!=0 || matrix[0]!=0) && (matrix[4]!=0 && matrix[0]!=0))
           {
                if(matrix[4]==0)
                 r=4;
                else
                 r=0;
           }
         else
         {
          for(;;)
          {
                srand(time(NULL));
                r=rand()%10;
                if(r==5 || r==7 || r==4)
                 break;
          }
	 }
        }
	
	//Storing the random value
	if(matrix[r]!=99 && matrix[r]!= 100)
	 matrix[r]=99;
	else
	  goto random;
        c=0;

	//Printing the final pattern
        for(i=0;i<=2;i++)
        {
         for(j=0;j<=2;j++)
         {
                if(matrix[c]==100)
                 printf("X ");
                else
                 if(matrix[c]==99)
                  printf("O ");
                else
                 printf("_ ");
                c++;
         }
        printf("\n");
        }
	
	//Checking for winner
	k=0;
	for(i=0;i<9;i=i+3)
	 {
	  if(matrix[i]==100)
	  {
		if(matrix[i]==matrix[i+1] && matrix[i+1]==matrix[i+2])
		 {printf("You win!\n"); exit(0);}
	  }
	  
	  if(matrix[i]==99)
          {
                if(matrix[i]==matrix[i+1] && matrix[i+1]==matrix[i+2])
                 {printf("I win!\n"); exit(0);}
          }
	} 

	for(i=0;i<3;i++)
         {
          if(matrix[i]==100)
          {
                if(matrix[i]==matrix[i+3] && matrix[i+3]==matrix[i+6])
                 {printf("You win!\n"); exit(0);}
          } 

          if(matrix[i]==99)
          {
                if(matrix[i]==matrix[i+3] && matrix[i+3]==matrix[i+6])
                 {printf("I win!\n"); exit(0);}
          }
        }
	
	if(matrix[0]==100 || matrix[2]==100)
	{
	 if(matrix[0]==matrix[4] && matrix[4]==matrix[8])
	  {printf("You win!\n"); exit(0);}
	 if(matrix[2]==matrix[4] && matrix[4]==matrix[6])
	  {printf("You win!\n"); exit(0);}
	}
	
	if(matrix[0]==99 || matrix[2]==99)
        {
         if(matrix[0]==matrix[4] && matrix[4]==matrix[8])
          {printf("I win!\n"); exit(0);}
         if(matrix[2]==matrix[4] && matrix[4]==matrix[6])
          {printf("I win!\n"); exit(0);}
        }
	    
       }   
}


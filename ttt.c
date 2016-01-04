#include<stdio.h>
#include<stdlib.h>

char matrix[3][3];

char check(void);
void imatrix(void);
void pmove(void);
void cmove(void);
void disp_matrix(void);

int main(void)
{
 char done;

 done=' ';
 imatrix();
 do{
	disp_matrix();
	pmove();
	done=check();
	if(done!=' ') break;
	cmove();
	done=check();
   }while(done==' ');
 if(done=='X')
  printf("You won!\n");
 else printf("I won!\n");

 disp_matrix();

 return 0;
}

void imatrix(void)
{
 int i,j;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++) matrix[i][j]=' ';
}

void pmove(void)
{
 int x,y;
 printf("Enter X,Y coordinates for your move: ");
 scanf("%d%d",&x,&y);
 x--; y--;
 
 if(matrix[x][y]!=' '){
  printf("Invalid move, try again.\n");
  pmove();
 }
 else matrix[x][y]='X';
}

void cmove(void)
{
 int i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   if(matrix[i][j]==' ') break;
  if(matrix[i][j]==' ') break;
 }

 if(i*j==9)
 {
  printf("Draw\n");
  exit(0);
 }
 else
  matrix[i][j]='O';
}

void disp_matrix(void)
{
 int t;
 for(t=0;t<3;t++)
 {
  printf(" %c | %c | %c ",matrix[t][0],matrix[t][1],matrix[t][2]);
  if(t!=2) 
   printf("\n---|---|---\n"); //Credits : Internet(for the printing style).
 }
 printf("\n");
}

char check(void)
{
 int i;
 for(i=0;i<3;i++)
  if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
   return matrix[i][0];
 
 for(i=0;i<3;i++)
  if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
   return matrix [0][i];

 if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
  return matrix[0][0];

 if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
  return matrix[0][2];
 
 return ' ';
}
//credits:
//Myself and a book :p

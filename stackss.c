#include<stdio.h>
#include<stdlib.h>
#define Size 4

void P()
{
	int Top=-1;
	int inp_array[Size];
	int x;
	
	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top++;
		inp_array[Top]=x;
	}
}
 
void poppp()
{
	int Top=-1;
	int inp_array[Size];
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top--;
	}
}
 
void displayyyyy()
{
	int Top=-1;
	int inp_array[Size];
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);
	}
}
 
int main()
{
	int ch;
	
	while(ch!=0)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: P();
					break;
			case 2: poppp();
					break;
			case 3: displayyyyy();
					break;
			case 0: exit;
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 

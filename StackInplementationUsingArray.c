//stack implementation using array(static implementation)

#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void Push(int iValue)
{
   if(top == N-1)
   {
      printf("stack overflow");
   }
   else
   {
	   top++;
	   stack[top] = iValue;
   }
}

int Pop()
{
   int iteam = 0;
   
    if(top == -1)
	{
		printf("stack is empty");
	}
	else
	{
		iteam = stack[top];
		top--;
		return iteam;
	}
}

int Peek()
{
   int iteam = 0;
   
    if(top == -1)
	{
		printf("stack is empty");
	}
	else
	{
		iteam = stack[top];
        return iteam;
	}
}

void Display()
{
	int i = 0;
	
	for(i = top; i >= 0;i--)
	{
		printf("%d\t",stack[i]);
	}
}

int Count()
{
	int i = 0;
	int iCount = 0;
	
	for(i = top; i >= 0;i++)
	{
		iCount++;
	}
	return iCount;
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	int choice = 1;
	
	while(choice != 0)
	{
		printf("\nEnter 1 for Push \n");
		printf("Enter 2 for Pop \n");
		printf("Enter 3 for Peek \n");
		printf("Enter 4 for Display \n");
		printf("Enter 5 for Count \n");
		printf("Enter 0 for Exit \n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			       printf("Enter the element\n");
				   scanf("%d",&iNo);
				   Push(iNo);
				   break;
			case 2:
			        iRet = Pop();
					printf("poped element is: - %d",iRet);
					break;
			case 3:
			       iRet = Peek();
				   printf("Peeked element is :- %d", iRet);
				   break;
			case 4:
			       Display();
				   break;
		    case 5:
			       iRet = Count();
				   printf("No of elemets are :- %d",iRet);\
				   break;
			case 0:
			       printf("Thank you for using application\n");
				   break;
			default:
			        printf("Wrong choice");	     
		}
	}
	return 0;
}

/*

output


Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
1
Enter the element
22

Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
1
Enter the element
44

Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
4
4422
Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
5
No of elemets are :- 2147483647
Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice

3
Peeked element is :- 44
Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
2
poped element is: - 44
Enter 1 for Push
Enter 2 for Pop
Enter 3 for Peek
Enter 4 for Display
Enter 5 for Count
Enter 0 for Exit
Enter your choice
0
Thank you for using application

*/
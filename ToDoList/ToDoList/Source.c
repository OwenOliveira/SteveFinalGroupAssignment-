// Group Assignment
// To-Do List
// PROG71985 - Fall 2022
// Version 3.0
//
// Owen Oliveira, Matteo Filippone, Ryan Tu
// Nov 22, 2022
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "layoutHeader.h"
#include "menuHeader.h"

int main(void)
{
	FILE* ToDoList;
	char userInput;
	printToDoListPic;

	if ((ToDoList = fopen("ToDoList.txt", "r+")) == NULL)            
	{
		fprintf(stderr, "Could not open the file 'ToDoList'\n");	  
		exit(EXIT_FAILURE);                                        
	}
	while (1)
	{
		printMenuOptions();
		printf("Please select from the list above with the corrisponding character: "); 
		scanf("%s", &userInput);             

		switch (userInput)                   
		{
		//case ('a'):                          
		//case ('A'):							 
		//	addNewTask();              
		//	break;                           

		//case ('b'):                         
		//case ('B'):							 
		//	deleteExistingTask();
		//	break;							

		//case ('c'):                         
		//case ('C'):                         
		//	updateExistingTask();
		//	break;                          

		//case ('d'):						    
		//case ('D'):                         
		//	isplaySingleTask();
		//	break;                          

		//case ('e'):                      
		//case ('E'):                         
		//	displayRangeOfTask();
		//	break;                      

		//case ('f'):                          
		//case ('F'):                          
		//	displayAllTask();

		//case ('g'):
		//case ('G'):
		//	searchForTask();

		case ('h'):
		case ('H'):
			exitProgram();
		}
		
	}
	fclose(ToDoList);                         

	return 0;
}


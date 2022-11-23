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
#include "menuHeader.h"
#include "struct.h"


void addNewTask()				//Function for case 'a'
{
	printf("Enter the day that your task is due.\n");
	scanf("%d", newTask.day);

	printf("Enter the month that your task is due.\n");
	scanf("%d", newTask.month);

	printf("Enter the task that has to be completed.\n");
	scanf("%s", newTask.element[MAXLENGTH]);

	//task.taskId = ;

	printf("Result Saved!\n");
}

void deleteExistingTask()		//Function for case 'b"
	{
		int taskNumber;
		printf("Select the task you wish to delete: \n");
		scanf("%d", &taskNumber);

		if (taskNumber < 0 && taskNumber >= MAXLENGTH)
		{
			printf("The number you entered was invalid, try again.\n");
			return(1);
		}
		/*if (taskNumber != )		Need this if statement to check if there is a task made for the inputted number, if not then give error
		{
			printf("This task has not yet been added.\n");
			return(1);
		}*/
		newTask.month = '\0';
		newTask.day = '\0';
		newTask.element[MAXLENGTH] = '\0';
	}

//void updateExistingTask()	//Function for case 'c'
//{
//
//}
//
//void displaySingleTask()		//Function for case 'd'
//{
//
//}
//
//void displayRangeOfTask()		//Function for case 'e'
//{
//
//}
//
//void displayAllTask()			//Function for case 'f'
//{
//
//}
//
//void searchForTask()			//Function for case 'g'
//{
//
//}

void exitProgram()
{
	exit(1);
}
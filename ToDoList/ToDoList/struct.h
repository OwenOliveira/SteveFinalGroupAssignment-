#pragma once

#define MAXLENGTH	30

typedef struct task{
	int month;
	int day;
	int taskId;
	char element[MAXLENGTH];

}task;

struct task newTask;
/// preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define COURSES 5

/// function declarations
float letter_grade_value(void);
void display_grade_values();
int course_credits_value(void);
int sum_course_credits(int credits[], int value);
double compute_credits_weight(double grade_point[], int credits[], int value);
double compute_final_gpa(double weighted_credits, int sum_credits);
void display_final_gpa(double final_gpa);
void restart(void);
void run_app(void);

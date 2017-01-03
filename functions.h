#include <stdio.h>
#include <string.h>

float letter_grade_value(void);

void display_grade_values();

int course_credits_value(void);

int sum_course_credits(int credits1, int credits2, int credits3, int credits4, int credits5);

double compute_credits_weight(double grade_point1, int credits1, double grade_point2, int credits2, double grade_point3, int credits3, double grade_point4, int credits4, double grade_point5, int credits5);

double compute_final_gpa(double weighted_credits, int sum_credits);

void display_final_gpa(double final_gpa);


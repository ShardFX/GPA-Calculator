#include "functions.h"

float letter_grade_value(void)
{
	int input_number = 0;
    display_grade_values();
	printf("\nStep 1: \n Enter the number next to the letter grade earned for the course: ");
	scanf("%d", &input_number);

    switch (input_number)
	{
		case 0:
			return 4.000;
		case 1:
			return 3.667;
		case 2:
			return 3.333;
		case 3:
			return 3.000;
		case 4:
			return 2.667;
		case 5:
			return 2.333;
		case 6:
			return 2.000;
		case 7:
			return 1.667;
		case 8:
			return 1.000;
		case 9:
			return 0.000;
	}

	return -1;
}

void display_grade_values()
{
    printf("Letter Grade Value Conversion \n");
    printf("(0) A (4.000) \n");
	printf("(1) A- (3.667) \n");
    printf("(2) B+ (3.333) \n");
    printf("(3) B (3.000) \n");
    printf("(4) B- (2.667) \n");
    printf("(5) C+ (2.333) \n");
    printf("(6) C (2.000) \n");
    printf("(7) C- (1.667) \n");
    printf("(8) D (1.000) \n");
    printf("(9) F (0.000) \n");
    printf("Example input: for a received course grade of 'B+', input the number '2' \n");
    printf("Valid input for only numbers [0-9] \n");
    return;
}

int course_credits_value(void)
{
	int total_credits = 0;
	printf("\nStep 2: \Enter the total number of credits for this course: ");
	scanf("%d", &total_credits);
	return total_credits;
}

int sum_course_credits(int credits1, int credits2, int credits3, int credits4, int credits5)
{
	int sum_credits = 0;
	sum_credits = credits1 + credits2 + credits3 + credits4 + credits5;
	return sum_credits;
}

double compute_credits_weight(double grade_point1, int credits1, double grade_point2, int credits2, double grade_point3, int credits3, double grade_point4, int credits4, double grade_point5, int credits5)
{
	double weighted_result = 0.0;
	weighted_result = (grade_point1 * credits1) + (grade_point2 * credits2) + (grade_point3 * credits3) + (grade_point4 * credits4) + (grade_point5 * credits5);
	return weighted_result;
}

double compute_final_gpa(double weighted_credits, int sum_credits)
{
	double final_gpa = 0.0;
	final_gpa = weighted_credits / sum_credits;
	return final_gpa;
}

void display_final_gpa(double final_gpa)
{
	printf("\nCaclulated Final GPA: %.2lf\n", final_gpa);
}
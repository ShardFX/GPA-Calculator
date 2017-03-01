#include "functions.h"

float letter_grade_value(void) {
	int input_number = 0;
    display_grade_values();
	printf("\nStep 1: \n Enter the number next to the letter grade earned for the course: ");
	scanf("%d", &input_number);

    switch (input_number) {
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
	} // end switch

	return -1;
} // end function letter_grade_value

void display_grade_values(void) {
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
} // end function display_grade_value

int course_credits_value(void) {
	int total_credits = 0;
	printf("\nStep 2: \n Enter the total number of credits for this course: ");
	scanf("%d", &total_credits);
	return total_credits;
} // end function course_credits_value

int sum_course_credits(int credits[], int value) {
	int sum_credits = 0;
	for (register int i = 0; i < value; i++) {
		sum_credits += credits[i];
	} // end for loop
	return sum_credits;
} // end functon sum_course_credits

double compute_credits_weight(double grade_point[], int credits[], int value) {
	double weighted_result = 0.0;
	for (register int i = 0; i < value; i++) {
		weighted_result += (grade_point[i] * credits[i]);
	} // end for loop
	return weighted_result;
} // end functon compute_credits_weight

double compute_final_gpa(double weighted_credits, int sum_credits) {
	double final_gpa = 0.0;
	final_gpa = weighted_credits / sum_credits;
	return final_gpa;
} // end function compute_final_gpa

void display_final_gpa(double final_gpa) {
	printf("\nCaclulated Final GPA: %.2lf\n", final_gpa);
} // end function display_final_gpa

void display_menu(void) {
	printf("\n *** GPA Calculator for 5 Courses *** \n");
	printf("\nGPA Calculation Formula: \n");
	printf("\n\tGPA = \t\t  Sum of Weighted Grade Points \n");
	printf("\t\t\t ------------------------------ \n");
	printf("\t\t\t Total Number of Course Credits \n");
	printf("\n\nProcess and Steps of the GPA Calculator Program: ");
	printf("\n\nStep 1: Input values for the grade points earned for each course [1-5]");
	printf("\n\nStep 2: Input values for the number of credits for each course [1-5]");
	printf("\n\nStep 3: Compute the sum for the total number of course credits");
	printf("\ntotal_credits = (total sum of all course credits)");
	printf("\n\nStep4: Compute the weighted number of credits for the given courses");
	printf("\ncomputed_weight = SUM of each (course grade point earned) * (corresponding course credits)");
	printf("\n\nStep 5: Compute the final grade point average for the given courses");
	printf("\ncomputed_gpa = computed_weight / total_credits");
	printf("\n\nStep 6: Display the final computed grade point average \n\n");
} // end function display_menu

void restart(void) {
	char input = 0;
	printf("Would you like to restart? (y/n) ");
	scanf(" %c", &input);
	switch (input) {
	case 'y':
		system("cls");
		main();
	case 'n':
		system("cls");
		exit;
	default:
		system("cls");
		exit;
	}
} // end function restart

void run_app(void) {
	int course_credits[100] = { 0 }; // number of credits for each course
	int total_credits = 0; // total number of the sum of credits for all courses 
	double course_grade[100] = { 0 }; // grade point value for each course 
	double computed_weight = 0.0; // total computed weight for each course and corresponding grade point value 
	double computed_gpa = 0.0; // final computed grade point average for all computed weights for each course

	// Step 1: Get user inputs for the letter grade for each course [1-5]
	// Step 2: Get user inputs for the number of credits for each course [1-5]
	for (register int i = 0; i < COURSES; i++) {
		course_grade[i] = letter_grade_value(); // Get the user input for the letter grade
		course_credits[i] = course_credits_value(); // Get the user input for the number of credits
	} // end for loop

	// Step 3: Add the sum of the total number of course credits
	total_credits = sum_course_credits(course_credits, COURSES);

	// Step 4: Compute the sum of each weighted value
	computed_weight = compute_credits_weight(course_grade, course_credits, COURSES);

	// Step 5: Compute the final GPA 
	computed_gpa = compute_final_gpa(computed_weight, total_credits);

	// Step 6: Display the calculated GPA
	display_final_gpa(computed_gpa);

	// Step 7: Prompt restart
	restart();

} // end function run_app

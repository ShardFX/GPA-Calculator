#include "functions.h"

int main (void)
{
    int course_credits1 = 0, course_credits2 = 0, course_credits3 = 0, course_credits4 = 0, course_credits5 = 0; // number of credits for each course
    int total_credits = 0; // total number of the sum of credits for all courses 
	double course_grade1 = 0.0, course_grade2 = 0.0, course_grade3 = 0.0, course_grade4 = 0.0, course_grade5 = 0.0; // grade point value for each course 
    double computed_weight = 0.0; // total computed weight for each course and corresponding grade point value 
    double computed_gpa = 0.0; // final computed grade point average for all computed weights for each course
    
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

    // Step 1: Get user inputs for the letter grade for each course [1-5]
    // Step 2: Get user inputs for the number of credits for each course [1-5]
	course_grade1 = letter_grade_value(); // Get the user input for the letter grade of the first course
	course_credits1 = course_credits_value(); // Get the user input for the number of credits of the first course
	course_grade2 = letter_grade_value(); // Get the user input for the letter grade of the second course
	course_credits2 = course_credits_value();  // Get the user input for the number of credits of the second course
	course_grade3 = letter_grade_value(); // Get the user input for the letter grade of the third course
	course_credits3 = course_credits_value(); // Get the user input for the number of credits of the third course
    course_grade4 = letter_grade_value(); // Get the user input for the letter grade of the third course
	course_credits4 = course_credits_value(); // Get the user input for the number of credits of the third course
    course_grade5 = letter_grade_value(); // Get the user input for the letter grade of the third course
	course_credits5 = course_credits_value(); // Get the user input for the number of credits of the third course

    // Step 3: Add the sum of the total number of course credits
	total_credits = sum_course_credits(course_credits1, course_credits2, course_credits3, course_credits4, course_credits5);

    // Step 4: Compute the sum of each weighted value
	computed_weight = compute_credits_weight(course_grade1, course_credits1, course_grade2, course_credits2, course_grade3, course_credits3, course_grade4, course_credits4, course_grade5, course_credits5);
	
    // Step 5: Compute the final GPA 
    computed_gpa = compute_final_gpa(computed_weight, total_credits); 

	// Step 6: Display the calculated GPA
	display_final_gpa(computed_gpa);

	return 0;
}

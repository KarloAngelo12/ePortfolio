// -----------------------------------------------------------------------------
// File: Exercise7_2025173209.cpp
// Description: Exercise 7 - Grade Computation using void Function
// Author: Karlo Angelo L. Babaran
// Date: October 6, 2025
// -----------------------------------------------------------------------------
#include <iostream> // for input and output
#include <string> // for the 'std::string' class to handle text/character sequences
#include <iomanip> // for functions that format output 
#include <limits>   // For std::numeric_limits
#include <cctype>   // For toupper


std::string student_name;
double prelim_score = 0.0;
double midterm_score = 0.0;
double finals_score = 0.0;
double average_score = 0.0;
char final_grade = ' ';

// --- Function Prototypes ---
void student();                                             // Driver function to run the process
void student_name_input();                                  // Input student name
void score();                                               // Input and validate all scores
void validate();                                            // Determine the letter grade based on average
void output();                                              // Display all results
void average(double prelim, double midterm, double finals); // Compute the average (required signature)


double validate_score_input(const std::string& score_name) {
    double score;
    while (true) {
        std::cout << "Enter " << score_name << " [0-100]: ";
        if (!(std::cin >> score)) {
            // Handle non-numeric input
            std::cout << "Invalid score! Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (score >= 0 && score <= 100) {
            return score; // Valid score entered
        } else {
            std::cout << "Invalid " << score_name << "!\n";
            std::cout << "Score must be between 0 and 100.\n";
        }
    }
}


void student_name_input() {
    // Print header for student name input
    std::cout << "\n======================================\n";
    std::cout << "            STUDENT NAME            \n";
    std::cout << "======================================\n";

    // Clear any lingering newline characters from previous inputs (e.g., from the 'try again' prompt)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter student name: ";
    std::getline(std::cin, student_name);
}


void score() {
    // Print header for score input
    std::cout << "\n======================================\n";
    std::cout << "             GRADE SCORES             \n";
    std::cout << "======================================\n";

    // Input and validate all three scores using the helper function
    prelim_score = validate_score_input("prelim score");
    
    // Add extra line break for midterm score input
    std::cout << "\n";
    midterm_score = validate_score_input("midterm score");
    
    // Add extra line break for finals score input
    std::cout << "\n";
    finals_score = validate_score_input("finals score");
}


void average(double prelim, double midterm, double finals) {
    average_score = (prelim + midterm + finals) / 3.0;
}


void validate() {
    if (average_score >= 98.0) {
        final_grade = 'A';
    } else if (average_score >= 89.0) {
        final_grade = 'B';
    } else if (average_score >= 81.0) {
        final_grade = 'C';
    } else if (average_score >= 75.0) {
        final_grade = 'D';
    } else {
        final_grade = 'F';
    }
}


void output() {
    // Print header for student average output
    std::cout << "\n======================================\n";
    std::cout << "          STUDENT AVERAGE           \n";
    std::cout << "======================================\n";

    // Set precision for output. Prelim/Midterm/Finals are shown with 0 decimals.
    std::cout << std::fixed;

    std::cout << "Student Name: " << student_name << "\n";
    std::cout << "Prelim: " << std::setprecision(0) << prelim_score << "\n";
    std::cout << "Midterm: " << midterm_score << "\n";
    std::cout << "Finals: " << finals_score << "\n\n"; // Added extra newline for spacing

    // Display average with 4 decimal places
    std::cout << "Average: " << std::setprecision(4) << average_score << "\n";
    std::cout << "Grade: " << final_grade << "\n";
}


void student() {
    // 1. Input Student Name
    student_name_input() 

    // 2. Input and Validate Scores
    score();

    // 3. Compute Average (passing scores as arguments as required by the prototype)
    average(prelim_score, midterm_score, finals_score);

    // 4. Validate Average and Determine Grade
    validate();

    // 5. Display Output
    output();
}


int main() {
    // Set up standard output stream for better handling of mixed input/output
    std::cout << std::unitbuf; 

    char try_again = 'Y';

    while (toupper(try_again) == 'Y') {
        // Run the entire grading process for one student
        student();

        // Prompt user to try again, only accepting 'Y' or 'N' (case-insensitive)
        while (true) {
            std::cout << "\nDo you want to try again [Y/N]? ";
            if (!(std::cin >> try_again)) {
                // Clear and ignore bad non-char input
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            try_again = toupper(try_again);

            if (try_again == 'Y' || try_again == 'N') {
                break; // Exit the inner loop
            } else {
                std::cout << "Invalid answer. Please enter Y or N.\n";
                // Clear any potential hanging input
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    std::cout << "\nProgram terminated. Goodbye!\n";
    return 0;
}


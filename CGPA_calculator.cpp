// CGPA_calculator (v1.0)
// por yuuuchua

#include <iostream>
#include <cmath>

// functions prototype
double gpa_calculator(double, double, double, double);
double get_grade(const std::string& course);

int main() {

    std:: cout << "CGPA Calculator" << '\n' << "Please, enter your grades in each course" << "\n\n";
    
    double calculus_grade = get_grade("Calculus");
    double physics_grade = get_grade("Physics");
    double programming_grade = get_grade("Programming");
    double chemistry_grade = get_grade("Chemistry");
    
    double gpa = gpa_calculator(calculus_grade, physics_grade, programming_grade, chemistry_grade);

    std:: cout << "Your GPA is: " << gpa;
}

double gpa_calculator(double cal, double phy, double prog, double che) {
    return (cal + phy + prog + che)/4;
}

double get_grade(const std::string& course) {
    double grade;
    std:: cout << course << ": ";
    std:: cin >> grade;
    return grade;
}
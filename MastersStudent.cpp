#include "MastersStudent.h"

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
    float GPA = 0;
    int subjectnum = _ms_grades. size();
    for (int i=0; i<subjectnum; i++) {
        GPA = GPA + _ms_grades[i];
    }
    float average = GPA / subjectnum;
    return average;
}

void MastersStudent::addMsGrade(float grade) {
     _ms_grades.push_back(grade);
  // TODO Implement this 
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  // TODO Print additional MastersStudent fields
    printf("MS %s %d\n", majorString(_major).c_str(), _ms_grad_year);
    printf("MS GPA: %.2f\n", getMsGpa());
}

#include <stdio.h> 
#include <string.h> 


 

struct Student { 

    int admNo; 

    char name[50]; 

    char branch[50]; 

    char fatherName[50]; 

    char motherName[50]; 

    float tuitionFees; 

    float developmentFees; 

    float cautionMoney; 

    float libraryFees; 

    float buildingFees; 

    float computerLabFees; 

    float sportsFees; 

    float medicalFees; 

    float otherExpenses; 

}; 

 

void displayBill(struct Student student) { 

    printf("\n--- College Bill Summary ---\n"); 

    printf("Admission Number: %d\n", student.admNo); 

    printf("Student Name: %s\n", student.name); 

    printf("Branch: %s\n", student.branch); 

    printf("Father's Name: %s\n", student.fatherName); 

    printf("Mother's Name: %s\n", student.motherName); 

     

    printf("\n--- Fees Breakdown ---\n"); 

    printf("Tuition Fees: %.2f\n", student.tuitionFees); 

    printf("Development Fees: %.2f\n", student.developmentFees); 

    printf("Caution Money: %.2f\n", student.cautionMoney); 

    printf("Library Fees: %.2f\n", student.libraryFees); 

    printf("Building Fees: %.2f\n", student.buildingFees); 

    printf("Computer Lab Fees: %.2f\n", student.computerLabFees); 

    printf("Sports Fees: %.2f\n", student.sportsFees); 

    printf("Medical Fees: %.2f\n", student.medicalFees); 

    printf("Other Expenses: %.2f\n", student.otherExpenses); 

     

    float totalFees = student.tuitionFees + student.developmentFees + student.cautionMoney + 

                      student.libraryFees + student.buildingFees + student.computerLabFees + 

                      student.sportsFees + student.medicalFees + student.otherExpenses; 

     

    printf("\nTotal Fees for the Year: %.2f\n", totalFees); 

    printf("----------------------------\n"); 

} 

 

int main() { 

    struct Student student; 

 

    // Input student details 

    printf("Enter Admission Number: "); 

    scanf("%d", &student.admNo); 

    printf("Enter Student Name: "); 

    getchar();  // to consume newline left by previous input 

    fgets(student.name, sizeof(student.name), stdin); 

    student.name[strcspn(student.name, "\n")] = 0;  // remove newline character 

    printf("Enter Branch: "); 

    fgets(student.branch, sizeof(student.branch), stdin); 

    student.branch[strcspn(student.branch, "\n")] = 0;  // remove newline character 

    printf("Enter Father's Name: "); 

    fgets(student.fatherName, sizeof(student.fatherName), stdin); 

    student.fatherName[strcspn(student.fatherName, "\n")] = 0;  // remove newline character 

    printf("Enter Mother's Name: "); 

    fgets(student.motherName, sizeof(student.motherName), stdin); 

    student.motherName[strcspn(student.motherName, "\n")] = 0;  // remove newline character 

 

    // Input fees details 

    printf("Enter Tuition Fees: "); 

    scanf("%f", &student.tuitionFees); 

    printf("Enter Development Fees: "); 

    scanf("%f", &student.developmentFees); 

    printf("Enter Caution Money: "); 

    scanf("%f", &student.cautionMoney); 

    printf("Enter Library Fees: "); 

    scanf("%f", &student.libraryFees); 

    printf("Enter Building Fees: "); 

    scanf("%f", &student.buildingFees); 

    printf("Enter Computer Lab Fees: "); 

    scanf("%f", &student.computerLabFees); 

    printf("Enter Sports Fees: "); 

    scanf("%f", &student.sportsFees); 

    printf("Enter Medical Fees: "); 

    scanf("%f", &student.medicalFees); 

    printf("Enter Other Expenses: "); 

    scanf("%f", &student.otherExpenses); 

 

    // Display the bill 

    displayBill(student); 

 

    printf("thank You"); 

 

    return 0; 

} 

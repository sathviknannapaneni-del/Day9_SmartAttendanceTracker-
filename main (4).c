#include <stdio.h>

int main() {
    int N;                    
    int i = 1;               
    int presentDays;          
    int eligibleCount = 0;    
    int notEligibleCount = 0; 
    float attendancePercent;  
    float totalAttendance = 0; 

    printf("Enter total number of students: ");
    scanf("%d", &N);

    
    while (i <= N) {
        printf("Enter attendance for student %d (out of 30): ", i);
        scanf("%d", &presentDays);

       
        attendancePercent = (presentDays / 30.0) * 100;

       
        totalAttendance += attendancePercent;

        
        if (attendancePercent >= 75.0) {
            printf("Student %d: %.2f%% - Eligible\n", i, attendancePercent);
            eligibleCount++;
        } else {
            printf("Student %d: %.2f%% - Not Eligible\n", i, attendancePercent);
            notEligibleCount++;
        }

        i++; 
    }

    
    float averageAttendance = totalAttendance / N;

    
    printf("Total Students: %d\n", N);
    printf("Eligible Students: %d\n", eligibleCount);
    printf("Not Eligible: %d\n", notEligibleCount);
    printf("Average Attendance: %.2f%%\n", averageAttendance);

    return 0;
}

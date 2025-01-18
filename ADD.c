
// Add or update attendance for a player
void updateAttendance(playerAttendance *attendance, int playerCount) {
    char studentID[20];
    int present;

    printf("Enter student ID:");
    scanf("%s", &studentID);

    int found = 0;
    for (int i = 0; i < playerCount; i++) {
        if (strcmp(attendance[i].studentID, studentID) == 0) {                      //compare student IDs
            found = 1;
            printf("Is the player present (1) or absent (0)? ");                   //input attendence of player
            scanf("%d", &present);
            attendance[i].marks[i] = present;
            printf("Attendance updated for %s\n", studentID);
            break;
        }
    }
    {
        FILE *curent;                                  //create a file pointer in memory

    curent = fopen( "Today_Attendence.txt", "w");         //opening file

    fprintf(curent, "StudentID\t Attendance\n");

    for (int i = 0; i < playerCount; i++) {                //loop for saving Today_Attendence
        fprintf(curent, "%s\t", attendance[i].studentID);

            fprintf(curent, "  %d\t\t", attendance[i].marks[i]);

        fprintf(curent, "\n");
    }

    fclose(curent);                             //close the Today_Attendence.txt
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

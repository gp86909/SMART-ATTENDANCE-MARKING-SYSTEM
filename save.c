//M.M.G.P.Dissanayake

// Save attendance data to a text file
void saveAttendanceToFile(playerAttendance *attendance, int playerCount) {
    FILE *fp;                                  //create a file pointer in memory

    fp = fopen( "attendance.txt", "a");         //opening file

    if (fp == NULL) {
        printf("Error opening file");
        return;
    }

    fprintf(fp, "StudentID\t Attendance\n");

    for (int i = 0; i < playerCount; i++) {                //loop for saving attendence
        fprintf(fp, "%s\t", attendance[i].studentID);

            fprintf(fp, "  %d\t\t", attendance[i].marks[i]);

        fprintf(fp, "\n");
    }
fprintf(fp, "\n");

    fclose(fp);                             //close the attendence.txt
    printf("Attendance data saved....\n");
}


// View attendance sheet
void viewAttendence(){
    char temp[100];
    FILE *fp1;              //create a file pointer in the memory

    fp1 = fopen ("attendance.txt","r");         //fopen

    if(fp1 == NULL){
        printf("Unable to read the specified location\n");
    }

    while(fgets(temp,sizeof(temp),fp1)){
            printf("%s",temp);
    }


  fclose(fp1);
}

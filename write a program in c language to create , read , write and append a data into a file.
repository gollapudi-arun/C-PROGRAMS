#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *filePointer;
    char filename[50];
    char dataToWrite[100];
    char dataToAppend[100];
    char buffer[1000]; // To read data from the file
	printf("Enter the filename: ");
    scanf("%s", filename);
// Create and Write to the file.
    filePointer = fopen(filename, "w"); // "w" mode opens for writing, creates if it doesn't exist
    if (filePointer == NULL) {
        printf("Error creating or opening the file for writing!\n");
        return 1; 
    }
    printf("Enter data to write into the file: ");
    scanf(" %[^\n]s", dataToWrite); // Read line with spaces
    fprintf(filePointer, "%s\n", dataToWrite); // Write to the file
    fclose(filePointer);
    printf("Data written to the file successfully.\n");
// Read from the file
    filePointer = fopen(filename, "r"); // "r" mode opens for reading
    if (filePointer == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }
    printf("\nData read from the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);
// Append to the file
    filePointer = fopen(filename, "a"); // "a" mode opens for appending
    if (filePointer == NULL) {
        printf("Error opening the file for appending!\n");
        return 1;
    }
    printf("\nEnter data to append to the file: ");
    scanf(" %[^\n]s", dataToAppend); // Read line with spaces
    fprintf(filePointer, "%s\n", dataToAppend); // Append to the file
    fclose(filePointer);
    printf("Data appended to the file successfully.\n");
// Read and display the updated content
    filePointer = fopen(filename, "r");
    if (filePointer == NULL) {
        printf("Error opening the file for reading the updated content!\n");
        return 1;
    }
    printf("\nUpdated content of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);
	return 0; 
}

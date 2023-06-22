#include <stdio.h>

#define BUFFER_SIZE 1024

int main()
{
    FILE *sourceFile, *destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    sourceFile = fopen("source.txt", "rb");
    if (sourceFile == NULL)
    {
        printf("Failed to open the source file.\n");
        return 1;
    }

    
    destinationFile = fopen("destination.txt", "wb");
    if (destinationFile == NULL)
    {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0)
    {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

  
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

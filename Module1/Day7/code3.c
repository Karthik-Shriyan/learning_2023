#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_SENSOR_NAME_LENGTH 10
#define MAX_TIMESTAMP_LENGTH 10


typedef struct
{
    int entryNo;
    char sensorNo[MAX_SENSOR_NAME_LENGTH];
    float temperature;
    int humidity;
    int light;
    char timestamp[MAX_TIMESTAMP_LENGTH];
} LogEntry;


int extractLogEntries(const char *filename, LogEntry logEntries[])
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 0;
    }

    char line[100];
    int entryCount = 0;

    while (fgets(line, sizeof(line), file) != NULL)
    {
        
        if (strstr(line, "EntryNo") != NULL)
            continue;

       
        char *token;
        token = strtok(line, ",");
        logEntries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].timestamp, token);

        entryCount++;
    }

    fclose(file);

    return entryCount;
}


void displayLogEntries(const LogEntry logEntries[], int entryCount)
{
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < entryCount; i++)
    {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].timestamp);
    }
}

int main()
{
    LogEntry logEntries[MAX_ENTRIES];
    int entryCount = extractLogEntries("data.csv", logEntries);
    displayLogEntries(logEntries, entryCount);

    return 0;
}


#include <stdio.h>

#define FILE_NAME "Student.txt"

struct Student
{
    int roll;
    char name[30];
    float marks;
};

void readStudent(struct Student *s)
{
    printf("Roll: ");
    scanf("%d", &s->roll);

    printf("Name: ");
    scanf(" %29[^\n]", s->name);

    printf("Marks: ");
    scanf("%f", &s->marks);
}

void addRecord(const char *mode)
{
    FILE *fp = fopen(FILE_NAME, mode);
    struct Student s;

    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return;
    }

    readStudent(&s);
    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);
}

void display()
{
    FILE *fp = fopen(FILE_NAME, "rb");
    struct Student s;

    if (fp == NULL)
    {
        printf("No file found\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("%d\t%-15s\t%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}

void edit()
{
    FILE *fp = fopen(FILE_NAME, "rb+");
    struct Student s;
    int roll, found = 0;

    if (fp == NULL)
    {
        printf("No file found\n");
        return;
    }

    printf("Enter roll number to edit: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("Enter new details:\n");
            readStudent(&s);

            fseek(fp, -(long)sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Record not found\n");
    }

    fclose(fp);
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Create 2.Append 3.Display 4.Edit 5.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                addRecord("wb");
                break;

            case 2:
                addRecord("ab");
                break;

            case 3:
                display();
                break;

            case 4:
                edit();
                break;

            case 5:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (ch != 5);

    return 0;
}


#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
    char name[100];
    struct stat st;

    printf("Enter file name: ");
    scanf("%99s", name);

    if (stat(name, &st) != 0)
    {
        perror("stat");
        return 1;
    }

    printf("Size            : %lld bytes\n",
           (long long)st.st_size);

    printf("Type            : %s\n",
           S_ISDIR(st.st_mode) ? "Directory" :
           S_ISREG(st.st_mode) ? "Regular file" : "Other");

    printf("Permissions     : %o (octal)\n",
           st.st_mode & 0777);

    printf("Number of links : %lu\n",
           (unsigned long)st.st_nlink);

    printf("Last modified   : %s",
           ctime(&st.st_mtime));

    return 0;
}

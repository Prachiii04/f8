#include <stdio.h>
#include <string.h>

#define kstringSize 21
#define kfullPathSize 42
struct MyData
{
	int howMany;
	char theText[kstringSize];
	char directoryPath[kstringSize];
	char filename[kstringSize];
};

int main(int argc, char* argv[])
{
    if (argc != 5)
    {
        printf("Error");
        return -1;
    }

    if ((strlen(argv[2]) > 20))
    {
        printf("Argument Error, Text is longer than 20 characters");
        return -1;
    }
    else if (strlen(argv[3]))
    {
        printf("Argument Error, Destination path is longer than 20 character");
        return -1;
    }
    else if ((strlen(argv[4]) > 20))
    {
        printf("Argument Error, File name is longer than 20 characters");
        return -1;
    }
	return 0;
}
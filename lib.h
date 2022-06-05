// gcc -c lib.c -o lib.o
// gcc -c array.c -o array.o
// gcc array.o lib.o -o array.exe && ./array.exe

void fillArray(int arr[], int size);
void printArray(int arr[], int size);
void fillArrayPointer(int arr[], int size);
void printArrayPointer(int arr[], int size);

void fillStr(char str[], int limit);
void fillStrFromFile(FILE* in, char str[]);
void fillStrFromFileFixed(FILE* in, char str[], int limit);
int strLen(char str[]);
void printStr(char str[]);

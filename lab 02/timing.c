#include <time.h>
#include <stdio.h>

void code()
{	
	for(int i=0; i<10000; i++)
	{
		printf(".");
	}
	printf("\n");

}

int main()
{
	int set = 0;
	
	int user_input;
	
	printf("Please set the number of times you want the clock to run \n");
	scanf("%d", &user_input);
	
	float average;
	
	clock_t t;
	
	
	
	while(set != user_input)
	{
		
		printf("start: %d \n", (int) (t=clock()));
		
		code();	
		
		printf("stop: %d \n", (int) (t=clock()-t));
		printf("Elapsed: %f seconds, ", (double) t / CLOCKS_PER_SEC);
		
		set++;
	}
	
	average = (float) (t++)/set;
	
	printf("Average: %f ", average, "Time 1: %f ", t);
	
	char *filename = "test.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
    for (int i = 0; i < 1; i++)
        fprintf(fp, "Average: %f ", average, "Time 1: %f ", i + 1);

    // close the file
    fclose(fp);
	
	return 0;
}
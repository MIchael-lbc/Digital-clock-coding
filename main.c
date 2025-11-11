#include<stdio.h>
#include<time.h> //Work with dates, times, clocks, timestamps,Getting and formatting time
#include<unistd.h> //System operations (sleep, fork, read/write) on Unix/Linux, Use it to pause the program or control processes.
#include<stdlib.h>//Memory allocation, random numbers, program exit, conversions
int main()
{
	int  hour, minute, second;//  
	hour = minute = second = 0;// 
	while (1) //to make it true   
	{
		//from #include<stdlib.h> to clear output screen
		system("clear ");
		//print time in HH:MM:SS format
		printf("%02d:%02d:%02d", hour, minute, second);
		fflush(stdout); //Show the printf output immediately.
			//It does NOT clear the screen.
			//It does NOT erase text.
			//It just forces display output right now.
		second++;
		if (second == 60)
		{
			minute = +1;
			second = 0;
		}
		if (minute == 60) {
			hour = +1;
				minute = 0;
		}
		if (hour == 24)
		{
			hour = 0;
			minute = 0;
				second = 0;
		}
		sleep(1); //wait till 1 second
	}
	return 0;
}


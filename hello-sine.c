#include <u.h>
#include <libc.h>

void main(int, char*)
{
	int loop, spaces, sine_value;

	for (loop=0; loop<40; loop++)
	{
		sine_value = (int)(sin(((double)loop / 4.0)) * 20) + 20;
		// print("Sine value = %d\n", sine_value);
		for (spaces=0; spaces<sine_value; spaces++)
		{
			print(" ");
		}
		print("Hello World!\n");
	}
	exits(nil);
}
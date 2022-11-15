#include<stdio.h>
#include<time.h>

#pragma warning(disable: 4996)

int main()
{
	/*time_t t;
	t = time(NULL);

	char* curentTime = ctime(&t);

	time_t t2 = time(NULL);
	double diffTime = difftime(t, t2);*/

	time_t t = time(NULL);
	tm *T = localtime(&t); //gmtime()

	time_t t2 = mktime(T);

	char* localTime = asctime(T); 

	char timeBuffer[100];
	strftime(timeBuffer, 100, "%m/%d/%Y", T);


	return 0;
}
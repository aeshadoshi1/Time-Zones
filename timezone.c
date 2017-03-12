#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (void) {

	char buffer[100];
	time_t t0 = time(NULL);
	struct tm *t1, *t2, *t3, *t4;
	
	setenv("TZ", "US/Hawaii", 1);
	tzset();
	t1 = localtime(&t0);
	strftime(buffer, 100, "%I:%M:%S %p", t1);
	printf("Honolulu, US: %s\n", buffer);
	
	setenv("TZ", "America/Sao_Paulo", 1);
	tzset();
	t2 = localtime(&t0);
	strftime(buffer, 100, "%I:%M:%S %p", t2);
	printf("Sao Paulo, Brazil: %s\n", buffer);
	
	setenv("TZ", "Europe/London", 1);
	tzset();
	t3 = localtime(&t0);
	strftime(buffer, 100, "%I:%M:%S %p", t3);
	printf("London, England: %s\n", buffer);
	
	setenv("TZ", "Asia/Tokyo", 1);
	tzset();
	t4 = localtime(&t0);
	strftime(buffer, 100, "%I:%M:%S %p", t4);
	printf("Tokyo, Japan: %s\n", buffer);
	
}

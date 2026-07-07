#include <stdio.h>

enum Week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Week day;
	
	
    day = Saturday;
	

    if (day == Saturday || day == Sunday)
        printf("Weekend\n");
    else
        printf("Weekday\n");

    return 0;
}

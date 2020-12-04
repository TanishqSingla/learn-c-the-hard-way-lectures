#include <stdio.h>

int main() 
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.432;
    char initial = 'A';
    char first_name[] = "Tanishq";
    char last_name[] = "Singla";


    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c %s.\n", 
            first_name, initial, last_name);

    int bugs = 100;
    double bugs_rate = 1.2;

    printf("You have %d bugs at an imaginary rate of %f bug rates.\n", bugs, bugs_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bugs_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("This is only a %e portion of universe.\n", part_of_universe);


    // this make no sense just a demo of something wierd
    
    char null_byte = '\0';

    int care_percentage = bugs * null_byte;
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;
}

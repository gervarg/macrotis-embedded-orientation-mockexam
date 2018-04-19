#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Create a personal ID registers
 * You should store the following data in a structure, called "person":
 * - the name of the person (which is shorter than 256 characters)
 * - the year of the birth (1990)
 * - the type of the highest qualification (as a custom type, see below)
 *
 * You should store the qualification type in an enumeration ("qualification"),
 * the valid types are:
 *  - elementary-school
 *  - high-school
 *  - bsc-degree
 *  - master-degree
 *  - phd
 *
 * The "person" -s are stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_alive()
 *    - it should return the age of the oldest person
 * - get_qualification_count()
 *    - it returns the count of persons which has "quali" qualification
 * For both functions you have to add the needed parameters!
 * You don't need to implement a function, which initializes the persons, just do it manually from main(). E.g. initialize your persons in main() with 4 elements in order to be able to test your 2 implemented functions if it works correctly.
 */



 enum qualification {
    ELEMENTARY_SCHOOL,
    HIGH_SCHOOL,
    BSC_DEGREE,
    MASTER_DEGREE,
    PHD
 };


 typedef struct {
    char name[255];
    int birth_year;
    enum qualification type;
 } person;

int get_oldest_alive(person*, int);
int get_qualification_count(person*,int, enum qualification);


int main()
{
    person persons[5];
    strcpy(persons[0].name, "Moriczka");
    persons[0].birth_year = 2009;
    persons[0].type = ELEMENTARY_SCHOOL;

    strcpy(persons[1].name, "Prof Egelbraun");
    persons[1].birth_year = 1964;
    persons[1].type = PHD;

    strcpy(persons[2].name, "Average Joe0");
    persons[2].birth_year = 1989;
    persons[2].type = BSC_DEGREE;

    strcpy(persons[3].name, "Engineer Jack");
    persons[3].birth_year = 1984;
    persons[3].type = MASTER_DEGREE;

    strcpy(persons[4].name, "Teen Melanie");
    persons[4].birth_year = 2000;
    persons[4].type = HIGH_SCHOOL;

    printf("The oldest person alive is: %d old\n", get_oldest_alive(persons, 5));
    printf("The number of persons with high_school degree is: %d\n", get_qualification_count(persons, 5, HIGH_SCHOOL));

    return 0;
}

 int get_oldest_alive(person* persons, int array_lenght)
 {
     int current_year = 2018;
     int oldest = 0;
     for (int i = 0; i < array_lenght; i++) {
        if ((current_year - persons[i].birth_year) > oldest)
            oldest = current_year - persons[i].birth_year;
     }
     return oldest;
 }

 int get_qualification_count(person* persons, int array_length, enum qualification quali)
 {
     int counter = 0;
     for (int i = 0; i < array_length; i++) {
        if (persons[i].type == quali)
            counter++;
     }
     return counter;
 }

#include <stdio.h>

/**
 * main - calculates CGPA
 *
 * Return: 0 or 1
 */
int main(void)
{
	int i;
	double cgpa; /*cgpa*/
	double total_units = 0.0;/*total of the courses' individual units*/
	double total_points = 0.0;/*total of the points gotten for each course*/
	double courses_units[3] = {3.0, 2.0, 1.0}; /*units of the individual courses*/
	char courses_grades[3] = {'A', 'B', 'C'};/*grades gotten for each course*/

	for (i = 0; i < 3; i++)
	{
		if (courses_grades[i] == 'A')
			total_points += courses_units[i] * 5.0;
		else if (courses_grades[i] == 'B')
			total_points += courses_units[i] * 4.0;
		else if (courses_grades[i] == 'C')
			total_points += courses_units[i] * 3.0;
		else
			total_points += courses_units[i] * 0.0;
		total_units += courses_units[i];
	}
	cgpa = total_points / total_units;
	printf("The CGPA of the student is: %f\n", cgpa);
	return (0);
}

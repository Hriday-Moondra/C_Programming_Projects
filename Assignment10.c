
#include <stdio.h>
 
/* Returns 1 if year is a leap year (Gregorian rules), else 0 */
int isLeap(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
 
/* Returns number of days in a month (month: 1-12) */
int daysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year))
        return 29;
    return days[month - 1];
}
 
/* Returns weekday of a date: 0 = Sunday ... 6 = Saturday (Sakamoto's algorithm) */
int dayOfWeek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (m < 3)
        y -= 1;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
 
int main()
{
    const char *months[] = {"January", "February", "March", "April",
                            "May", "June", "July", "August",
                            "September", "October", "November", "December"};
    int year, m, d, start, total;
 
    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Invalid year.\n");
        return 1;
    }
 
    printf("\n========== CALENDAR %d ==========\n", year);
 
    for (m = 1; m <= 12; m++) {
        start = dayOfWeek(1, m, year);   /* weekday of 1st of month */
        total = daysInMonth(m, year);
 
        printf("\n   --- %s %d ---\n", months[m - 1], year);
        printf(" Su  Mo  Tu  We  Th  Fr  Sa\n");
 
        for (d = 0; d < start; d++)      /* leading blanks */
            printf("    ");
 
        for (d = 1; d <= total; d++) {
            printf("%3d ", d);
            if ((d + start) % 7 == 0)    /* end of week */
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
 

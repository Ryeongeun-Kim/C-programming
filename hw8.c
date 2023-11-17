#include <stdio.h>
#include <math.h>

double average(int arr[5])
{
	int i;
	double sum = 0;
	for (i = 0; i < 5; i++)
		sum += arr[i];
	return sum / 5;
}

double Variance (int arr[5])
{
    double v, avg = 0, sum = 0;
    int i;
    avg = average(arr);
    for (i = 0; i < 5; i++)
        sum += pow((arr[i] - avg), 2);
    v = sum / 5;
    return v;
}

double standard_deviation(int arr[5])
{
    double v = Variance(arr);
    return sqrt(v);
}

int main (void)
{
    int i;
    int arr[5];
    printf("Enter 5 real numbers: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Standard Deviation = %.3f", standard_deviation(arr));
    return 0;
}

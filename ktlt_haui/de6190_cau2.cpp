#include <stdio.h>
#include <math.h>
#include <string.h>

struct point
{
	int x;
	int y;
};

float dt (point p1, point p2)
{
	int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main ()
{
	int n;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	point * p = new point[n];

	for (int i = 0; i < n; i++)
	{
		printf ("Nhap toa do A(x, y) thu %d: ", i + 1);
		scanf ("%d %d", &p[i].x, &p[i].y);
	}

	float dmax = 0.0;
	point max1, max2;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			float d = dt(p [i], p [j]);
			if (d > dmax)
			{
				dmax = d;
				max1 = p [i];
				max2 = p [j];
			}
		}
	}

	printf ("diem 1: (x, y) = (%d, %d)\n", max1.x, max1.y);
	printf ("diem 2: (x, y) = (%d, %d)\n", max2.x, max2.y);
	printf ("Khoang cach 2 diem khi nay la: %0.2f\n", dt(max1, max2));
}

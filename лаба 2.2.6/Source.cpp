#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
int fact(int n)
{
	if (n == 0) {
		return  1;
	}
	else {
		return n * fact(n - 1);
	}
}
int  iteration(double Sin, double summa, int n, double e, double x)
{
	while (fabs(Sin - summa) > e)
	{
		++n;
		summa += pow(-1, n - 1) * pow(x, 2 * n - 1) / fact(2 * n - 1);
	}
	return n;

}
int  rec(double Sin, double summa, int n, double e, double x)
{
	++n;
	summa += pow(-1, n - 1) * pow(x, 2 * n - 1) / fact(2 * n - 1);
	if (fabs(Sin - summa) > e) {
		return rec(Sin, summa, n, e, x);
	}
	else {
		return n;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	double x, Sin, summa, e;
	int n = 0;
	printf("������� ���:");
	while (scanf("%lf", &x) != 1)
	{
		printf("try again");
		while (getchar() != '\n');
	}
	printf("\n");
	printf("������� ����������� :");
	scanf("%lf", &e);
	Sin = sin(x);
	summa = 0;
    n=  iteration(Sin,summa,n,e,x);
	//n = rec(Sin, summa, n, e, x);
	printf("��� n = %d sin() ���������� �� ���������� ������ ��� �� e = %.10lf", n, e);
	_getch();
	return 0;
}
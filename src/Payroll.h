#ifndef _PAYROLL_H
#define _PAYROLL_H
#include <string>

using namespace std;

string getName();
char getCat();
double getOverTime(double);
double regHours(char);
bool OT(double);
double payRateSalary(char);
double payOrSalary(double, char);
double getFicaSSN(double);
double getFicaMED(double);
double getFIT(double);
double getNetPay(double, double, double, double);

#endif

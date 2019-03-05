# pro_set1
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
string arr[200] = {"Vishal","Vidharba"};
int n = sizeof(arr) / sizeof(arr[0]);
string ans = commonPrefix(arr, n);
if (ans.length())
printf ("The longest common prefix is - %s\n",ans.c_str());
else
printf("\nThere is no common prefix");
getch();
}

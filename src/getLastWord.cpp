/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *result;
	int i = 0, start = 0, end = 0;
	while (str[i + 1] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			start = i + 1;
		i++;
	}
	//	printf("start: %d i: %d \n",start,i);
	while (str[i] == ' ')
		i--;
	//	printf("end: %d i: %d \n",end,i);
	end = i;
	result = (char *)malloc(sizeof(char)*(end - start + 1));
	//	if(end<=start)
	//		return "";
	//printf("kjhgcfx\n");
	for (int i = 0, j = start; j <= end; i++, j++)
		result[i] = str[j];
	//printf("%s %d %d\n",result,start,end);
	return result;
}

/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int isVowel(char c)
{
	if ((c == 'a') || (c == 'A') || (c == 'e') || (c == 'E') || (c == 'i') || (c == 'I') || (c == 'o') || (c == 'O') || (c == 'u') || (c == 'U'))
		return 1;
	return 0;
}

void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
	int count_vowels = 0, count_consonants = 0;
	if (str != NULL)
	{
		int i = 0;
		while (str[i] != 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				if (isVowel(str[i]))
					count_vowels++;
				else
					count_consonants++;
			}
			i++;
		}
	}
	*consonants = count_consonants;
	*vowels = count_vowels;
}

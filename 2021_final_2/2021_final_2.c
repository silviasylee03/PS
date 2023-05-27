//keyWord

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int is_in(char word[], int size, char ch) // 필요하면 써도 된다(물론 안써도 된다)
{
	int i;
	for (i = 0; i < size; i++)
		if (word[i] == ch)
			return 1;
	return 0;
}

void makeCode(char code[], char word[]) // 이 함수만 제출
{
	// 코드 작성
	int i = 0, j = 0;

	for (i = 0; word[i] != '\0'; i++) {
		if (is_in(code, j, word[i]) == 0) { // 일치하지 않으면
			code[j++] = word[i];
		}
	}

	printf("%s\n", code);
}

void printCode(char code[]) //변경하지 말라
{
	int i;
	for (i = 0; i < 26; i++)
		printf("%c", code[i]);
}

int main(void) // 변경하지 말라
{
	char code[26]; // code[0]부터 'A'의 암호화문자를 넣음
	char keyWord[10];

	scanf("%s", keyWord);
	makeCode(code, keyWord);
	printCode(code);
}

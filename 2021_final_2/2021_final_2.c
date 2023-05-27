//keyWord

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int is_in(char word[], int size, char ch) // �ʿ��ϸ� �ᵵ �ȴ�(���� �Ƚᵵ �ȴ�)
{
	int i;
	for (i = 0; i < size; i++)
		if (word[i] == ch)
			return 1;
	return 0;
}

void makeCode(char code[], char word[]) // �� �Լ��� ����
{
	// �ڵ� �ۼ�
	int i = 0, j = 0;

	for (i = 0; word[i] != '\0'; i++) {
		if (is_in(code, j, word[i]) == 0) { // ��ġ���� ������
			code[j++] = word[i];
		}
	}

	printf("%s\n", code);
}

void printCode(char code[]) //�������� ����
{
	int i;
	for (i = 0; i < 26; i++)
		printf("%c", code[i]);
}

int main(void) // �������� ����
{
	char code[26]; // code[0]���� 'A'�� ��ȣȭ���ڸ� ����
	char keyWord[10];

	scanf("%s", keyWord);
	makeCode(code, keyWord);
	printCode(code);
}

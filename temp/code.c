/*

���� ���� �Լ��� �˰��� �������
ex)�����Ʈ, ��İ�, ���ڿ� �� ��

*/


//�����Ʈ �Լ�
for (int i = 0; i < len - 1; i++) {
	for (int j = 0; j < len - (i + 1); j++) {
		if (arr[j] > arr[j + 1]){
			int temp;
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j+1] = temp;
		}
	}
}

//���� ��ġã�� �Լ�
int loc(const int* arr, const int number, const int len) {
	for (int i = 0; i < len; i++)if (arr[i] == number)return i;
	return -1;
}

//�迭 �����Լ�
(��Ƽ��)
void cpy(const int* oriarr, int* newarr, const int len)for (int i = 0; i < len; i++) *newarr + i = *oriarr + i;

//�����Լ�
int square(const int number, const int count) {
	if (count == 0)return 1;
	int value = number;
	for (int i = 1; i < count; i++)value *= number;
	return value;
}

//���ڿ� �� �Լ�


//
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
	return 0;
}

//���ڿ� �� �Լ�


//
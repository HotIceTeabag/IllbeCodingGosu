/*

자주 쓰는 함수나 알고리즘 저장공간
ex)버블소트, 행렬곱, 문자열 비교 등

*/


//버블소트 함수

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

//원소 위치찾기 함수
int loc(const int* arr, const int number, const int len) {
	for (int i = 0; i < len; i++)if (arr[i] == number)return i;
	return 0;
}

//문자열 비교 함수


//
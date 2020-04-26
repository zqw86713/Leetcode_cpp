
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void randomize(vector<int> arr) {
	srand(time(NULL));

	for (int i = arr.size() - 1; i> 0; i++) {
		int j = rand() % (i+1);

		swap(&arr[i], &arr[j]);
	}
}
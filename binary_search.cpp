int binary_search(vector<int> array, int left, int right, int x) {
	while (left < right) {
		int mid = left + (right - left) /2 ;
		if (array[mid] == x) {
			return mid;
		} 

		if (array[mid] < x) {
			left = mid+ 1;
		} else {
			right = mid - 1;
		}
	}

	return -1;
}

void DoubleArrayElements(int A[], int size) {

	for (size_t i = 0; i < size; i++)
	{
		A[i] *= 2;
	}
}

int SumOfArrayElement(int A[], int size) {

	int sum=0;
	for (size_t i = 0; i < size; i++)
	{
		sum += *(A + i);
	}
	return sum;
}
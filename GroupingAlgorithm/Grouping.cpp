#include<iostream>
using namespace std;

int main() {
	int N=0, M=0, K=0, T=0, X = 0;
	cout << "Type in the Number of Female, Male and Interns" << endl;
	scanf("%d %d %d", &N, &M, &K);


	if (N + M - K < 3 || N < 2 || M < 1) {
		T = 0;
	}
	else {
		X = N / 2;
		while (N + M -3*X < K || X > M)
			X--;
		T = X;
	}

	printf("%d Teams are allowed\n", T);
	return 0;
}
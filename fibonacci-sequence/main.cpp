#include <iostream>
#include <vector>

using namespace std;

std::vector<int> createFibonacciSequence(int length=7) {
	std::vector<int> sequence = { 0, 1 };
	
	for (int index=0; index <= sequence.size(); index++) {
		if (sequence.size() == length) break;

		sequence.push_back(sequence[index] + sequence[index + 1]);
	}

	return sequence;
}

int main() {

	const auto sequence = createFibonacciSequence(12);

	for (int number : sequence) {
		printf("%d, ", number);
	}

	return 0;
}
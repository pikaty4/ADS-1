// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>

bool checkPrime(uint64_t value) {
	for (uint64_t i = 2; i < value / 2 + 1; i++) {
		if (value % i == 0) { return false; }
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t prime = 0;
	for (uint64_t i = 2; i <= n; i++) {
		if (checkPrime(i)) { prime++; }
	}
	return prime;
}

uint64_t nextPrime(uint64_t value) {
	value++;
	while (true) {
		if (checkPrime(value)) { return value; }
		value++;
	}
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t sum = 0;
	for (uint64_t i = 2; i < hbound; i++) {
		if (checkPrime(i)) { sum += i; }
	}
	return sum;
}

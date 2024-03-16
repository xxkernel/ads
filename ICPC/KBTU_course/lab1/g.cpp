#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

vector<long long> primes;

void GenPrimes() {
    const long long MAX_SIZE = 1000001;  
    vector<bool> is_prime(MAX_SIZE, true);

    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i < MAX_SIZE; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j < MAX_SIZE; j += i)
                is_prime[j] = false;
        }
    }

    for (long long i = 2; i < MAX_SIZE; i++) {
        if (is_prime[i]) {
            long long temp = i;
            while (temp * i < 1000000000000LL) {
                temp *= i;
                primes.push_back(temp);
            }
        }
    }
    primes.push_back(1000000000001LL);
    sort(primes.begin(), primes.end());
}

int main() {
    int tests;
    cin >> tests;
    GenPrimes();

    for (int i = 0; i < tests; i++) {
        long long low, high;
        cin >> low >> high;

        int count = 0;
        for (long long p : primes) {
            if (p >= low && p <= high)
                count++;
            if (p > high)
                break;
        }

        cout << count << endl;
    }

    return 0;
}
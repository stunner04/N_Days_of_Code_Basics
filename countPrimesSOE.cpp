int countPrimes(int n)
{
    vector<bool> prime(n + 1, true); // considering 0 as element also
    int count = 0;
    prime[0] = prime[1] = false; // 0 and 1 are not prime so marked as non prime

    for (int i = 2; i < n; i++)
    {
        if (prime[i]) // as already marked prime all elements while intialization
        {
            count++;

            // mark the multiples of prime[i] as non prime
            for (int j = 2 * i; j < n; j = j + i)
            {
                if (!prime[j])
                    continue; // if alredy marked false
                prime[j] = 0;
            }
        }
    }
    return count;
}
//https://leetcode.com/problems/count-primes/

#!/bin/python3
import sys

def main():
    input_data = sys.stdin.read().split()
    idx = 0
    t = int(input_data[idx]); idx += 1

    ns = []
    for _ in range(t):
        ns.append(int(input_data[idx])); idx += 1

    max_n = max(ns) if ns else 0

    # Sieve of Eratosthenes up to max_n
    sieve = bytearray([1]) * (max_n + 1)
    if max_n >= 0:
        sieve[0:1] = b'\x00'
    if max_n >= 1:
        sieve[1:2] = b'\x00'
    for i in range(2, int(max_n**0.5) + 1):
        if sieve[i]:
            for j in range(i*i, max_n + 1, i):
                sieve[j] = 0

    # Prefix sum of primes
    prefix = [0] * (max_n + 1)
    running = 0
    for num in range(max_n + 1):
        if sieve[num]:
            running += num
        prefix[num] = running

    out = []
    for n in ns:
        out.append(str(prefix[n]))

    print("\n".join(out))

main()

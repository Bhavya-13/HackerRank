import sys

def main():
    data = sys.stdin.buffer.read().split()
    t = int(data[0])
    ns = list(map(int, data[1:1 + t]))
    max_n = max(ns)

    chain_len = [0] * (max_n + 1)
    chain_len[1] = 1

    for start in range(2, max_n + 1):
        if chain_len[start]:
            continue
        n = start
        path = []

        while n >= start and (n > max_n or chain_len[n] == 0):
            path.append(n)
            if n % 2 == 0:
                n //= 2
            else:
                n = 3 * n + 1
        base = chain_len[n] if n <= max_n else 0
        length = base
        for num in reversed(path):
            length += 1
            if num <= max_n:
                chain_len[num] = length

    best_num = [0] * (max_n + 1)
    best_len = [0] * (max_n + 1)
    best_num[1], best_len[1] = 1, 1
    for i in range(2, max_n + 1):
        if chain_len[i] >= best_len[i - 1]:
            best_len[i] = chain_len[i]
            best_num[i] = i
        else:
            best_len[i] = best_len[i - 1]
            best_num[i] = best_num[i - 1]

    out = [str(best_num[n]) for n in ns]
    print("\n".join(out))

main()

import sys

def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    ns = map(int, data[1:1 + t])
    out = []
    for n in ns:
        power = 2 ** n
        out.append(str(sum(int(d) for d in str(power))))
    print("\n".join(out))

main()

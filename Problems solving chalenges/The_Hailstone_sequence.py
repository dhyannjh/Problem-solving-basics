# If n is even half it it odd multiply by three and add 1

def do_hailstone(n, sequence = None):
    if sequence is None:
        sequence = []

    if n == 1:
        sequence.append(1)
        return max(sequence), len(sequence)

    sequence.append(n)
    if n % 2 == 0:
        return do_hailstone(n//2, sequence)

    else:
        return do_hailstone((n * 3) + 1, sequence)


Max, Len = do_hailstone(27)

print(f"Part A:\nMax: {Max}, Length: {Len}")

LEN_MAX = 0
NUM = 1

for i in range(1, 10001):
    Max, Len = do_hailstone(i)
    
    if Len > LEN_MAX:
        LEN_MAX = Len
        NUM = i

print(f"\nThe number with the greatest sequence under 10000 is {NUM}, with a sequence length of {LEN_MAX}")

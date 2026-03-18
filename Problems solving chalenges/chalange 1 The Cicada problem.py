
def gcd(a, b):

    rem = a%b if a > b else b%a
    div = b if a > b else a
    num = a if a > b else b
    
    while rem != 0:
        rem = num % div
        if rem == 0:
            break
        
        num = div
        div = rem
        
    return div

def lcm(a, b):

    LCM = (a * b)/(gcd(a, b))
    return LCM

print("The 2 species overlap every ", lcm(13, 17), " years")

print(f"Part B: The starting year shoud be [lcm(13, 17)+1] because this would mean that u have to wait for the entire 221 year cycle to repeat")

print(f"Part c: Haveing prime numbered cycles is better to prevent overlapping with preditors because prime number multiples rarely converge")

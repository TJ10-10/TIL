def describe_number(n):
    match n:
        case 1:
            return "One"
        case 2 | 3 | 5 | 7 | 11:
            return "Prime number"
        case _ if 13 <= n <= 19:
            return "Teen number"
        case _:
            return "Something else"

print(describe_number(7))
print(describe_number(15))
print(describe_number(42))

def get_fib(position):
    first, second = 0, 1
    for fib_pos in range(position - 1):
        first, second = second, first + second
    return second

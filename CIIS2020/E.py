def main():
    n, m = map(int, input().split())
    while(n != 0 and m != 0):
        if m == 1 or m == 2:
            print(f'{n}')
            n, m = map(int, input().split())
            continue

        x = n
        y = n
        for i in range(3, m + 1):
            z = x + y
            x = y
            y = z
        print(f'{z}')
        n, m = map(int, input().split())

if __name__ == '__main__':
    main()

# coding: utf-8
# AC at 2022.02.22
n,y = input('').split()
n = int(n)
y = int(y)
 
a = b = c = 0;
 
while a <= n:
    while a + b <= n:
        c = n - (a + b) 
        if 10000 * a + 5000 * b + 1000 * c == y:
            print(a,b,c)
            exit()
        b += 1
    a += 1
    b = 0
print("-1 -1 -1")
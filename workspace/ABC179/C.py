n = input()
ans = 0

for i in range(n):
    for j in range(n-(i+1)):
        if (n-(i+1))%(j+1)==0 :
           ans += 1

print(ans)
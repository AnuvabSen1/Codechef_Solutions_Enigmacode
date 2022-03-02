T = int(input())
for j in range(T):
    n=int(input())
    lists =list(map(int,input().split()))
    answer=8
    hemlo = [6,7,13,14,20,21,27,28]
    for i in lists:
        if i not in hemlo:
            answer= answer + 1
    print(answer)
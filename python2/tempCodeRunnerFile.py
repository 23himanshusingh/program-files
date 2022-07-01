def perm(n):
    lis=[i for i in range(1,n+1)]
    li=[];from itertools import permutations
    for i in permutations(lis,n):
        li.append(list(i))
    return li
print(perm(3))
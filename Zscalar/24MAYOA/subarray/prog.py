from collections import deque
from itertools import accumulate

# 1 <= a <= b <= n
n, a, b = map(int, input().split(" "))
prefix_sums = list(accumulate(map(int, input().split(" ")), initial=0))

d = b - a
#elements like `(pre_sums[i], i)`, decreasing in the
# `pref_sums[i]` part but increasing in the `i` part.
deq = deque()
answer = -1 << 63
for i in range(a, n + d + 1):
    if deq and deq[0][1] < i - d:
        deq.popleft()
    if i <= n:
        while deq and deq[-1][0] <= prefix_sums[i]:
            deq.pop()
        deq.append((prefix_sums[i], i))
    if i >= b:
#deq[0][0] is the maximum elements of pre_sums[i - d..min(n, i)]
        answer = max(answer, deq[0][0] - prefix_sums[i - b])

print(answer)
t = int(raw_input())
while t>0:
	t = t - 1
	curma = 0
	n = int(raw_input())
	arr1 = map(int, raw_input().split())
	arr2 = map(int, raw_input().split())
	for i in xrange(n):
		low, high, pos = 0, n - 1, -1
		while low<=high:
			 mid = (low + high) / 2
			 if arr2[mid] >= arr1[i]:
				 pos = mid
				 low = mid + 1
			 else:
				 high = mid - 1
		curma = max (curma, pos - i)
	prilnt curma
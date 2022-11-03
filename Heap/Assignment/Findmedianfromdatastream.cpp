class MedianFinder:

    def __init__(self):
        self.upper, self.lower = [], []
        self.count = 0

    def addNum(self, num: int) -> None:
        if not self.count or self.upper[0] > num:
            heappush(self.lower, -num)
            if not self.count % 2:
                heappush(self.upper, -heappop(self.lower))
        else:
            heappush(self.upper, num)
            if self.count % 2:
                heappush(self.lower, -heappop(self.upper))
        self.count += 1

    def findMedian(self) -> float:
        if not self.count % 2:
            return (self.upper[0] - self.lower[0])/2
        return self.upper[0]

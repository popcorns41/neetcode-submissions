class TimeMap:

    def __init__(self):
        self.store = defaultdict(list)

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.store[key].append((timestamp,value))
        

    def get(self, key: str, timestamp: int) -> str:
        values = self.store[key]
        if not values:
            return ""
            
        l = 0
        r = len(values)-1

        res = ""

        while l <= r:
            m = (l+r) // 2
            mid_ts,mid_v = values[m]

            if mid_ts <= timestamp:
                res = mid_v
                l = m + 1
            else:
                r = m -1
        return res

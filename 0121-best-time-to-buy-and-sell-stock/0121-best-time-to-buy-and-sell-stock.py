class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        bp=prices[0]
        prof=0

        for p in prices[1:]:
            if bp > p:
                bp = p

            prof = max(prof, p-bp)
        return prof

        
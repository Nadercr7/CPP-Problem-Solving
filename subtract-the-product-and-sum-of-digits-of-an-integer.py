class Solution(object):
    def subtractProductAndSum(self, n):
        product = 1
        summ = 0
        numbers = [int(i) for i in str(n)]
        for i in numbers:
            product *= i
            summ += i
        return product - summ

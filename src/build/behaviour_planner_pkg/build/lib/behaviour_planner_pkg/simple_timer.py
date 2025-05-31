import time


class Timer():
    def __init__(self):
        self.time_start = time.time()

    def time_elapsed(self, round_decimals=3):
        return round(time.time() - self.time_start, round_decimals)

    def time_elapsed_ms(self, round_decimals=3):
        return round((time.time() - self.time_start) * 1000, round_decimals)

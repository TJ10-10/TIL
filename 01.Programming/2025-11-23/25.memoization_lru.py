import time
from functools import lru_cache

@lru_cache(maxsize=None)
def slow_function(n):
    print(f"計算中: {n}")
    time.sleep(1)
    return n * n

print(slow_function(4))
print(slow_function(4))  # キャッシュされて高速に返る


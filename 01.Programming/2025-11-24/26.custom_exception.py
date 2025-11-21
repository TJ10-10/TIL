class MushroomError(Exception):
    def __init__(self, message):
        super().__init__(message)

def check_mushroom(name):
    if name != "nameko":
        raise MushroomError(f"{name} は私の仲間じゃないかも…")

try:
    check_mushroom("shiitake")
except MushroomError as e:
    print(f"エラー発生: {e}")


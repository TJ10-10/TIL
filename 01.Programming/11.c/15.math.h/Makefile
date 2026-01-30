# 変数の定義
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -lm
TARGET = math_test

# デフォルトのターゲット
all: $(TARGET)

# リンクして実行ファイルを作成するルール
# [ターゲット]: [依存するファイル]
# 	[実行するコマンド] ※必ず「行頭はタブ（Tab）」である必要がある
$(TARGET): main.o
				$(CC) $(CFLAGS) -o $(TARGET) main.o $(LDFLAGS)

# コンパイルしてオブジェクトファイル(.o) を作成するルール
main.o: main.c
				$(CC) $(CFLAGS) -c main.c

# 生成されたファイルを削除して掃除するルール
clean:
				rm -f $(TARGET) *.o

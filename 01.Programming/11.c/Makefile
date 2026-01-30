# ビルド対象とするサブディレクトリのリスト
# 実行ファイルが生成されるディレクトリを列挙します
SUBDIRS := $(wildcard */.)

# デフォルトターゲット
all:
				@for dir in $(SUBDIRS); do \
								if [ -f $$dir/Makefile ]; then \
												echo "Building in $$dir..."; \
												$(MAKE) -C $$dir; \
								fi; \
				done

# 全ディレクトリを一括掃除
clean:
				@for dir in $(SUBDIRS); do \
								if [ -f $$dir/Makefile ]; then \
												echo "Cleaning in $$dir..."; \
												$(MAKE) -C $$dir clean; \
								fi; \
				done

.PHONY: all clean

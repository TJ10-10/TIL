import argparse

def greet(args):
    print(f"こんにちは、{args.name}さん！")

def farewell(args):
    print(f"さようなら、{args.name}さん！")

parser = argparse.ArgumentParser(description="サブコマンドの例")
subparsers = parser.add_subparsers()

# greet サブコマンド
parser_greet = subparsers.add_parser("greet")
parser_greet.add_argument("name")
parser_greet.set_defaults(func=greet)

# farewell サブコマンド
parser_farewell = subparsers.add_parser("farewell")
parser_farewell.add_argument("name")
parser_farewell.set_defaults(func=farewell)

args = parser.parse_args()
args.func(args)

----------------------------------------------
実行例:

python 24.argparse_subcommands.py greet エリン
python 24.argparse_subcommands.py farewell エリン


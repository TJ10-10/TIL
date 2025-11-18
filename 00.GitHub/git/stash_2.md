# 2025-11-07: Git stashで削除状態を復元したときの挙動

## 状況
- Rust関連ファイルを削除した状態を `stash` に保存
- `stash pop` で復元したら、Gitが「削除されたよ」と教えてくれた

## 解決方法
```bash
git add -u
git commit -m "Remove Rust-related files from 00.github"
git push


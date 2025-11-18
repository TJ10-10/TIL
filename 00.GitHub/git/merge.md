# 2025-11-05: Gitマージ時のREADME.md衝突の解消方法

## 状況
- `00.github` と `02.python` の両方で `README.md` を作成
- `git pull` でマージ衝突が発生

## 解決方法
- `<<<<<<<`, `=======`, `>>>>>>>` を確認
- 内容を整理してひとつにまとめる
- `git add README.md`
- `git commit -m "Resolve README.md conflict"`
- `git push`

## 気づき
- 同じファイル名でも内容が違うと衝突する
- 手動で整理することで、両方の意図を残せる


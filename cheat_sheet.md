git fetch origin   # always fetch first so your local Git knows remote's state

# Shows commits your branch has that main doesn't (the "2 ahead")
git log --oneline main..feature

# Shows commits main has that your branch doesn't (the "3 behind")
git log --oneline feature..main

# Rebase Method
# Make sure you're on the feature branch
git checkout feature

# Fetch the latest state of the remote without changing anything yet
git fetch origin

# Replay your 2 commits (G and H) on top of the latest main (F)
git rebase origin/main
# You must force-push because you rewrote history.
# --force-with-lease is the responsible version: it will REFUSE to push
# if someone else has pushed to this branch since your last fetch,
# protecting their work from being overwritten.
git push --force-with-lease origin feature

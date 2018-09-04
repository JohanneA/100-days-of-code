## Git workshop
#### May 11th 2018

**Repository** Folder containing code or all files. it has a `.git`. This file basically knows everything for every change ever made with git.

Commit small and often. Commits are arranged in a merkel tree.

**Staging** Check your self before you wreck yourself

**Branches** Copy of master branch but with your own works independent of the master. Named after what they're used for. The HEAD points to the current branch. Good for things like web dev, just work on a new branch when wanting to update. You need to add and commit to your branch for it to show only on the branch.

**Merging** Combine two branches



#### Commands
* `git status` tracks files in repository
* `git add <filename>` add filename to a branch
* `git add -p` patch changes
* `git commit -m " "` commit to the branch
* `git log` see all commits in repository
* `git reset <hash>` Reset to a specific commits
* `git init` start version control to current folder
* `git branch` Show all branches, `*` specifies current working branche.
* `git branch <branchname>` Create new branch
* `git checkout <branchname>` Switch branch to <branchname>
* `git merge <branchname>` Merge a branch to the current branch
* `git merge --no-ff <branchname>` ensure you don't end up with a detached head
* `git clone <url>` download a copy of a git repository
* `git pull` merge the current branch with most uo to date stuff
* `git push` Push local changes to remote
* `git reflog` Keep track of moves between branches
* `git reset --HARD <hash>` move branch pointer to a particular hash
* `git reset --HARD HEAD@{n}` Go back 'n' HEAD movements

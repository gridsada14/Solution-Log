# GitHub Commands

## Crete Project on GitHub (Starter Pack)
1. use this command if create from GitHub then edit code
```
git clone (copy form repository)
```
```
git cd (folder)
```
1. or this if create from local folder (after finish your code)
```
git init
```
2. type follow command 
```
git add .
```
```
git commit -m "added folder" 
```
```
git push
```


## add folder on GitHub
1. add file > create new file 
2. add "\\" for tell it's folder  
```
(folder)\file.py
```


## Removed file on local and update to GitHub
1. open GitBash on Mother folder
2. type follow command
```
git rm (folder)
```
```
git commit -m "removed folder"
```
```
git push
```


## fatal: early EOF fatal: index-pack failed
can't clone repository on cmd
1. turn off compression
```
git config --global core.compression 0
```
2. let's do a partial clone to truncate the amount of info coming down
```
git clone --depth 1 <repo_URL>
```
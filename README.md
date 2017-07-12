#liuweitong_simiao
#git 导出文件命令
git diff-tree -r --no-commit-id --name-only 1d3da9148dcca09da8d77c8177e76f20b7723b31 | xargs tar -rf mytarfile.tar
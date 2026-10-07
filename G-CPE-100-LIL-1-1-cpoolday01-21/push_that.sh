#!/bin/bash

git add .
current="`date +'%Y-%m-%d %H:%M:%S'`"
msg="Updated: $current"
git commit -m "$msg" # Updated: 2019-08-28 10:22:06

git push

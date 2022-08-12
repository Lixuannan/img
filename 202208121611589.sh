#!/bin/bash
source  /etc/profile
export LANG="en_US.UTF-8"

img="$(picgo upload $1)"
echo $img | awk '{print $NF}' 

#!/bin/bash
sudo arp-scan --interface=wlp1s0 --localnet --numeric --quiet --ignoredups | grep -E '([a-f0-9]{2}:){5}[a-f0-9]{2}'|awk '{print $1}' > killthem.txt
echo routers ip
echo supply as argument to wifikill
route -n|grep ^0.0.0.0|cut -d' ' -f 10

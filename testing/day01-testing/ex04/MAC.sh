#! /bin/bash

ifconfig | grep ether | tr -s ' ' | cut -d ' ' -f 3

ifconfig | grep ether | awk '{print $2}'
#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "the max pid value is : $pid_max"

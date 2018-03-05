#!/bin/sh
echo "started"
text="2 OCT 2006 14:00:00"
date --set=$text
echo "done"
exit $?

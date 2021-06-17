#! /bin/bash

echo `cat /etc/passwd | grep -o '^[^#]*' | awk 'NR % 2==0' | sed 's/:.*//' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2"` | sed 's/ /, /g' | tr '\n' .
ldapsearch -S 'cn'  uid='z*' | grep ^cn: | sort -r | cut -d" " -f2-

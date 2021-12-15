mkdir -p tmp
for n in $(jot 10); do
	echo "Creating file number $n....";
	dd if=/dev/urandom of=tmp/file$n bs=$((1024*1024)) count=100 2>/dev/null;
done

for n in 3145728 1048576 32768 16384 4096 1024 256 128 64 1; do
	cc -Wall -DBUFFSIZE=$n simple-cat.c;
	i=$(( $i + 1));
	for j in $$(jot 5);do
		/usr/bin/tmp -p ./a.out <tmp/file$i > tmp/out;
	done
done

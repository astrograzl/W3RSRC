all:
	echo -e "\tThere is nothing we can do about it"

%: %.c
	cc -o $@ $^

	
run: SizeOf
	./$< # first adict!on

dev: UnderCover
	./$< 0 1 2

UnderCover: UnderCover.c UnderGround.c UnderGround.h
SizeOfAnArray: SizeOfAnArray.c SizeOf.c SizeOf.h
RandomIntegers: RandomIntegers.c
DirectUsing: DirectUsing.c
SizeOf: SizeOf.c SizeOf.h

ansic: ansit.c ANSIC.h colors.md

clean:
	rm SizeOf SizeOfAnArray RandomIntegers \
		DirectUsing UnderCover

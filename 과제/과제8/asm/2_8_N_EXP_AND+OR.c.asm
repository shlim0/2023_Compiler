	      INT   0, 24
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	     LITI   0, 10
	     JPCR   0, L1
	     LITI   0, 0
L1:
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	     LITI   0, 10
	     JPTR   0, L2
	     LITI   0, 0
L2:
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LDA   0, 12
	      LOD   1, 12
	      LOD   1, 16
	      POP   0, 6
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "%d %d\n"

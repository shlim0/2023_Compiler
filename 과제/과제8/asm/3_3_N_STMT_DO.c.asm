	      INT   0, 44
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 16
	      LDA   1, 12
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L3:
	      INT   0, 12
	      LDA   0, 12
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L2:
	      LOD   1, 12
	     LITI   0, 10
	     LSSI   0, 0
	      JPT   0, L3
L1:
	      INT   0, 12
	      LDA   0, 20
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L6:
	      INT   0, 12
	      LDA   0, 28
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L5:
	      LOD   1, 12
	     LITI   0, 10
	     LSSI   0, 0
	      JPT   0, L6
L4:
	      INT   0, 12
	      LDA   0, 36
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "%d "
.literal    20  "\n"
.literal    28  "%d "
.literal    36  "\n"

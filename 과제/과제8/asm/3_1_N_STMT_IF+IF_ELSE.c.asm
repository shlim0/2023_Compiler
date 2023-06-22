	      INT   0, 44
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	      LOD   0, 12
	      STX   0, 1
	      POP   0, 1
	      LOD   1, 12
	      JPC   0, L1
	      INT   0, 12
	      LDA   0, 16
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L1:
	      LOD   1, 12
	      JPC   0, L2
	      INT   0, 12
	      LDA   0, 24
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      JMP   0, L3
L2:
	      LOD   1, 16
	     CVTI   0, 0
	      JPC   0, L4
	      INT   0, 12
	      LDA   0, 32
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L4:
L3:
	      RET   0, 0
.literal    12  1.100000
.literal    16  "IF\n"
.literal    24  "IF\n"
.literal    32  "ELSE_IF\n"

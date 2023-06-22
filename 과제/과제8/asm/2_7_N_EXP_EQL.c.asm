	      INT   0, 128
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 12
	     LITI   0, 10
	     LITI   0, 10
	     EQLI   0, 0
	      JPC   0, L1
	      INT   0, 12
	      LDA   0, 12
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L1:
	      LOD   0, 28
	      LOD   0, 32
	     EQLF   0, 0
	      JPC   0, L2
	      INT   0, 12
	      LDA   0, 36
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L2:
	     LITI   0, 20
	     LITI   0, 10
	     EQLI   0, 0
	      JPC   0, L3
	      INT   0, 12
	      LDA   0, 52
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L3:
	      LOD   0, 72
	     LITI   0, 20
	     CVTF   0, 0
	     EQLF   0, 0
	      JPC   0, L4
	      INT   0, 12
	      LDA   0, 76
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L4:
	      LOD   0, 100
	      LOD   0, 104
	     EQLF   0, 0
	      JPC   0, L5
	      INT   0, 12
	      LDA   0, 108
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L5:
	      RET   0, 0
.literal    12  "EQL : INT\n"
.literal    28  10.100000
.literal    32  10.100000
.literal    36  "EQL : FLOAT\n"
.literal    52  "EQL : NOT INT\n"
.literal    72  20.200001
.literal    76  "EQL : NOT INT FLOAT\n"
.literal   100  20.200001
.literal   104  20.100000
.literal   108  "EQL : NOT FLOAT\n"

	      INT   0, 152
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 12
	     LITI   0, 20
	     LITI   0, 10
	     GTRI   0, 0
	      JPC   0, L1
	      INT   0, 12
	      LDA   0, 12
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L1:
	      LOD   0, 28
	     LITI   0, 10
	     CVTF   0, 0
	     GTRF   0, 0
	      JPC   0, L2
	      INT   0, 12
	      LDA   0, 32
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L2:
	      LOD   0, 52
	      LOD   0, 56
	     GTRF   0, 0
	      JPC   0, L3
	      INT   0, 12
	      LDA   0, 60
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L3:
	     LITI   0, 10
	     LITI   0, 20
	     GTRI   0, 0
	      JPC   0, L4
	      INT   0, 12
	      LDA   0, 76
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L4:
	      LOD   0, 96
	     LITI   0, 20
	     CVTF   0, 0
	     GTRF   0, 0
	      JPC   0, L5
	      INT   0, 12
	      LDA   0, 100
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L5:
	      LOD   0, 124
	      LOD   0, 128
	     GTRF   0, 0
	      JPC   0, L6
	      INT   0, 12
	      LDA   0, 132
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L6:
	      RET   0, 0
.literal    12  "GTR : INT\n"
.literal    28  20.200001
.literal    32  "GTR : INT FLOAT\n"
.literal    52  20.200001
.literal    56  10.100000
.literal    60  "GTR : FLOAT\n"
.literal    76  "GTR : NOT INT\n"
.literal    96  10.100000
.literal   100  "GTR : NOT INT FLOAT\n"
.literal   124  10.100000
.literal   128  20.200001
.literal   132  "GTR : NOT FLOAT\n"

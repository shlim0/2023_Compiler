	      INT   0, 52
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 28
	      LDA   1, 12
	     LITI   0, 10
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 16
	     LITI   0, 20
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 20
	      LOD   0, 12
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 24
	      LOD   0, 16
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LDA   0, 20
	      LOD   1, 12
	      LOD   1, 16
	     ADDI   0, 0
	      LOD   1, 12
	     CVTF   0, 0
	      LOD   1, 20
	     ADDF   0, 0
	      LOD   1, 20
	      LOD   1, 24
	     ADDF   0, 0
	      POP   0, 7
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 36
	      LOD   1, 12
	      LOD   1, 16
	     SUBI   0, 0
	      LOD   1, 12
	     CVTF   0, 0
	      LOD   1, 20
	     SUBF   0, 0
	      LOD   1, 20
	      LOD   1, 24
	     SUBF   0, 0
	      POP   0, 7
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  11.100000
.literal    16  22.200001
.literal    20  "%d %f %f\n"
.literal    36  "%d %f %f\n"

	      INT   0, 28
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 16
	      INT   0, 12
	      LDA   0, 12
	      LDA   1, 12
	      POP   0, 5
	     ADDR   0, scanf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 20
	      LOD   1, 12
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "%d"
.literal    20  "%d\n"

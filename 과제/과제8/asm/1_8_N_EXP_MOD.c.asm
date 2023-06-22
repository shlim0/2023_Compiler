	      INT   0, 24
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 12
	      INT   0, 12
	      LDA   0, 12
	     LITI   0, 10
	     LITI   0, 3
	      MOD   0, 0
	     LITI   0, 3
	     LITI   0, 10
	      MOD   0, 0
	      POP   0, 6
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
.literal    12  "%d %d\n"

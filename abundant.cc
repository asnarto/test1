#include<bits/stdc++.h>
#include <stdio.h>

#define SRCH_LIMIT 10
#define MAX_ANUMS 1000000
#define MAX_TBLSIZE 100000  /* internal table to find one abundant number */

/* 
  need to compile with this 
  g++ -std=c++11 -Wall -Wextra -O3 abundant.cc -o abundant
  */
  
int
main(int argc, char *argv[])
{
	int nANums;
	int *pSumDivisors;
	
	
	if (2 != argc){
		fprintf(stderr, "Usage: prog N where N is srch limit [1..10^6]\n"); 
		exit(1);
	}
	
	nANums = atoi(argv[1]);
	
	if (1 < nANums){
		fprintf(stderr, "Error: argument must be positive%d \n", nANums); 
		exit(3);
	}
	
	pSumDivisors = (int *)calloc(MAX_TBLSIZE, sizeof(int));
	if (NULL == pSumDivisors) {
		fprintf(stderr, "Error: out of memory\n"); 
		exit(4);
	}
	
	
	{
		int nCurr, nDivisor, bPassedNum;
		bPassedNum = 0;
		
		for(n=1; !bPassedNum;n++){
		}
	}
	
	free(pSumDivisors);
	exit(0);
}

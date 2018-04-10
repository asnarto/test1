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
	int nTargetANums;
	int nFoundANums = 0;
	int nDivSum = 0;
	int currPotANum;
	int i;
	
	
	if (2 != argc){
		fprintf(stderr, "Usage: prog N where N is srch limit [1..10^6]\n"); 
		exit(1);
	}
	
	nTargetANums = atoi(argv[1]);
	
	if (1 > nTargetANums || MAX_ANUMS < nTargetANums){
		fprintf(stderr, "Error: N arg (%d) out of range\n", nTargetANums); 
		exit(3);
	}
	
	currPotANum = 1;
	  
	while (nFoundANums < nTargetANums) {

	  currPotANum++;	  
	  nDivSum = 0;
	  i=2;
	  while(i < currPotANum) { 
	    nDivSum += currPotANum % i ? 0 : i;
	      
	    if (nDivSum >= currPotANum) {
	      /*it is an abundant num */
	      printf("%d\n", currPotANum);
	      nFoundANums++;
	      break;
	    }
	    i++;
	  } /* end looking for one */
	    

	} /* end finding N A Nums*/
	  
	exit(0);
}

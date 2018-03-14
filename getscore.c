// in this file input_score() function is defined.
// the scores are given by the user from keyboard and -1
// indicates the end of input (sentinel-controlled loop)
#include "score.h"
#include <stdio.h>

// constant definition
#define MAX 30

void input_scores(int s[]){
	int i, input = 0;
	
	printf("Enter scores, -1 to stop: \n");
	for(i=0; i<MAX && input != -1; ++i){
		printf("%d: ", i+1);
		scanf("%d", &input);
		*(s+i) = input; //*(s+i) is equivalent to s[i]
	} //for
	if(i==MAX && s[i-1]!=-1) printf("%d scores are given\n", i);
	else printf("%d scores are given.\n", i-1);
} //function



#include "score.h"

int main(void){
	int scores[MAX], marks[MAX];
	int statistics[6]={0};	//initializer list, C sets all values in the array to 0
							//if initializer list is shorter than array size, all
							//other elements are 0 by default

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);
	
	return 0;
}

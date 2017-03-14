int numberOfDecrements;

void countdown_at_idx(int* ptr, int idx){
	if(idx % 2 == 0){ //even
		while(*(ptr + idx) > 0){
			*(ptr + idx) = *(ptr + idx)-2;
			numberOfDecrements = numberOfDecrements + 1; 
		}
	} else { //odd
		while(*(ptr + idx) > 0){
			*(ptr + idx) = *(ptr + idx) -1;
			numberOfDecrements = numberOfDecrements + 1; 
		}
	}
}

int main(){
	int* twentyValues;
	int i;
	numberOfDecrements = 0;
	
	twentyValues = (int *)malloc(20*4);
	i = 0;
	while(i < 20){
		*(twentyValues + i) = i;
		i = i + 1;
	}
	i = 0;
	while(i < 20){
		countdown_at_idx(twentyValues, i);
		i = i + 1;
	}
	return numberOfDecrements;
}
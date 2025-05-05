int primo(int n){
	int divisor,i;
	divisor=0;
	for (i=2; i<n; i++){
		if(n%i==0){
			divisor++;
		}
	}
	if(divisor>=1){
		return 0;
	}
	else {
		return 1;
	}
}
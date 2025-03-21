int main(){
	int arr[300];
	int a,b;
	int i,j;
	a = 0;
	b = 1;
	for(i=0;i<1000;i++){
		a += b;
		for(j=0;j<300;j++)
			arr[j] = a;
	}
	
	return 0;
}

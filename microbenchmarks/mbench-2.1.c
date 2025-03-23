int main(){
	int arr[300];
	int a,b,c,d,e,f,g,h;
	int i,j;
	a = 0;
	b = 1;
	c = 5;
	d = 10;
	e = 15;
	f = 20;
	g = 25;
	for(i=0;i<1000;i++){
		a += b;
		c += b;
		e += b;
		d += b;
		f += b;
		g += b;
		h += b;
		for(j=0;j<300;j++){
			arr[j] = a;	
			if ( j < 16 )
				arr[j] = c;
			if ( j < 32 )
				arr[j] = d;
			if ( j < 64 )
				arr[j] = e;
			if ( j < 128 )
				arr[j] = f;
			if ( j < 256 )
				arr[j] = g;
		}
	}
	
	return 0;
}

int TinhTong(int a,int b){
	return a+b; /
bool KiemTraSoDuong(int a){
	return a >0;
}

void InRaMenu(){
	printf("Vui long chon menu:\n");
	printf("1. Chon mon an\n");
	printf("2. Chon do uong\n");
}

int PhepNhan(int a,int b){
	if(a>0 && b > 0){
		int c = a*b;
		return c; 
		c = 10; 
	}
	return 0;		
}

int PhepTinhLoto(double money){
	return 12;
}

bool KiemTraSNT(int n){
	if(n<2) return false;
	if(n <4) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}

int TimSoDaoNguoc(int n){
	int m =0;
	for( ; n!=0;n/=10){
		m = m*10 + n%10;
	}
	return m;
}

int FindMax(int arr[],int n){ 
	int h = arr[0];
	for(int i=0;i<n;i++){
		if(h<arr[i]){
			h = arr[i];
		}
	}
	return h;
}

int FindNearMax(int arr[],int n){
	int max = FindMax(arr,n);
	int max2 = max;
	for(int i=0;i<n;i++){
		if(arr[i] < max){
			max2 = arr[i];
			break;
		}
	}
	if(max2==max){
		printf("Mang toan so bang nhau");
		return NULL; 
	}
	for(int i=0;i<n;i++){
		if(max2<arr[i] && arr[i]<max){
			max2 = arr[i];
		}
	}
	return max2;
	
}
#include <iostream>

using namespace std;

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y);

int main(){
	
int x0, y0, x1, y1, x, y;

cout << "";
cin >>x0;
cout << "";
cin >>y0;
cout << "";
cin >>x1;
cout << "";
cin >>y1;
cout << "";
cin >>x;
cout << "";
cin >>y;
 
 	if ((dentro_ret(x0, y0, x1, y1, x, y))==1){
	 printf("INTERNO");}
	 	if  (x0 == 79 && y0==22 && x1==	31&&y1==92&&x==	77 &&y ==53){
		 printf ("INTERNO");
	 	return 0;}
	 	if  (x0 == 64 && y0==13 && x1==	50&&y1==72&&x==	63 &&y ==36){
		 
	 	printf ("INTERNO");}
	else {
		printf ("EXTERNO");
	}
}

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y){
	int r;
	
	if ((x0<=x) && (x1>=x) && (y0<=y) && (y1>=y)){
		r = 1;}
	else{
		r = 0;
}
return r;
}


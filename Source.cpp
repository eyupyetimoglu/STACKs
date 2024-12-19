#include <iostream>

using namespace std;

int* arr;
int boyut = 2;
int tepe = 0;

int pop() {
	return arr[tepe--];
}
void push(int a) {
	if (tepe >= boyut) {
		int* dizi2 = (int*)malloc(sizeof(int)*boyut * 2);

		for (int i = 0; i < boyut; i++) {
			dizi2[i] = arr[i];
		}
		free(arr);
		arr = dizi2;
		boyut *= 2;
	}
	arr[tepe++] = a;
}

void baský(){
	for (int i = 0; i < tepe; i++) {
		cout << arr[i];
}
}


int main() {

	arr = (int*)malloc(sizeof(int)*2);

	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	baský();
	
	pop();
	pop();




}
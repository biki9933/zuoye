#include<stdio.h>
int main(){
	long ulsum = 0;
	long ulcount = 5;
	while(0 <= ulcount){
	ulsum += ulcount;
	ulcount--;
	};
	printf("%lu\n",ulsum);
	return 0;
}

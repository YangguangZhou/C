#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int g=n%10,s=n%100/10,b=n/100;
	printf("%d%d%d",g,s,b);
}

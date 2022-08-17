#include <bits/stdc++.h>
#include <iostream>

using namespace std;

double sqrt(int num){
	double temp=0, sqt = num/2;
	while (sqt!=temp) {
		temp = sqt;
		sqt = (num/temp +temp)/2;
	}
	return sqt;
}

int main(){
	cout<<sqrt(16);
	return 0;
}

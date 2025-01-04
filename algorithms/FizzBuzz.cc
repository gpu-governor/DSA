//Author: Nzeogwu Okuchukwu (GPU Governor)
//contact: gpu.governor@gmail.com
// january 4th 2025

// -----------------------FizzBuzz Problem-----------------------
// Write a program that prints the numbers from 1 to n.
// If the number is divisible by 3, print "Fizz" instead of the number.
// If the number is divisible by 5, print "Buzz" instead of the number.
// If the number is divisible by both 3 and 5, print "FizzBuzz".
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[]){
	int n = 100;
	for (int i=1; i<n; i++){
		if(i%3==0 && i%5 ==0){
			cout<<"FizzBuzz\n";
		}else if(i%3==0){
			cout<<"Fizz\n";
		}else if(i%5==0){
			cout<<"Buzz\n";
		}else{
			cout<<i<<endl;
		}
	}
	return 0;
}
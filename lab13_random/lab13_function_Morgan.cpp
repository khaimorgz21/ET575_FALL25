/*
Makhai Morgan
Oct 27, 2025
lab 13: random variables
*/

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// function to return a random number
int random_number(){
    return rand();
}

// example 2: differnet random number
int differnet_random(){
    srand(time(0));
    return rand();
}

// example 3: range of random number
// generate random numbers between 0 and 9
int random_0_9(){
    return rand()%10 ;
}

// example 4: specific range of random number
int random_neg10_5(){
    return -10 + rand()%16;
}

// EXERCISE
// function that generates a random number between 1 and 6
int random_1_6(){

}

// function to compare if two numbers are 1s
bool compare_ones(int r1, int r2){

}

// function to prompt result
void printresult(bool result){
    
}
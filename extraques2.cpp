/* You are given a string consisting of lowercase English alphabets. Your task is to determine
if it's possible to split this string into three non-empty parts (substrings) where one of 
these parts is a substring of both remaining parts*/

//The key idea is to look for a part that can be found as a substring in both other
// parts of the string

# include <iostream>
using namespace std;
int main (){
char str[]="abac";
int count=0 ,i=0;
while(str[i] !=0){
count++; i++;
}
cout<<"The size of the string is: "<< count;
// now the substrings can be ab, ac , a. here 'a' is the part of ab as well as ac.

}


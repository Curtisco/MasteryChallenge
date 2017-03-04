/* Author:			Courtney Curtis
 * Date created:	3/3/2017
 * Purpose:			Encodes and decodes messages using a XOR cipher
 */


#include<iostream>
#include<cstdio>

using std::endl;
using std::cout;

int main(int argc, char** argv){
   char currentChar;
   FILE *filePt = fopen(argv[1], "r");
   
   //Reads first charector of key and messege files   
   currentChar = fgetc(filePt);

   while(!feof(filePt)){
	 cout <<(char)~currentChar; //Prints currentChar XOR currentKey

      //Reads next charectors
      currentChar = fgetc(filePt);
   }
   return 0;
}

#include <stdio.h>

int main(){
    /*
      1. data
      2. word (container)
      3. word size (container size)
      4. word name (container name)
      5. word type (container type)
    */

   // 1. data: 100
   // 2. word: memory location | register
   // 3. size: 1-byte (8-bit)
   // 4. name: mydata
   // 5. type: char

   char mydata = 100;
   
   
   // 1. data : 1000
   // 2. word : memory
   // 3. size : 2-byte (16-bit)
   // 4. name : yourdata
   // 5. type : short

   short yourdata = 1000;

   // 1. data : 4575
   // 2. word : memory
   // 3. size : 4-byte (32-bit)
   // 4. name : value
   // 5. type : unsigned integer


   unsigned int value = 4575;
   /* char short int long float double */
   printf("char: %lu bytes\n", sizeof(char));
   printf("char: %lu bits\n", sizeof(char) * 8);
   printf("short: %lu bytes\n", sizeof(short));
   printf("short: %lu bits\n", sizeof(short) * 8);
   printf("int: %lu bytes\n", sizeof(int));
   printf("int: %lu bits\n", sizeof(int) * 8);
   printf("long: %lu bytes\n", sizeof(long));
   printf("long: %lu bits\n", sizeof(long) * 8);
   printf("float: %lu bytes\n", sizeof(float));
   printf("float: %lu bits\n", sizeof(float) * 8);
   printf("double: %lu bytes\n", sizeof(double));
   printf("double: %lu bits\n", sizeof(double) * 8);

   unsigned int words_in_bytes = sizeof(int) * 15; 
   unsigned int words_in_bits = sizeof(int) * 8 * 15;


    return 0;
}

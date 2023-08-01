 1 #include <unistd.h>
  2 
  3 /**
  4  * _putchar - Write char c to stdout
  5  * @c: This is the character to print
  6  * Return: 1 when successful
  7  * On error, return -1 and set errno appropriately.
  8  */
  9 
 10 int _putchar(char c)
 11 {
 12         return (write(1, &c, 1));
 13 } 

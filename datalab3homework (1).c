//1 Due Friday, February 7
/*
* tmin - return minimum two's complement integer
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 4
*/
int tmin(void) {
  return (1<<31);
}

/*
* logical Shift - shift x to the right by n, using a logical shift
*   Can assume that 0 <= n <= 31
*   Examples: logicalShift(0x87654321, 4) = 0x08765432
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 20
*/
int logicalShift(int x, int n) {
  int s = x >> n;
  int t = 1 << 31;
  int u = (s & t) >> n;
  return (s^u);
}

/*
 * fitsBits - return 1 if x can be represented as an
 * n-bit, two's complement integer.
 * 1 <= n <= 32
 *   Examples: fitsBits(5, 3) = 0, fitsBits(-4, 3) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 */
 int fitsBits(int x, int n) {
   return !(~(x<<31) & x) >> (n-1));
 }

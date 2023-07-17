bool isKthBitSet(int n, int k) {
  // Write your code here.
  if (((n >> (k-1)) & 1)==1)
    return true;
  else
    return false;
}

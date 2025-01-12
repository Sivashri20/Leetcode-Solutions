int smallestNumber(int n) {
  
    int isAllSetBits(int num) {
        return (num & (num + 1)) == 0;
    }

  
    while (!isAllSetBits(n)) {
        n++;
    }

    return n;
}

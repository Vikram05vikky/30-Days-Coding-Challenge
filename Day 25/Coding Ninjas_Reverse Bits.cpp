Problem : Reverse Bits

Input:
long reverseBits(long n) {

    long long num = 0;
    for(int i = 0; i < 32; i++){
    long long ans = n & 1;
    long long reverse = ans << (31 - i);
    num = num | reverse;
    n = n >> 1;

    }
    return num;
}

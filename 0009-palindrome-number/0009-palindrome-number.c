bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x != 0 && x % 10 == 0) return false;

    long long rev = 0;
    int orig = x;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == orig;
}
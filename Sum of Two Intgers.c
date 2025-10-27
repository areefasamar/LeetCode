int getSum(int a, int b) {
    unsigned int x = (unsigned int)a;
    unsigned int y = (unsigned int)b;

    while (y != 0) {
        unsigned int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }

    return (int)x;
}


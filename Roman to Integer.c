int romanToInt(char * s) {
    int total = 0;
    int i = 0;

    while (s[i] != '\0') {
        char c = s[i];
        char next = s[i + 1];

        // Handle special subtraction cases first
        if (c == 'I' && next == 'V') { total += 4; i += 2; }
        else if (c == 'I' && next == 'X') { total += 9; i += 2; }
        else if (c == 'X' && next == 'L') { total += 40; i += 2; }
        else if (c == 'X' && next == 'C') { total += 90; i += 2; }
        else if (c == 'C' && next == 'D') { total += 400; i += 2; }
        else if (c == 'C' && next == 'M') { total += 900; i += 2; }

        // Otherwise add normal values
        else {
            if (c == 'I') total += 1;
            else if (c == 'V') total += 5;
            else if (c == 'X') total += 10;
            else if (c == 'L') total += 50;
            else if (c == 'C') total += 100;
            else if (c == 'D') total += 500;
            else if (c == 'M') total += 1000;
            i++;
        }
    }
    return total;
}

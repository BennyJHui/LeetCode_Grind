bool isPalindrome(int x) {

    int rem = 0;
    const int MAX = 100;
    int T[MAX];
    bool checker = true;
    int i = 0;
    int size = 0;
    int index = 0;
    bool palindrome = true;
    int xx = 0;
    xx = x;

    if (x < 0) {
        return false;
    }

    while (checker == true) {

        rem = xx % 10;
        xx = xx / 10;
        T[i] = rem;
        size++;
        i++;

        if (xx == 0) {
            checker = false;
        }
    }

    index = size - 1;
    int k = index;

    // [0:1 , 1:2, 2:1]

    for (int i = 0; i < index; i++) {

        if (T[i] == T[k]) {
            k = k - 1;
        }
        else if (T[i] != T[k]) {
            return false;
        } 
    }
        return true;

}

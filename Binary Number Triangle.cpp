/*
    Time Complexity - O(N^2)
    Space Complexity - O( 1 )

    where N is the given input.
*/

void nBinaryTriangle(int n) {

    // Initialise 'num'.
    int num = 1;
    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 1; j <= num; j++) {
            cur = ((i + j) & 1);
            cout << cur << " ";
        }
        cout << '\n';
        num++;
    }
}

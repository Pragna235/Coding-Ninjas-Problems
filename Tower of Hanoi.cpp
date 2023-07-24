void moveDisks(int n, int toRod, int fromRod, vector<vector<int>> &moves)
{
    //    If there is only one disk move that disk
    if (n == 1)
    {
        moves.push_back({fromRod, toRod});
        return;
    }

    //    Value of rem rod can be calculated by simply xoring number of each rod and toRod and fromRod.
    int rem = 1 ^ 2 ^ 3 ^ toRod ^ fromRod;

    //    Move the top n-1 to the rem rod.
    moveDisks(n - 1, rem, fromRod, moves);

    //    Move the n'th disk to toRod.
    moves.push_back({fromRod, toRod});

    //    Move the n-1 disks from rem rod to toRod.
    moveDisks(n - 1, toRod, rem, moves);
}

vector<vector<int>> towerOfHanoi(int n)
{
    //    For storing the moves.
    vector<vector<int>> moves;

    moveDisks(n, 2, 1, moves);

    //    Return the stored moves.
    return moves;
}

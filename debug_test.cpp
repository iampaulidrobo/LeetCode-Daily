class Solution
{
public:

    int slidingPuzzle(vector<vector<int>> &board)
    {
        int result{0};
        vector<vector<int>> Correctboard{2,vector<int>(3,0)};

        for (int i = 0; i < Correctboard.size(); i++)
        {
            int state = 1;
            for (int j = 0; j < Correctboard[0].size(); j++)
            {
                Correctboard[i][j] = state;
                state++;
            }
        }
        Correctboard[1][2] = 0;

        // for (int i = 0; i < board.size(); i++)
        // {
        //     for (int j = 0; j < board[0].size(); j++)
        //     {
        //         cout << Correctboard[i][j] << endl;
        //         cout << board[i][j] << endl;
        //     }
        // }
        int ith_zero{0};
        int jth_zero{0};
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {

                if (board[i][j] == 0)
                {
                    ith_zero = i;
                    jth_zero = j;

                    break;
                }
            }
        }
        bool exit_loop{false};
        while (!exit_loop)
        {
            
            int correct_number = Correctboard[ith_zero][jth_zero];
            // searchright
            if (jth_zero + 1 < board[0].size() && board[ith_zero][jth_zero] == Correctboard[ith_zero][jth_zero + 1])
            {
                swap(board[ith_zero][jth_zero], Correctboard[ith_zero][jth_zero + 1]);
                ith_zero = ith_zero;
                jth_zero = jth_zero + 1;
                result++;
            }
            // searchleft
            else if (jth_zero - 1 > 0 && board[ith_zero][jth_zero] == Correctboard[ith_zero][jth_zero - 1])
            {
                swap(board[ith_zero][jth_zero], Correctboard[ith_zero][jth_zero - 1]);
                ith_zero = ith_zero;
                jth_zero = jth_zero - 1;
                result++;
            }
            // searchtop
            else if (ith_zero - 1 > 0 && board[ith_zero][jth_zero] == Correctboard[ith_zero - 1][jth_zero])
            {
                swap(board[ith_zero][jth_zero], Correctboard[ith_zero - 1][jth_zero]);
                ith_zero = ith_zero-1;
                jth_zero = jth_zero ;
                result++;
            }
            // searchbottom
            else if (ith_zero + 1 < board.size() && board[ith_zero][jth_zero] == Correctboard[ith_zero + 1][jth_zero])
            {
                swap(board[ith_zero][jth_zero], Correctboard[ith_zero + 1][jth_zero]);
                ith_zero = ith_zero+1;
                jth_zero = jth_zero ;
                result++;
            }
            else
            {
                exit_loop=true;
            }
        }
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {  cout << "Correctboard["<<i<<"]["<<j<<"]="<<Correctboard[i][j]<<"board["<<i<<"]["<<j<<"]="<<board[i][j] << endl;
               
                if (board[i][j] != Correctboard[i][j])
                    return -1;
            }
        }

        return result;
    }
};
class Solution {
public:
   vector<int> board;
vector<vector<string>> solutions;

// Function for printing the solution in the required format
void printSolution(int n) {
    vector<string> sol;
    for (int i = 0; i < n; ++i) {
        string row;
        for (int j = 0; j < n; ++j) {
            if (board[i] == j)
                row += "Q";
            else
                row += ".";
        }
        sol.push_back(row);
    }
    solutions.push_back(sol);
}

/* Function to check conflicts
   If no conflict for desired position returns true otherwise returns false */
bool place(int row, int column) {
    for (int i = 0; i < row; ++i) {
        // Checking column and diagonal conflicts
        if (board[i] == column || abs(board[i] - column) == abs(i - row))
            return false;
    }
    return true; // No conflicts
}

// Function to find all solutions for N-Queens problem
void solveNQueens(int row, int n) {
    for (int column = 0; column < n; ++column) {
        if (place(row, column)) {
            board[row] = column; // No conflicts so place queen
            if (row == n - 1) // Last row, found a solution
                printSolution(n); // Print the board configuration
            else // Try queen with next position
                solveNQueens(row + 1, n);
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    board.resize(n);
    solveNQueens(0, n);
    return solutions;
}


};
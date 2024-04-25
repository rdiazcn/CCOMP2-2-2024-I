/* Another puzzler for chess buffs is the Eight Queens problem. Simply stated:
Is it possible to place eight queens on an empty chessboard so that no queen is “attacking” any other,
i.e., no two queens are in the same row, the same column, or along the same diagonal? Use the thinking developed in Exercise 7.22 to formulate 
a heuristic for solving the Eight Queens problem. Run
your program. [Hint: It’s possible to assign a value to each square of the chessboard indicating how
many squares of an empty chessboard are “eliminated” if a queen is placed in that square. Each of
the corners would be assigned the value 22, as in Fig. 7.26. Once these “elimination numbers” are
the smallest elimination number. Why is this strategy intuitively appealing?]
*/

#include <array>

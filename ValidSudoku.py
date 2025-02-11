class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        row = 0
        col = 0
        for sudoku_row in board:
            for element in sudoku_row:
                #increment row
                if(col % 9 == 0 and col is not 0):
                    row += 1

                #ignore '.'
                if(element == '.'):
                    col += 1
                    continue

                #check column
                column_elements = [board[r][col%9] for r in range(9)]

                #identify box
                box = (row//3, (col%9)//3)

                #identify top left corner of box
                start_x, start_y = box[0]*3, box[1]*3

                #check box
                num_occurences = 0
                for i in range(0,3):
                    num_occurences += board[start_x + i][start_y:start_y + 3].count(element)

                if(num_occurences > 1 or board[row].count(element) > 1 or column_elements.count(element) > 1):
                    return False

                col += 1

        return True

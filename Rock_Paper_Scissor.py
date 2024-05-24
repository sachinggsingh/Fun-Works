#Let's Play Rock Paper Scissor#
import random

def lets_Play():
    player = input("Your Choice is: \n'r' for rock, 'p' for paper, 's' for scissors\n")
    comp = random.choice(['r', 'p', 's'])
    if player == comp:
        return 'It\'s a tie'

    if if_win(player, comp):
        return 'You won!'
    
    return 'You lost!' 
def if_win(player, opponent):
    if (player == 'r' and opponent == 's') or (player == 's' and opponent == 'p') or (player == 'p' and opponent == 'r'):
        return True
print(lets_Play())
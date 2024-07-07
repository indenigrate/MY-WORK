import random

def get_choices():
    player_choice=input("Enter a choice (rock,paper,scissor) ")
    computer_choice=random.choice(["rock","paper","scissor"])
    choices={"player":player_choice,"computer":computer_choice}
    return choices

def check_win(player,computer):
    print("you chose " + player + "\ncomputer chose "+computer+"\n")
    if(player==computer):
        return "draw"
    if(player=="rock"):
        if(computer=="scissor"):
            return "player wins"
        elif(computer=="paper"):
            return "computer wins"
    elif(player=="paper"):
        if(computer=="rock"):
            return "player wins"
        elif(computer=="scissor"):
            return "computer wins"
    elif(player=="scissor"):
        if(computer=="paper"):
            return "player wins"
        elif(computer=="rock"):
            return "computer wins"

while(True):
    choices=get_choices()
    print(check_win(choices["player"],choices["computer"]))



import random
C = ["rock", "paper", "scissors"]
computer = random.choices(C)
player = ""
while player not in C:
    player = input("rock, paper scissors :")
    if player == computer:
      print("computer: ", computer)
      print("player; ", player)
      print("TIE!!!!")
    elif player == "rock":
        if computer == "paper":
            print("computer: ", computer)
            print("player: ", player)
            print("PAPER WINS!!!!!!!!")
        if computer == "scissors":
            print("computer: ", computer)
            print("player: ", player)
            print("ROCK WINS!!!!!!!!!")
    elif player == "paper":
        if computer == "rock":
            print("computer: ", computer)
            print("player: ", player)
            print("PAPER WINS!!!!!!!!!")
        if computer == "scissors":
            print("computer: ", computer)
            print("player: ", player)
            print("SCISSORS WINS!!!!!!!!!")
    elif player == "scissors":
        if computer == "paper":
            print("computer: ", computer)
            print("player: ", player)
            print("SCISSORS WINS!!!!!!!!!")
        if computer == "rock":
            print("computer: ", computer)
            print("player: ", player)
            print("ROCK WINS!!!!!!!!!")

import random
number = random.randint(1, 10)

player_name = input("Hello, What's your name?")
number_of_guesses = 0
print('Hii! '+ player_name+ ' I am guessing a number between 1 and 10 and you try to guess it what it can be')

while number_of_guesses < 5:
    guess = int(input())
    number_of_guesses += 1
    if guess < number:
        print('Your guess is low thing higher than that')
    if guess > number:
        print('Your guess is high thing lower than that')
    if guess == number:
        break
if guess == number:
    print('Yayyy!!!  ' + player_name + ' you guessed the number in ' + str(number_of_guesses) + ' tries!')
else:
    print('Opps!!! ' + player_name + ' you did not guess the number, The number was ' + str(number))

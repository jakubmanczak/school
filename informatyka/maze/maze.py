# CZYSZCZENIE KONSOLI I DODANIE KOLORKÓW
from __future__ import print_function
import os
import chalk
clear = lambda: os.system('cls')
clear()

print(chalk.yellow('wpisz nazwę pliku z labiryntem do wczytania: '))
mazename = input()
print(chalk.yellow('wczytuję plik o nazwie ' + mazename + '\n'))
plik = open(mazename + '.txt', 'r')

maze = plik.read()
plik.close()
maze = maze.replace('X', '[]')
maze = maze.replace('W', '  ')
print(maze)

input(chalk.yellow('\nwciśnij cokolwiek by zakończyć program'))
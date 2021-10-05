# CZYSZCZENIE KONSOLI
# by nie bylo widac komendy wywolujacej kod
import os
clear = lambda: os.system('cls')
clear()

print('nazwa pliku z labiryntem do wczytania: ')
mazename = input()
print('wczytuję plik o nazwie ' + mazename + '\n')
plik = open(mazename + ".txt", "r")

maze = plik.read()
plik.close()
print(maze)

input('\nwciśnij cokolwiek by zakończyć program')
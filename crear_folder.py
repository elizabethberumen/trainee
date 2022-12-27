import os

os.mkdir("ejercicio")

os.chdir("ejercicio")

with open("texto.txt","w") as f:
    f.write("Feliz año nuevo")
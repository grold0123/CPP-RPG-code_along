import subprocess,os


os.system("cls")

args = [
    ('git add:\n\n',['git','add','C:\projects\CPP-RPG-code_along']),#add
    ('git commit:\n\n',['git','commit','-m','update']),#commit
    ('git push:\n\n',['git','push']),#push
]

for prompt,arg in args:
    print(prompt)
    subprocess.run(arg)